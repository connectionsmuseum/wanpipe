/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 44 "wan_ec_arg.y" /* yacc.c:1909  */

#define YYSTYPE YYSTYPE
	char*	str;
	long	val;

#line 112 "wan_ec_argy.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_WAN_EC_ARGY_H_INCLUDED  */
