/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include "common/tokenizer.h"
#include "common/events.h"
#include "graphics/cursorman.h"

#include "hypno/grammar.h"
#include "hypno/hypno.h"

namespace Hypno {

extern int parse_arc(const char *);

void HypnoEngine::parseArcadeShooting(Common::String prefix, Common::String filename, Common::String data) {
	debugC(1, kHypnoDebugParser, "Parsing %s%s", prefix.c_str(), filename.c_str());
	parse_arc(data.c_str());
	Level level;
	level.arcade = g_parsedArc;
	level.arcade.prefix = prefix;
	_levels[filename] = level;
	g_parsedArc.background.clear();
	g_parsedArc.player.clear();
	g_parsedArc.shoots.clear();
}

ShootSequence HypnoEngine::parseShootList(Common::String filename, Common::String data) {
	debugC(1, kHypnoDebugParser, "Parsing %s", filename.c_str());
	Common::StringTokenizer tok(data, " ,\t");
	Common::String t;
	Common::String n;
	ShootInfo si;
	ShootSequence seq;
	while (!tok.empty()) {
		t = tok.nextToken();
		if (t[0] == '\n')
			continue;
		n = tok.nextToken();
		if (t == "Z")
			break;

		Common::replace(n, "\nS", "");
		Common::replace(n, "\nZ\n", "");
		si.name = n;
		si.timestamp = atoi(t.c_str());
		seq.push_back(si);
		debugC(1, kHypnoDebugParser, "%d -> %s", si.timestamp, si.name.c_str());
	}
	return seq;
}

void HypnoEngine::drawPlayer() { error("not implemented"); }
void HypnoEngine::drawHealth() { error("not implemented"); }
void HypnoEngine::drawShoot(Common::Point target) { error("not implemented"); }

void HypnoEngine::hitPlayer() {
	// if the player is hit, play the hit animation
	if (_playerFrameIdx < _playerFrameSep)
		_playerFrameIdx = _playerFrameSep;
}

void HypnoEngine::runArcade(ArcadeShooting arc) {

	_font = FontMan.getFontByUsage(Graphics::FontManager::kConsoleFont);
	Common::Event event;
	Common::Point mousePos;
	Common::List<uint32> shootsToRemove;
	ShootSequence shootSequence = arc.shootSequence;

	_levelId = arc.id;
	_shootSound = arc.shootSound;
	_score = 0;
	_health = arc.health;
	_maxHealth = _health;
	_defaultCursor = "arcade";
	_shoots.clear();
	_playerFrames = decodeFrames(arc.player);
	_playerFrameSep = 0;


	for (Frames::iterator it =_playerFrames.begin(); it != _playerFrames.end(); ++it) {
		if ((*it)->getPixel(0, 0) == _pixelFormat.RGBToColor(0, 255, 255))
			break; 
		_playerFrameSep++;
	}

	if(_playerFrameSep == _playerFrames.size())
		error("No player separator frame found!");

	_playerFrameIdx = -1;

	MVideo background = MVideo(arc.background, Common::Point(0, 0), false, false, false);

	changeCursor("arcade");
	playVideo(background);
	bool shootingPrimary = false;
	bool shootingSecondary = false;

	while (!shouldQuit()) {

		while (g_system->getEventManager()->pollEvent(event)) {
			mousePos = g_system->getEventManager()->getMousePos();
			// Events
			switch (event.type) {

			case Common::EVENT_QUIT:
			case Common::EVENT_RETURN_TO_LAUNCHER:
				break;

			case Common::EVENT_KEYDOWN:
				if (event.kbd.keycode == Common::KEYCODE_c) {
					background.decoder->pauseVideo(true);
					showCredits();
					background.decoder->pauseVideo(false);
				}
				break;

			case Common::EVENT_LBUTTONDOWN:
				if (clickedPrimaryShoot(mousePos))
					shootingPrimary = true;
				break;

			case Common::EVENT_RBUTTONDOWN:
				if (clickedSecondaryShoot(mousePos))
					shootingSecondary = true;
				break;

			case Common::EVENT_RBUTTONUP:
				shootingSecondary = false;
				break;

			case Common::EVENT_MOUSEMOVE:
				drawCursorArcade(mousePos);
				break;

			default:
				break;
			}
		}

		if (background.decoder->needsUpdate()) {
			drawScreen();
			updateScreen(background);
			if (shootingPrimary || shootingSecondary) {
				shoot(mousePos);
				drawShoot(mousePos);
				shootingPrimary = false;
			}

			drawPlayer();
			drawHealth();
		}

		if (_health <= 0) {
			skipVideo(background);
			if (!arc.defeatVideos.empty()) {
				MVideo video(arc.defeatVideos.front(), Common::Point(0, 0), false, false, false);
				runIntro(video);
			}
			_nextLevel = arc.levelIfLose;
			debugC(1, kHypnoDebugArcade, "Losing level and jumping to %s", _nextLevel.c_str());
			break;
		}

		if (!arc.transitionVideo.empty() && background.decoder->getCurFrame() >= arc.transitionTime) {
			debugC(1, kHypnoDebugArcade, "Playing transition %s", arc.transitionVideo.c_str());
			arc.transitionTime = background.decoder->getFrameCount() + 1;
			MVideo video(arc.transitionVideo, Common::Point(0, 0), false, false, false);
			runIntro(video);
			skipVideo(background);
		}

		if (!background.decoder || background.decoder->endOfVideo()) {
			skipVideo(background);
			if (!arc.winVideos.empty()) {
				MVideo video(arc.winVideos.front(), Common::Point(0, 0), false, false, false);
				runIntro(video);
			}
			_nextLevel = arc.levelIfWin;
			debugC(1, kHypnoDebugArcade, "Wining level and jumping to %s", _nextLevel.c_str());
			break;
		}

		if (shootSequence.size() > 0) {
			ShootInfo si = shootSequence.front();
			if (si.timestamp <= background.decoder->getCurFrame()) {
				shootSequence.pop_front();
				for (Shoots::iterator it = arc.shoots.begin(); it != arc.shoots.end(); ++it) {
					if (it->name == si.name && it->animation != "NONE") {
						Shoot s = *it;
						s.video = new MVideo(it->animation, it->position, true, false, false);
						playVideo(*s.video);
						_shoots.push_back(s);
						playSound(_soundPath + arc.enemySound, 1);
					}
				}
			}
		}

		uint32 i = 0;
		shootsToRemove.clear();

		for (Shoots::iterator it = _shoots.begin(); it != _shoots.end(); ++it) {
			if (it->video->decoder) {
				int frame = it->video->decoder->getCurFrame();
				if (frame > 0 && frame >= it->explosionFrame - 15 && !it->destroyed) {
					hitPlayer();
				}

				if (frame > 0 && frame >= it->explosionFrame - 3 && !it->destroyed) {
					skipVideo(*it->video);
					//_health = _health - it->damage;
				} else if (frame > 0 && frame >= it->video->decoder->getFrameCount()-2) {
					skipVideo(*it->video);
					shootsToRemove.push_back(i);
				} else if (it->video->decoder->needsUpdate()) {
					updateScreen(*it->video);
				}
			}
			i++;
		}
		if (shootsToRemove.size() > 0) {
			for (Common::List<uint32>::iterator it = shootsToRemove.begin(); it != shootsToRemove.end(); ++it) {
				debugC(1, kHypnoDebugArcade, "Removing %d from %d size", *it, _shoots.size());
				delete _shoots[*it].video;
				_shoots.remove_at(*it);
			}
		}

		if (_music.empty()) {
			_music = _soundPath + arc.music;
			playSound(_music, 1);
		}

		g_system->delayMillis(10);
	}

	// Deallocate shoots
	for (Shoots::iterator it = _shoots.begin(); it != _shoots.end(); ++it) {
		if (it->video->decoder)
			skipVideo(*it->video);
		delete it->video;
	}

	if (background.decoder)
		skipVideo(background);

}

int HypnoEngine::detectTarget(Common::Point mousePos) {
	int i = -1;
	int x = 0;
	int y = 0;
	int w = 0;
	int h = 0;
	for (Shoots::iterator it = _shoots.begin(); it != _shoots.end(); ++it) {
		i++;
		if (it->destroyed || !it->video->decoder)
			continue;
		x = mousePos.x - it->position.x;
		y = mousePos.y - it->position.y;
		w = it->video->decoder->getWidth();
		h = it->video->decoder->getHeight();
		if (it->video->decoder && x >= 0 && y >= 0 && x < w && y < h) {
			if (it->video->currentFrame->getPixel(x, y) > 0)
				return i;
		}
	}
	return -1;
}

void HypnoEngine::drawCursorArcade(Common::Point mousePos) {
	int i = detectTarget(mousePos);
	if (i >= 0)
		changeCursor("target");
	else
		changeCursor("arcade");
		
	g_system->copyRectToScreen(_compositeSurface->getPixels(), _compositeSurface->pitch, 0, 0, _screenW, _screenH);
}

bool HypnoEngine::clickedPrimaryShoot(Common::Point mousePos) { return true; };

void HypnoEngine::shoot(Common::Point mousePos) {
	int i = detectTarget(mousePos);
	int w = 0;
	int h = 0;
	if (i >= 0) {
		playSound(_soundPath + _shoots[i].endSound, 1);
		w = _shoots[i].video->decoder->getWidth();
		h = _shoots[i].video->decoder->getHeight();
		_score++;
		_shoots[i].destroyed = true;
		_shoots[i].video->position = Common::Point(mousePos.x - w / 2, mousePos.y - h / 2);
		_shoots[i].video->decoder->forceSeekToFrame(_shoots[i].explosionFrame + 2);
	}
}

bool HypnoEngine::clickedSecondaryShoot(Common::Point mousePos) {
	return false;
}

} // End of namespace Hypno