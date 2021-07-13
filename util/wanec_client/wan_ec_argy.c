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




/* Copy the first part of user declarations.  */
#line 2 "wan_ec_arg.y" /* yacc.c:339  */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#if defined(__WINDOWS__)
#include "wanpipe_includes.h"
#else
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/queue.h>
#include <sys/ioctl.h>
#endif

#include "wan_ecmain.h"
#include "wanpipe_events.h"
#include "wanpipe_api_iface.h"
#include "wanec_api.h"

extern wanec_client_t		ec_client;
extern wan_custom_conf_t	*custom_conf;
extern int			action;
extern char			yytext[];
extern char			**targv;
extern unsigned 		offset;
static int			start_channel = 0, range = 0;
extern int			gl_err;

extern int yylex(void);
extern int help(int);

long convert_str(char* str, int type);
static int is_channel(unsigned long);
void yyerror(char* msg);

static int wanec_client_param_name(char *key);
static int wanec_client_param_sValue(char*);
static int wanec_client_param_dValue(unsigned int);


#line 108 "wan_ec_argy.c" /* yacc.c:339  */

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
   by #include "wan_ec_argy.h".  */
#ifndef YY_YY_WAN_EC_ARGY_H_INCLUDED
# define YY_YY_WAN_EC_ARGY_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LOAD_TOKEN = 258,
    UNLOAD_TOKEN = 259,
    CONFIG_TOKEN = 260,
    RELEASE_TOKEN = 261,
    KILL_TOKEN = 262,
    ENABLE_TOKEN = 263,
    DISABLE_TOKEN = 264,
    BYPASS_ENABLE_TOKEN = 265,
    BYPASS_DISABLE_TOKEN = 266,
    MODE_NORMAL_TOKEN = 267,
    MODE_HT_FREEZE_TOKEN = 268,
    MODE_HT_RESET_TOKEN = 269,
    MODE_POWERDOWN_TOKEN = 270,
    MODE_NO_ECHO_TOKEN = 271,
    MODE_SPEECH_RECOGNITION_TOKEN = 272,
    DTMF_ENABLE_TOKEN = 273,
    DTMF_DISABLE_TOKEN = 274,
    FAX_ENABLE_TOKEN = 275,
    FAX_DISABLE_TOKEN = 276,
    STATS_TOKEN = 277,
    STATS_FULL_TOKEN = 278,
    ALL_TOKEN = 279,
    HELP_TOKEN = 280,
    HELP1_TOKEN = 281,
    HWIMAGE_TOKEN = 282,
    MONITOR_TOKEN = 283,
    MONITOR120_TOKEN = 284,
    MODIFY_TOKEN = 285,
    BUFFER_LOAD_TOKEN = 286,
    BUFFER_UNLOAD_TOKEN = 287,
    PLAYOUT_START_TOKEN = 288,
    PLAYOUT_STOP_TOKEN = 289,
    PCM_ULAW_TOKEN = 290,
    PCM_ALAW_TOKEN = 291,
    DURATION_TOKEN = 292,
    REPEAT_TOKEN = 293,
    TEST_TOKEN = 294,
    CUSTOM_PARAM_TOKEN = 295,
    MUTE_TOKEN = 296,
    UNMUTE_TOKEN = 297,
    RIN_PORT_TOKEN = 298,
    ROUT_PORT_TOKEN = 299,
    SIN_PORT_TOKEN = 300,
    SOUT_PORT_TOKEN = 301,
    ALL_PORT_TOKEN = 302,
    CHAR_STRING = 303,
    DEC_CONSTANT = 304,
    HEX_CONSTANT = 305,
    DIAL_STRING = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 44 "wan_ec_arg.y" /* yacc.c:355  */

#define YYSTYPE YYSTYPE
	char*	str;
	long	val;

#line 206 "wan_ec_argy.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_WAN_EC_ARGY_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 223 "wan_ec_argy.c" /* yacc.c:358  */

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   102

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  116

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
       2,     2,     2,     2,     2,    52,    53,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   107,   106,   112,   114,   116,   118,   120,
     122,   124,   126,   128,   130,   132,   134,   136,   138,   140,
     142,   144,   146,   148,   150,   152,   154,   156,   159,   158,
     162,   165,   167,   164,   172,   174,   171,   177,   179,   183,
     184,   186,   190,   191,   194,   196,   198,   202,   204,   208,
     209,   223,   222,   227,   226,   243,   244,   249,   252,   255,
     258,   257,   262,   264,   266,   268,   272,   274,   273,   278,
     280,   282
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LOAD_TOKEN", "UNLOAD_TOKEN",
  "CONFIG_TOKEN", "RELEASE_TOKEN", "KILL_TOKEN", "ENABLE_TOKEN",
  "DISABLE_TOKEN", "BYPASS_ENABLE_TOKEN", "BYPASS_DISABLE_TOKEN",
  "MODE_NORMAL_TOKEN", "MODE_HT_FREEZE_TOKEN", "MODE_HT_RESET_TOKEN",
  "MODE_POWERDOWN_TOKEN", "MODE_NO_ECHO_TOKEN",
  "MODE_SPEECH_RECOGNITION_TOKEN", "DTMF_ENABLE_TOKEN",
  "DTMF_DISABLE_TOKEN", "FAX_ENABLE_TOKEN", "FAX_DISABLE_TOKEN",
  "STATS_TOKEN", "STATS_FULL_TOKEN", "ALL_TOKEN", "HELP_TOKEN",
  "HELP1_TOKEN", "HWIMAGE_TOKEN", "MONITOR_TOKEN", "MONITOR120_TOKEN",
  "MODIFY_TOKEN", "BUFFER_LOAD_TOKEN", "BUFFER_UNLOAD_TOKEN",
  "PLAYOUT_START_TOKEN", "PLAYOUT_STOP_TOKEN", "PCM_ULAW_TOKEN",
  "PCM_ALAW_TOKEN", "DURATION_TOKEN", "REPEAT_TOKEN", "TEST_TOKEN",
  "CUSTOM_PARAM_TOKEN", "MUTE_TOKEN", "UNMUTE_TOKEN", "RIN_PORT_TOKEN",
  "ROUT_PORT_TOKEN", "SIN_PORT_TOKEN", "SOUT_PORT_TOKEN", "ALL_PORT_TOKEN",
  "CHAR_STRING", "DEC_CONSTANT", "HEX_CONSTANT", "DIAL_STRING", "'-'",
  "'.'", "'='", "$accept", "start_args", "$@1", "command", "$@2", "$@3",
  "$@4", "$@5", "$@6", "buffer_load_args", "playout_start_args",
  "playout_start_arg", "channel_map", "channel_list", "$@7", "$@8",
  "stats_debug_args", "port_list", "ports", "$@9", "port",
  "custom_param_list", "$@10", "custom_param_value", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,    45,    46,    61
};
# endif

#define YYPACT_NINF -68

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-68)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -17,   -68,   -68,    20,    -4,   -68,     0,   -68,   -68,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    23,    23,   -68,    23,    23,    -3,    41,
      31,    43,    44,    -3,    -3,   -68,    46,   -68,   -68,   -20,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,    32,    32,    32,    32,   -68,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   -68,   -68,    32,    32,    36,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,    91,   -68,   -68,
     -68,   -68,    50,    47,    48,   -68,   -68,   -68,    49,    49,
      38,   -68,   -68,   -68,   -68,   -68,    15,   -68,   -68,   -68,
     -68,    38,   -68,   -68,    51,     0,    -2,   -68,   -68,   -68,
      52,    53,   -68,   -68,   -68,   -68
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     3,     0,     0,     1,    66,     6,     7,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    55,    55,    27,    55,    55,    49,     0,
       0,     0,     0,    49,    49,     4,     0,     5,    47,    50,
       8,    48,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     0,     0,     0,     0,    56,    25,    26,    37,    38,
      66,    28,    30,    31,    34,     0,     0,     0,    51,    53,
      64,    65,    62,    63,    57,    21,    58,    60,    22,    23,
      24,    18,    39,     0,     0,    19,    20,    67,    49,    49,
       0,    40,    41,    29,    32,    35,     0,    52,    54,    61,
      42,     0,    69,    70,     0,    66,    33,    36,    71,    68,
       0,     0,    43,    46,    44,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,    37,    -1,   -68,   -68,    42,     8,     5,   -68,
     -67,   -60,   -68,   -68
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,    35,    82,    83,   100,    84,   101,    93,
     106,   112,    40,    41,    88,    89,    56,    75,    76,    90,
      77,    37,    96,   105
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      81,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       5,    38,     1,    25,    26,    27,    28,    29,    30,    31,
      32,     2,    68,    69,   107,   110,   111,    33,    34,   113,
      36,    70,    71,    72,    73,   109,    39,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      78,    79,    80,   102,   103,    60,    57,   104,    58,    59,
      65,    66,    55,    85,    86,    70,    71,    72,    73,    74,
      62,    70,    71,    72,    73,    91,    92,    97,    98,    61,
      87,   -59,    63,    64,    67,    99,    94,    95,    39,     0,
     108,   114,   115
};

static const yytype_int8 yycheck[] =
{
      60,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    39,    27,    28,    29,    30,    31,    32,    33,
      34,    48,    52,    53,   101,    37,    38,    41,    42,   106,
      40,    43,    44,    45,    46,   105,    49,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      52,    53,    54,    48,    49,    28,    24,    52,    26,    27,
      33,    34,    49,    65,    66,    43,    44,    45,    46,    47,
      49,    43,    44,    45,    46,    35,    36,    88,    89,    48,
      54,     0,    49,    49,    48,    90,    49,    49,    49,    -1,
      49,    49,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    48,    56,    57,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    27,    28,    29,    30,    31,
      32,    33,    34,    41,    42,    58,    40,    76,    24,    49,
      67,    68,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    49,    71,    71,    71,    71,
      67,    48,    49,    49,    49,    67,    67,    48,    52,    53,
      43,    44,    45,    46,    47,    72,    73,    75,    72,    72,
      72,    76,    59,    60,    62,    72,    72,    54,    69,    70,
      74,    35,    36,    64,    49,    49,    77,    68,    68,    73,
      61,    63,    48,    49,    52,    78,    65,    75,    49,    76,
      37,    38,    66,    75,    49,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    56,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    59,    58,
      58,    60,    61,    58,    62,    63,    58,    58,    58,    64,
      64,    64,    65,    65,    66,    66,    66,    67,    67,    68,
      68,    69,    68,    70,    68,    71,    71,    72,    72,    73,
      74,    73,    75,    75,    75,    75,    76,    77,    76,    78,
      78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     2,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     1,     0,     4,
       2,     0,     0,     6,     0,     0,     6,     2,     2,     0,
       1,     1,     0,     2,     2,     2,     1,     1,     1,     0,
       1,     0,     4,     0,     4,     0,     1,     1,     1,     1,
       0,     3,     1,     1,     1,     1,     0,     0,     6,     1,
       1,     2
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
#if YYDEBUG

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
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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
        case 2:
#line 105 "wan_ec_arg.y" /* yacc.c:1646  */
    { action = WAN_EC_ACT_TEST; }
#line 1394 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 3:
#line 107 "wan_ec_arg.y" /* yacc.c:1646  */
    { memcpy(ec_client.devname, (yyvsp[0].str), strlen((yyvsp[0].str)));
		    wanec_api_init(); }
#line 1401 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 5:
#line 113 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_config(); }
#line 1407 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 6:
#line 115 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_release(); }
#line 1413 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 7:
#line 117 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_release(); }
#line 1419 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 8:
#line 119 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_mode(1); }
#line 1425 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 9:
#line 121 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_mode(0); }
#line 1431 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 10:
#line 123 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_bypass(1); }
#line 1437 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 11:
#line 125 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_bypass(0); }
#line 1443 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 12:
#line 127 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_opmode(WANEC_API_OPMODE_NORMAL); }
#line 1449 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 13:
#line 129 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_opmode(WANEC_API_OPMODE_HT_FREEZE); }
#line 1455 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 14:
#line 131 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_opmode(WANEC_API_OPMODE_HT_RESET); }
#line 1461 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 15:
#line 133 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_opmode(WANEC_API_OPMODE_POWER_DOWN); }
#line 1467 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 16:
#line 135 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_opmode(WANEC_API_OPMODE_NO_ECHO); }
#line 1473 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 17:
#line 137 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_opmode(WANEC_API_OPMODE_SPEECH_RECOGNITION); }
#line 1479 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 18:
#line 139 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_modify(); }
#line 1485 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 19:
#line 141 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_mute(1); }
#line 1491 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 20:
#line 143 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_mute(2); }
#line 1497 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 21:
#line 145 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_tone(WP_API_EVENT_TONE_DTMF, 1); }
#line 1503 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 22:
#line 147 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_tone(WP_API_EVENT_TONE_DTMF, 0); }
#line 1509 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 23:
#line 149 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_tone(WP_API_EVENT_TONE_FAXCALLING, 1); }
#line 1515 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 24:
#line 151 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_tone(WP_API_EVENT_TONE_FAXCALLING, 0); }
#line 1521 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 25:
#line 153 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_stats(0); }
#line 1527 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 26:
#line 155 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_stats(1); }
#line 1533 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 27:
#line 157 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_hwimage(); }
#line 1539 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 28:
#line 159 "wan_ec_arg.y" /* yacc.c:1646  */
    { strcpy(ec_client.filename,(yyvsp[0].str)); }
#line 1545 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 29:
#line 161 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_bufferload(); }
#line 1551 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 30:
#line 163 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_bufferunload((yyvsp[0].val)); }
#line 1557 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 31:
#line 165 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.fe_chan = (yyvsp[0].val); }
#line 1563 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 32:
#line 167 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.buffer_id = (yyvsp[0].val); 
		    ec_client.repeat_cnt = 1; }
#line 1570 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 33:
#line 170 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_playout(1); }
#line 1576 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 34:
#line 172 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.fe_chan = (yyvsp[0].val); }
#line 1582 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 35:
#line 174 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.buffer_id = (yyvsp[0].val); }
#line 1588 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 36:
#line 176 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.port = (yyvsp[0].val); gl_err = wanec_client_playout(0); }
#line 1594 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 37:
#line 178 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_monitor(16); }
#line 1600 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 38:
#line 180 "wan_ec_arg.y" /* yacc.c:1646  */
    { gl_err = wanec_client_monitor(120); }
#line 1606 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 40:
#line 185 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.pcmlaw = WAN_EC_PCM_U_LAW; }
#line 1612 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 41:
#line 187 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.pcmlaw = WAN_EC_PCM_A_LAW; }
#line 1618 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 44:
#line 195 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.duration = (yyvsp[0].val); }
#line 1624 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 45:
#line 197 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.repeat_cnt = (yyvsp[0].val); }
#line 1630 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 46:
#line 199 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.port = (yyvsp[0].val); }
#line 1636 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 47:
#line 203 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.fe_chan_map = 0xFFFFFFFF; }
#line 1642 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 49:
#line 208 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.fe_chan_map = 0xFFFFFFFF; }
#line 1648 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 50:
#line 210 "wan_ec_arg.y" /* yacc.c:1646  */
    { is_channel((yyvsp[0].val));
		    if (range){
			int	i=0;
			for(i=start_channel;i<=(yyvsp[0].val);i++){
				ec_client.fe_chan_map |= (1<<i);
			}
			start_channel=0;
		        range = 0;
		    }else{
		  	ec_client.fe_chan_map |= (1 << (yyvsp[0].val));
		    }
		  }
#line 1665 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 51:
#line 223 "wan_ec_arg.y" /* yacc.c:1646  */
    { is_channel((yyvsp[-1].val));
		    range = 1; start_channel = (yyvsp[-1].val); }
#line 1672 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 53:
#line 227 "wan_ec_arg.y" /* yacc.c:1646  */
    { is_channel((yyvsp[-1].val));
		    if (range){
			int	i=0;
			for(i=start_channel;i<=(yyvsp[-1].val);i++){
				ec_client.fe_chan_map |= (1<<i);
			}
			start_channel=0;
		        range = 0;
		    }else{
		  	ec_client.fe_chan_map |= (1 << (yyvsp[-1].val));
		    }
		  }
#line 1689 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 55:
#line 243 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.fe_chan = 0; ec_client.fe_chan_map = 0x00000000; }
#line 1695 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 56:
#line 245 "wan_ec_arg.y" /* yacc.c:1646  */
    { is_channel((yyvsp[0].val));
		    ec_client.fe_chan = (yyvsp[0].val); ec_client.fe_chan_map = (1<<(yyvsp[0].val)); }
#line 1702 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 57:
#line 250 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.port_map = 
			WAN_EC_CHANNEL_PORT_SIN|WAN_EC_CHANNEL_PORT_SOUT|WAN_EC_CHANNEL_PORT_RIN|WAN_EC_CHANNEL_PORT_ROUT; }
#line 1709 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 59:
#line 256 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.port_map |= (yyvsp[0].val); }
#line 1715 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 60:
#line 258 "wan_ec_arg.y" /* yacc.c:1646  */
    { ec_client.port_map |= (yyvsp[0].val); }
#line 1721 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 62:
#line 263 "wan_ec_arg.y" /* yacc.c:1646  */
    { (yyval.val) = WAN_EC_CHANNEL_PORT_SIN; }
#line 1727 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 63:
#line 265 "wan_ec_arg.y" /* yacc.c:1646  */
    { (yyval.val) = WAN_EC_CHANNEL_PORT_SOUT; }
#line 1733 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 64:
#line 267 "wan_ec_arg.y" /* yacc.c:1646  */
    { (yyval.val) = WAN_EC_CHANNEL_PORT_RIN; }
#line 1739 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 65:
#line 269 "wan_ec_arg.y" /* yacc.c:1646  */
    { (yyval.val) = WAN_EC_CHANNEL_PORT_ROUT; }
#line 1745 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 67:
#line 274 "wan_ec_arg.y" /* yacc.c:1646  */
    { wanec_client_param_name((yyvsp[-1].str)); }
#line 1751 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 69:
#line 279 "wan_ec_arg.y" /* yacc.c:1646  */
    { wanec_client_param_sValue((yyvsp[0].str)); }
#line 1757 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 70:
#line 281 "wan_ec_arg.y" /* yacc.c:1646  */
    { wanec_client_param_dValue((yyvsp[0].val)); }
#line 1763 "wan_ec_argy.c" /* yacc.c:1646  */
    break;

  case 71:
#line 283 "wan_ec_arg.y" /* yacc.c:1646  */
    { wanec_client_param_dValue((-1) * (yyvsp[0].val)); }
#line 1769 "wan_ec_argy.c" /* yacc.c:1646  */
    break;


#line 1773 "wan_ec_argy.c" /* yacc.c:1646  */
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
#line 285 "wan_ec_arg.y" /* yacc.c:1906  */


#if 0
custom_param_list:
		| custom_param custom_param_list
		;

custom_param	: CUSTOM_PARAM_TOKEN CHAR_STRING '='
		  { wanec_client_param_name($<str>2); }
			CHAR_STRING
		  { wanec_client_param_value($<str>5); }
		;
#endif

long convert_str(char* str, int type)
{
	long value = 0;
	switch(type){
	case DEC_CONSTANT:
		sscanf(str, "%lu", &value);
		break;
	case HEX_CONSTANT:
		sscanf(str, "%lx", &value);
		break;
	}
	return value;
}

static int is_channel(unsigned long channel)
{
	if (channel > 31){
		printf("ERROR: Channel number %ld is out of range !\n\n",
					channel);
		exit(1);
	}
	return 0;
}

void yyerror(char* msg)
{
	if (!ec_client.verbose){
		printf("> %s\n", msg);
		help (1);
	}else{ 
		printf("> %s (argv=%s,offset=%d)\n", msg, *targv, offset);
	}
	exit(1);
}


static int wanec_client_param_name(char *key)
{
	if (ec_client.conf.param_no == 0){
		ec_client.conf.params = (wan_custom_param_t *)malloc(sizeof(wan_custom_param_t));
		if (ec_client.conf.params == NULL){
			printf("ERROR: Failed to allocate structure for custom configuration!\n");
			return -EINVAL;
		}
		memset(ec_client.conf.params, 0, sizeof(wan_custom_param_t));
	}
	strlcpy(ec_client.conf.params[ec_client.conf.param_no].name, 
					key, MAX_PARAM_LEN); 
	return 0;
}

static int wanec_client_param_sValue(char *sValue)
{
	if (ec_client.conf.params == NULL){
		printf("ERROR: Custom configuration structure is not allocated!\n");
		return -EINVAL;
	} 
	strlcpy(ec_client.conf.params[ec_client.conf.param_no].sValue,
					sValue, MAX_VALUE_LEN); 
	ec_client.conf.param_no++;
	return 0;
}

static int wanec_client_param_dValue(unsigned int dValue)
{
	if (ec_client.conf.params == NULL){
		printf("ERROR: Custom configuration structure is not allocated!\n");
		return -EINVAL;
	} 
	ec_client.conf.params[ec_client.conf.param_no].dValue = dValue;
	ec_client.conf.param_no++;
	return 0;
}
