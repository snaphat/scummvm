/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HYPNO_MIS_STYPE
/* Substitute the variable and function names.  */
#define yyparse         HYPNO_MIS_parse
#define yylex           HYPNO_MIS_lex
#define yyerror         HYPNO_MIS_error
#define yydebug         HYPNO_MIS_debug
#define yynerrs         HYPNO_MIS_nerrs

#define yylval          HYPNO_MIS_lval
#define yychar          HYPNO_MIS_char

/* Copy the first part of user declarations.  */
#line 28 "engines/hypno/grammar_mis.y" /* yacc.c:339  */


#include "common/array.h"
#include "hypno/grammar.h"
#include <stdio.h>

#undef yyerror
#define yyerror	 HYPNO_MIS_xerror

extern int HYPNO_MIS_lex();
extern int HYPNO_MIS_parse();
extern int yylineno;

Common::Array<uint32> smenu_idx;
Hypno::HotspotsStack stack;
Hypno::Talk *talk_action = nullptr;

void HYPNO_MIS_xerror(const char *str) {
	error("ERROR: %s", str);
}

int HYPNO_MIS_wrap() {
	return 1;
}

using namespace Hypno;


#line 104 "engines/hypno/grammar_mis.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "tokens_mis.h".  */
#ifndef YY_HYPNO_MIS_ENGINES_HYPNO_TOKENS_MIS_H_INCLUDED
# define YY_HYPNO_MIS_ENGINES_HYPNO_TOKENS_MIS_H_INCLUDED
/* Debug traces.  */
#ifndef HYPNO_MIS_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HYPNO_MIS_DEBUG 1
#  else
#   define HYPNO_MIS_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HYPNO_MIS_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HYPNO_MIS_DEBUG */
#if HYPNO_MIS_DEBUG
extern int HYPNO_MIS_debug;
#endif

/* Token type.  */
#ifndef HYPNO_MIS_TOKENTYPE
# define HYPNO_MIS_TOKENTYPE
  enum HYPNO_MIS_tokentype
  {
    NAME = 258,
    FILENAME = 259,
    FLAG = 260,
    COMMENT = 261,
    GSSWITCH = 262,
    COMMAND = 263,
    NUM = 264,
    HOTSTOK = 265,
    CUTSTOK = 266,
    BACKTOK = 267,
    RETTOK = 268,
    TIMETOK = 269,
    PALETOK = 270,
    BBOXTOK = 271,
    OVERTOK = 272,
    WALNTOK = 273,
    MICETOK = 274,
    PLAYTOK = 275,
    ENDTOK = 276,
    MENUTOK = 277,
    SMENTOK = 278,
    ESCPTOK = 279,
    NRTOK = 280,
    AMBITOK = 281,
    GLOBTOK = 282,
    TONTOK = 283,
    TOFFTOK = 284,
    TALKTOK = 285,
    INACTOK = 286,
    FDTOK = 287,
    BOXXTOK = 288,
    PG = 289,
    PA = 290,
    PD = 291,
    PH = 292,
    PF = 293,
    PE = 294,
    PP = 295,
    PI = 296
  };
#endif

/* Value type.  */
#if ! defined HYPNO_MIS_STYPE && ! defined HYPNO_MIS_STYPE_IS_DECLARED

union HYPNO_MIS_STYPE
{
#line 57 "engines/hypno/grammar_mis.y" /* yacc.c:355  */

	char *s; /* string value */
	int i;	 /* integer value */

#line 199 "engines/hypno/grammar_mis.cpp" /* yacc.c:355  */
};

typedef union HYPNO_MIS_STYPE HYPNO_MIS_STYPE;
# define HYPNO_MIS_STYPE_IS_TRIVIAL 1
# define HYPNO_MIS_STYPE_IS_DECLARED 1
#endif


extern HYPNO_MIS_STYPE HYPNO_MIS_lval;

int HYPNO_MIS_parse (void);

#endif /* !YY_HYPNO_MIS_ENGINES_HYPNO_TOKENS_MIS_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 216 "engines/hypno/grammar_mis.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HYPNO_MIS_STYPE_IS_TRIVIAL && HYPNO_MIS_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   91

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  102

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if HYPNO_MIS_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    77,    82,    83,    84,    87,    90,   105,
     114,   129,   135,   136,   146,   155,   164,   174,   182,   190,
     198,   208,   216,   222,   230,   236,   239,   240,   244,   245,
     251,   252,   258,   264,   270,   277,   284,   285,   288,   289,
     292,   293,   296,   297
};
#endif

#if HYPNO_MIS_DEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "FILENAME", "FLAG", "COMMENT",
  "GSSWITCH", "COMMAND", "NUM", "HOTSTOK", "CUTSTOK", "BACKTOK", "RETTOK",
  "TIMETOK", "PALETOK", "BBOXTOK", "OVERTOK", "WALNTOK", "MICETOK",
  "PLAYTOK", "ENDTOK", "MENUTOK", "SMENTOK", "ESCPTOK", "NRTOK", "AMBITOK",
  "GLOBTOK", "TONTOK", "TOFFTOK", "TALKTOK", "INACTOK", "FDTOK", "BOXXTOK",
  "PG", "PA", "PD", "PH", "PF", "PE", "PP", "PI", "$accept", "start",
  "init", "lines", "end", "line", "alloctalk", "talk", "mflag", "flag",
  "gsswitch", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

#define YYPACT_NINF -68

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-68)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -68,    12,    43,   -68,    -5,     9,    10,   -68,     6,    13,
      14,    17,    18,    20,    15,    22,   -68,   -68,    25,    19,
     -68,   -68,    43,    21,    23,   -68,    26,   -68,   -68,    27,
      28,    30,    50,   -68,     5,    59,    68,    11,   -68,    43,
      63,    65,    66,    67,   -68,    69,   -68,   -68,    70,   -68,
      73,    11,    11,    71,    11,    11,    11,    11,    11,   -68,
      72,    74,   -68,   -68,    75,    24,    77,    24,    24,    77,
      76,   -68,   -68,    78,   -68,   -68,   -68,   -68,   -68,    79,
      80,    81,   -68,    77,   -68,   -68,    77,    77,   -68,    82,
     -68,    11,    11,   -68,   -68,   -68,   -68,    24,   -68,   -68,
      77,   -68
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
      24,     2,     0,     5,     0,    19,     0,    12,    18,     0,
       0,     0,     0,    23,    39,     0,     0,    37,     6,     0,
       0,     0,     0,     0,    21,     0,    38,     8,     0,    14,
       0,    37,    37,     0,    37,    37,    37,    37,    37,    36,
       0,     0,    22,     4,     0,    43,    41,    43,    43,    41,
       0,    25,    26,     0,    29,    32,    33,    30,    31,     0,
       0,     0,    42,    41,    40,    17,    41,    41,    15,     0,
      28,    37,    37,     9,    13,    20,    16,    43,    34,    35,
      41,    27
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -68,   -68,   -68,   -12,   -68,   -68,   -68,   -51,   -68,   -67,
     -59
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    21,    22,    23,    37,    62,    47,    85,
      83
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      71,    72,    88,    74,    75,    76,    77,    78,    86,    87,
      38,    24,     3,    25,    26,    27,    94,    28,    29,    95,
      96,    30,    31,    50,    32,    34,    36,    63,    33,    35,
      46,    82,    40,   101,    39,    41,    42,    43,   100,    44,
      98,    99,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,     4,     5,     6,     7,     8,     9,    45,
      10,    11,    12,    13,    14,    15,    16,    17,    48,    18,
      19,    49,    64,    20,    65,    66,    67,    70,    68,    69,
      73,    79,    84,    80,    81,    89,     0,    90,    91,    92,
      93,    97
};

static const yytype_int8 yycheck[] =
{
      51,    52,    69,    54,    55,    56,    57,    58,    67,    68,
      22,    16,     0,     4,     4,     9,    83,     4,     4,    86,
      87,     4,     4,    12,     4,     3,     7,    39,    13,     4,
      25,     7,     9,   100,    13,     9,     9,     9,    97,     9,
      91,    92,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    10,    11,    12,    13,    14,    15,     9,
      17,    18,    19,    20,    21,    22,    23,    24,     9,    26,
      27,     3,     9,    30,     9,     9,     9,     4,     9,     9,
       9,     9,     5,     9,     9,     9,    -1,     9,     9,     9,
       9,     9
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,    44,     0,    10,    11,    12,    13,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    24,    26,    27,
      30,    45,    46,    47,    16,     4,     4,     9,     4,     4,
       4,     4,     4,    13,     3,     4,     7,    48,    45,    13,
       9,     9,     9,     9,     9,     9,    25,    50,     9,     3,
      12,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    49,    45,     9,     9,     9,     9,     9,     9,
       4,    49,    49,     9,    49,    49,    49,    49,    49,     9,
       9,     9,     7,    52,     5,    51,    52,    52,    51,     9,
       9,     9,     9,     9,    51,    51,    51,     9,    49,    49,
      52,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    45,    45,    45,    46,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    48,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    50,    50,
      51,    51,    52,    52
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     3,     1,     2,     1,     3,     6,
       1,     1,     2,     6,     3,     5,     6,     5,     2,     2,
       6,     3,     3,     2,     0,     2,     2,     6,     3,     2,
       2,     2,     2,     2,     4,     4,     1,     0,     1,     0,
       1,     0,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if HYPNO_MIS_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HYPNO_MIS_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HYPNO_MIS_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 77 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
	smenu_idx.push_back(-1);
	stack.push_back(new Hotspots());
}
#line 1360 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 87 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { debug("implicit END"); }
#line 1366 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 90 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    {
		Hotspot *hot = new Hotspot(); 
		hot->type = MakeMenu;
		hot->stype = (yyvsp[-1].s);
		hot->smenu = NULL;
		debug("MENU %d.", hot->type);
		Hotspots *cur = stack.back();
		cur->push_back(*hot);

		// We don't care about menus, only hotspots
		int idx = smenu_idx.back();
		idx++;
		smenu_idx.pop_back();
		smenu_idx.push_back(idx);
	}
#line 1386 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 105 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    {  
		Hotspot *hot = new Hotspot(); 
		hot->type = MakeHotspot;
		hot->smenu = NULL;
		hot->rect = Common::Rect((yyvsp[-3].i), (yyvsp[-2].i), (yyvsp[-1].i), (yyvsp[0].i));
		debug("HOTS %d.", hot->type);
		Hotspots *cur = stack.back();
		cur->push_back(*hot); 
	}
#line 1400 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 114 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		// This should always point to a hotspot
		int idx = smenu_idx.back();
		idx++;
		smenu_idx.pop_back();
		smenu_idx.push_back(idx);

		Hotspots *cur = stack.back();
		Hotspot *hot = &(*cur)[idx];

		smenu_idx.push_back(-1);
		hot->smenu = new Hotspots();
		stack.push_back(hot->smenu);
		debug("SUBMENU"); 
	}
#line 1420 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 129 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    {
		Escape *a = new Escape();
		Hotspots *cur = stack.back();
		Hotspot *hot = &cur->back();
		hot->actions.push_back(a);
		debug("ESC SUBMENU"); }
#line 1431 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 135 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { debug("TIME %d", (yyvsp[0].i)); }
#line 1437 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 136 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    {
		Background *a = new Background();
		a->path = (yyvsp[-4].s);
		a->origin = Common::Point((yyvsp[-3].i), (yyvsp[-2].i));
		a->condition = (yyvsp[-1].s);
		Hotspots *cur = stack.back();
		Hotspot *hot = &cur->back();
		hot->actions.push_back(a);
		debug("BACK");
	}
#line 1452 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 146 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		Global *a = new Global();
		a->variable = (yyvsp[-1].s);
		a->command = (yyvsp[0].s);
		Hotspots *cur = stack.back();
		Hotspot *hot = &cur->back();
		hot->actions.push_back(a);
		debug("GLOB."); 
	}
#line 1466 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 155 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		Ambient *a = new Ambient();
		a->path = (yyvsp[-3].s);
		a->origin = Common::Point((yyvsp[-2].i), (yyvsp[-1].i));
		a->flag = (yyvsp[0].s);
		Hotspots *cur = stack.back();
		Hotspot *hot = &cur->back();
		hot->actions.push_back(a);			
		debug("AMBI %d %d.", (yyvsp[-2].i), (yyvsp[-1].i)); }
#line 1480 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 164 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		Play *a = new Play();
		a->path = (yyvsp[-4].s);
		a->origin = Common::Point((yyvsp[-3].i), (yyvsp[-2].i));
		a->condition = (yyvsp[-1].s);
		a->flag = (yyvsp[0].s);
		Hotspots *cur = stack.back();
		Hotspot *hot = &cur->back();
		hot->actions.push_back(a);		  
		debug("PLAY %s.", (yyvsp[-4].s)); }
#line 1495 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 174 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		Overlay *a = new Overlay();
		a->path = (yyvsp[-3].s);
		a->origin = Common::Point((yyvsp[-2].i), (yyvsp[-1].i));
		Hotspots *cur = stack.back();
		Hotspot *hot = &cur->back();
		hot->actions.push_back(a);
	}
#line 1508 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 182 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    {
		Palette *a = new Palette();
		a->path = (yyvsp[0].s); 
		Hotspots *cur = stack.back();
		Hotspot *hot = &cur->back();
		hot->actions.push_back(a);
		debug("PALE");
	}
#line 1521 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 190 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		Cutscene *a = new Cutscene();
		a->path = (yyvsp[0].s);
		Hotspots *cur = stack.back();
		Hotspot *hot = &cur->back();
		hot->actions.push_back(a);		  
		debug("CUTS %s.", (yyvsp[0].s)); 
	}
#line 1534 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 198 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		WalN *a = new WalN();
		a->path = (yyvsp[-4].s);
		a->origin = Common::Point((yyvsp[-3].i), (yyvsp[-2].i));
		a->condition = (yyvsp[-1].s);
		a->flag = (yyvsp[0].s);
		Hotspots *cur = stack.back();
		Hotspot *hot = &cur->back();
		hot->actions.push_back(a);		  
		debug("WALN %s %d %d.", (yyvsp[-4].s), (yyvsp[-3].i), (yyvsp[-2].i)); }
#line 1549 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 208 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    {
		Mice *a = new Mice();
		a->path = (yyvsp[-1].s); 
		a->index = (yyvsp[0].i)-1;
		Hotspots *cur = stack.back();
		Hotspot *hot = &cur->back();
		hot->actions.push_back(a);
	}
#line 1562 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 216 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		Hotspots *cur = stack.back();
		Hotspot *hot = &cur->back();
		hot->actions.push_back(talk_action);
		talk_action = nullptr;
		debug("TALK"); }
#line 1573 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 222 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		debug("explicit END");
		g_parsedHots = stack.back(); 
		stack.pop_back();
		smenu_idx.pop_back();
	}
#line 1584 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 230 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
	assert(talk_action == nullptr);
	talk_action = new Talk();
	talk_action->active = true; 
}
#line 1594 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 236 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    {
		talk_action->active = false; 
		debug("inactive"); }
#line 1602 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 239 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { debug("inactive"); }
#line 1608 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 240 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		talk_action->background = (yyvsp[-4].s);
		talk_action->position = Common::Point((yyvsp[-3].i), (yyvsp[-2].i));
		debug("BACK in TALK"); }
#line 1617 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 244 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { debug("BOXX %d %d", (yyvsp[-1].i), (yyvsp[0].i)); }
#line 1623 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 245 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		TalkCommand talk_cmd;
		talk_cmd.command = "G";
		talk_cmd.path = (yyvsp[-1].s)+2;
		talk_action->commands.push_back(talk_cmd); 
		debug("%s", (yyvsp[-1].s)); }
#line 1634 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 251 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { debug("%s", (yyvsp[-1].s)); }
#line 1640 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 252 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		TalkCommand talk_cmd;
		talk_cmd.command = "F";
		talk_cmd.num = atoi((yyvsp[-1].s)+2)-1;
		talk_action->commands.push_back(talk_cmd); 
		debug("%s", (yyvsp[-1].s)); }
#line 1651 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 258 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		TalkCommand talk_cmd;
		talk_cmd.command = "A";
		talk_cmd.num = atoi((yyvsp[-1].s)+2)-1;
		talk_action->commands.push_back(talk_cmd); 
		debug("|A%d", talk_cmd.num); }
#line 1662 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 264 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		TalkCommand talk_cmd;
		talk_cmd.command = "D";
		talk_cmd.num = atoi((yyvsp[-1].s)+2)-1;
		talk_action->commands.push_back(talk_cmd); 
		debug("%s", (yyvsp[-1].s)); }
#line 1673 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 270 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		TalkCommand talk_cmd;
		talk_cmd.command = "P";
		talk_cmd.path = (yyvsp[-3].s)+2;
		talk_cmd.position = Common::Point((yyvsp[-2].i), (yyvsp[-1].i));
		talk_action->commands.push_back(talk_cmd);
		debug("%s %d %d", (yyvsp[-3].s), (yyvsp[-2].i), (yyvsp[-1].i)); }
#line 1685 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 277 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { 
		TalkCommand talk_cmd;
		talk_cmd.command = "I";
		talk_cmd.path = (yyvsp[-3].s)+2;
		talk_cmd.position = Common::Point((yyvsp[-2].i), (yyvsp[-1].i));
		talk_action->commands.push_back(talk_cmd);		  
		debug("%s %d %d", (yyvsp[-3].s), (yyvsp[-2].i), (yyvsp[-1].i)); }
#line 1697 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 284 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { debug("|E"); }
#line 1703 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 292 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); debug("flag: %s", (yyvsp[0].s)); }
#line 1709 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 293 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { (yyval.s) = scumm_strdup(""); }
#line 1715 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 296 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); debug("switch %s", (yyvsp[0].s)); }
#line 1721 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 297 "engines/hypno/grammar_mis.y" /* yacc.c:1646  */
    { (yyval.s) = scumm_strdup(""); }
#line 1727 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
    break;


#line 1731 "engines/hypno/grammar_mis.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}