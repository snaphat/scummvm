/* ResidualVM - Graphic Adventure Engine
 *
 * ResidualVM is the legal property of its developers, whose names
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

#ifndef BACKENDS_GRAPHICS3D_ANDROID_ANDROID_GRAPHICS3D_H
#define BACKENDS_GRAPHICS3D_ANDROID_ANDROID_GRAPHICS3D_H

#include "common/scummsys.h"
#include "graphics/opengl/framebuffer.h"

#include "backends/graphics/graphics.h"
#include "backends/graphics/android/android-graphics.h"
#include "backends/graphics3d/android/texture.h"

class AndroidGraphics3dManager : public GraphicsManager, public AndroidCommonGraphics {
public:
	AndroidGraphics3dManager();
	virtual ~AndroidGraphics3dManager();

	virtual void initSurface() override;
	virtual void deinitSurface() override;

	virtual AndroidCommonGraphics::State getState() const override;
	virtual bool setState(const AndroidCommonGraphics::State &state) override;

	void updateScreen() override;

	void displayMessageOnOSD(const Common::U32String &msg);

	virtual bool notifyMousePosition(Common::Point &mouse) override;
	virtual Common::Point getMousePosition() override {
		return Common::Point(_cursorX, _cursorY);
	}
	void setMousePosition(int x, int y) {
		_cursorX = x;
		_cursorY = y;
	}

	virtual void beginGFXTransaction() {}
	virtual OSystem::TransactionError endGFXTransaction() {
		return OSystem::kTransactionSuccess;
	}

	virtual const OSystem::GraphicsMode *getSupportedGraphicsModes() const override;
	virtual int getDefaultGraphicsMode() const override;
	virtual bool setGraphicsMode(int mode, uint flags = OSystem::kGfxModeNoFlags) override;
	virtual int getGraphicsMode() const override;

	virtual bool hasFeature(OSystem::Feature f) const override;
	virtual void setFeatureState(OSystem::Feature f, bool enable) override;
	virtual bool getFeatureState(OSystem::Feature f) const override;

	virtual void showOverlay() override;
	virtual void hideOverlay() override;
	virtual void clearOverlay() override;
	virtual void grabOverlay(Graphics::Surface &surface) const override;
	virtual void copyRectToOverlay(const void *buf, int pitch,
	                               int x, int y, int w, int h) override;
	virtual int16 getOverlayHeight() const override;
	virtual int16 getOverlayWidth() const override;
	virtual Graphics::PixelFormat getOverlayFormat() const override;
	virtual bool isOverlayVisible() const override {
		return _show_overlay;
	}

	virtual int16 getHeight() const override;
	virtual int16 getWidth() const override;

	// PaletteManager API
	virtual void setPalette(const byte *colors, uint start, uint num) override;
	virtual void grabPalette(byte *colors, uint start, uint num) const override;
	virtual void copyRectToScreen(const void *buf, int pitch, int x, int y,
	                              int w, int h) override;
	virtual Graphics::Surface *lockScreen() override;
	virtual void unlockScreen() override;
	virtual void fillScreen(uint32 col);

	virtual void setShakePos(int shakeXOffset, int shakeYOffset) {};
	virtual void setFocusRectangle(const Common::Rect &rect) {}
	virtual void clearFocusRectangle() {}

	virtual void initSize(uint width, uint height,
	                      const Graphics::PixelFormat *format) override;
	virtual int getScreenChangeID() const override;

	virtual bool showMouse(bool visible) override;
	virtual void warpMouse(int x, int y) override;
	virtual bool lockMouse(bool lock) override;
	virtual void setMouseCursor(const void *buf, uint w, uint h, int hotspotX,
	                            int hotspotY, uint32 keycolor,
	                            bool dontScale,
	                            const Graphics::PixelFormat *format) override;
	virtual void setCursorPalette(const byte *colors, uint start, uint num) override;


#ifdef USE_RGB_COLOR
	virtual Graphics::PixelFormat getScreenFormat() const override;
	virtual Common::List<Graphics::PixelFormat> getSupportedFormats() const override;
#endif

protected:
	void updateScreenRect();
	const GLESBaseTexture *getActiveTexture() const;
	void clipMouse(Common::Point &p) const;

	void setSystemMousePosition(int x, int y) {}

	bool loadVideoMode(uint requestedWidth, uint requestedHeight, const Graphics::PixelFormat &format);

	void refreshScreen();

	void *getProcAddress(const char *name) const;

private:
	void setCursorPaletteInternal(const byte *colors, uint start, uint num);
	void disableCursorPalette();
	void initOverlay();
	void initViewport();
	void initSizeIntern(uint width, uint height, const Graphics::PixelFormat *format);

	enum FixupType {
		kClear = 0,     // glClear
		kClearSwap,     // glClear + swapBuffers
		kClearUpdate    // glClear + updateScreen
	};

	void clearScreen(FixupType type, byte count = 1);
#ifdef USE_RGB_COLOR
	void initTexture(GLESBaseTexture **texture, uint width, uint height,
	                 const Graphics::PixelFormat *format);
#endif

private:
	int _screenChangeID;
	int _graphicsMode;
	bool _fullscreen;
	bool _ar_correction;
	bool _force_redraw;

	// Game layer
	GLESBaseTexture *_game_texture;
	OpenGL::FrameBuffer *_frame_buffer;

	/**
	 * The position of the mouse cursor, in window coordinates.
	 */
	int _cursorX, _cursorY;

	// Overlay layer
	GLES5551Texture *_overlay_background;
	GLES5551Texture *_overlay_texture;
	bool _show_overlay;

	// Mouse layer
	GLESBaseTexture *_mouse_texture;
	GLESBaseTexture *_mouse_texture_palette;
	GLES5551Texture *_mouse_texture_rgb;
	Common::Point _mouse_hotspot;
	uint32 _mouse_keycolor;
	int _mouse_targetscale;
	bool _show_mouse;
	bool _use_mouse_palette;
};

#endif