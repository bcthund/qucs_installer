/* A Bison parser, made by GNU Bison 3.2.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.2.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         mdl_parse
#define yylex           mdl_lex
#define yyerror         mdl_error
#define yydebug         mdl_debug
#define yynerrs         mdl_nerrs

#define yylval          mdl_lval
#define yychar          mdl_char

/* First part of user prologue.  */
#line 3 "parse_mdl.ypp" /* yacc.c:338  */

/*
 * parse_mdl.y - parser for an IC-CAP MDL data file
 *
 * Copyright (C) 2006 Stefan Jahn <stefan@lkcc.org>
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this package; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street - Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 * $Id$
 *
 */

#if HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define YYERROR_VERBOSE 42
#define YYDEBUG 1
#define YYMAXDEPTH 1000000

#define __NOEXTENSIONS__ 1

#include "object.h"
#include "complex.h"
#include "vector.h"
#include "check_mdl.h"

using namespace qucs;


#line 126 "parse_mdl.cpp" /* yacc.c:338  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
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
   by #include "y.tab.h".  */
#ifndef YY_MDL_PARSE_MDL_HPP_INCLUDED
# define YY_MDL_PARSE_MDL_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int mdl_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LINK = 258,
    Identifier = 259,
    String = 260,
    InvalidCharacter = 261,
    Real = 262,
    t_LINK = 263,
    t_VIEW = 264,
    t_TABLE = 265,
    t_PSTABLE = 266,
    t_CNTABLE = 267,
    t_OPTIMEDIT = 268,
    t_BLKEDIT = 269,
    t_HYPTABLE = 270,
    t_ELEMENT = 271,
    t_DATA = 272,
    t_DATASET = 273,
    t_DATASIZE = 274,
    t_POINT = 275,
    t_MEMBER = 276,
    t_LIST = 277,
    t_PLOTOPTIMIZEROPT = 278,
    t_PLOTOPTIMIZERTRACESET = 279,
    t_PLOTOPTIMIZERTRACEREGSET = 280,
    t_PLOTOPTIMIZERTRACENATREGSET = 281,
    t_PLOTERROR = 282,
    t_TYPE = 283,
    t_CIRCUITDECK = 284,
    t_PARAM = 285,
    t_RANGE = 286,
    t_CONNPAIR = 287,
    t_CALDATA = 288,
    t_CALSET = 289,
    t_TERM = 290,
    t_APPLIC = 291,
    t_SUBAPP = 292,
    t_EDITSIZE = 293,
    t_PLOTSIZE = 294,
    t_OPTRANGE = 295
  };
#endif
/* Tokens.  */
#define LINK 258
#define Identifier 259
#define String 260
#define InvalidCharacter 261
#define Real 262
#define t_LINK 263
#define t_VIEW 264
#define t_TABLE 265
#define t_PSTABLE 266
#define t_CNTABLE 267
#define t_OPTIMEDIT 268
#define t_BLKEDIT 269
#define t_HYPTABLE 270
#define t_ELEMENT 271
#define t_DATA 272
#define t_DATASET 273
#define t_DATASIZE 274
#define t_POINT 275
#define t_MEMBER 276
#define t_LIST 277
#define t_PLOTOPTIMIZEROPT 278
#define t_PLOTOPTIMIZERTRACESET 279
#define t_PLOTOPTIMIZERTRACEREGSET 280
#define t_PLOTOPTIMIZERTRACENATREGSET 281
#define t_PLOTERROR 282
#define t_TYPE 283
#define t_CIRCUITDECK 284
#define t_PARAM 285
#define t_RANGE 286
#define t_CONNPAIR 287
#define t_CALDATA 288
#define t_CALSET 289
#define t_TERM 290
#define t_APPLIC 291
#define t_SUBAPP 292
#define t_EDITSIZE 293
#define t_PLOTSIZE 294
#define t_OPTRANGE 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 93 "parse_mdl.ypp" /* yacc.c:353  */

  char * ident;
  double f;
  struct mdl_point_t * point;
  struct mdl_dataset_t * dset;
  struct mdl_datasize_t * dsize;
  struct mdl_link_t * link;
  struct mdl_data_t * data;
  struct mdl_dcontent_t * dcontent;
  struct mdl_lcontent_t * lcontent;
  struct mdl_element_t * element;
  struct mdl_hyptable_t * hyptable;
  struct mdl_table_t * table;

#line 264 "parse_mdl.cpp" /* yacc.c:353  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE mdl_lval;

int mdl_parse (void);

#endif /* !YY_MDL_PARSE_MDL_HPP_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   180

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  218

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   125,   125,   130,   131,   138,   141,   144,   149,   150,
     161,   164,   169,   170,   181,   184,   185,   190,   191,   194,
     195,   200,   203,   206,   209,   212,   215,   220,   225,   232,
     233,   244,   247,   250,   253,   256,   259,   262,   265,   268,
     271,   274,   277,   280,   285,   290,   293,   298,   299,   310,
     311,   312,   315,   316,   321,   327,   338,   341,   342,   349,
     356,   362,   370,   377,   382,   387,   393,   402,   409,   415,
     419,   425,   431,   436,   442,   448,   452,   453,   458,   463,
     468,   474,   480,   488,   494,   504,   510,   521,   528,   534,
     539,   546,   556,   566,   572,   577,   582,   589,   596,   604,
     612
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LINK", "Identifier", "String",
  "InvalidCharacter", "Real", "t_LINK", "t_VIEW", "t_TABLE", "t_PSTABLE",
  "t_CNTABLE", "t_OPTIMEDIT", "t_BLKEDIT", "t_HYPTABLE", "t_ELEMENT",
  "t_DATA", "t_DATASET", "t_DATASIZE", "t_POINT", "t_MEMBER", "t_LIST",
  "t_PLOTOPTIMIZEROPT", "t_PLOTOPTIMIZERTRACESET",
  "t_PLOTOPTIMIZERTRACEREGSET", "t_PLOTOPTIMIZERTRACENATREGSET",
  "t_PLOTERROR", "t_TYPE", "t_CIRCUITDECK", "t_PARAM", "t_RANGE",
  "t_CONNPAIR", "t_CALDATA", "t_CALSET", "t_TERM", "t_APPLIC", "t_SUBAPP",
  "t_EDITSIZE", "t_PLOTSIZE", "t_OPTRANGE", "'{'", "'}'", "$accept",
  "Input", "LinkList", "TableContent", "TableContentList",
  "HypTableContent", "HypTableContentList", "ConnTableContent",
  "ConnTableContentList", "OptEditContent", "OptEditContentList",
  "LinkContent", "LinkContentList", "DataContent", "DataContentList",
  "PSContent", "PSContentList", "DSContent", "Point", "PointList",
  "ELEMENT_Line", "VIEW_Line", "TABLE_Definition", "LINK_Definition",
  "DATA_Definition", "PSTABLE_Definition", "CIRCUITDECK_Definition",
  "BLKEDIT_Definition", "CNTABLE_Definition", "OPTIMEDIT_Definition",
  "CALSET_Definition", "CalSetContent", "CALDATA_Definition",
  "CalDataContentList", "CalDataContent", "TERM_Line", "APPLIC_Line",
  "SUBAPP_Line", "HYPTABLE_Definition", "DATASET_Definition",
  "DATASIZE_Line", "TYPE_Line", "POINT_Line", "LIST_Line",
  "PLOTOPTIMIZEROPT_Line", "PLOTOPTIMIZERTRACESET_Line",
  "PLOTOPTIMIZERTRACEREGSET_Line", "PLOTOPTIMIZERTRACENATREGSET_Line",
  "PLOTERROR_Line", "EDITSIZE_Line", "PLOTSIZE_Line", "MEMBER_Line",
  "PARAM_Line", "RANGE_Line", "OPTRANGE_Line", "CONNPAIR_Line", YY_NULLPTR
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
     295,   123,   125
};
# endif

#define YYPACT_NINF -174

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-174)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,     7,    20,  -174,    11,    19,  -174,  -174,   -18,     9,
      25,    -2,    -5,    34,    36,    42,    50,     9,    14,  -174,
    -174,  -174,  -174,  -174,  -174,  -174,  -174,    51,    -3,    17,
      39,    55,    56,    60,    62,  -174,  -174,    65,    30,    18,
    -174,    67,    69,    35,    70,    76,    41,    79,    80,    81,
      82,    84,    43,    85,    86,    87,    39,    47,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,  -174,    88,  -174,  -174,    18,
      28,    18,    49,  -174,  -174,  -174,    57,    58,     1,    59,
      63,    73,    89,    92,    94,    98,    99,    66,    68,   103,
     104,  -174,  -174,   105,    71,   109,   110,  -174,  -174,   -24,
      90,     1,    74,  -174,  -174,    75,    16,   114,    77,    93,
    -174,   115,   118,   119,  -174,  -174,   121,  -174,  -174,  -174,
    -174,  -174,   122,   124,   125,   126,   -24,    91,  -174,  -174,
    -174,   127,    90,    95,  -174,  -174,  -174,  -174,    16,    96,
    -174,  -174,   128,  -174,   130,   106,  -174,   131,   135,   134,
     100,   138,   139,   140,   141,  -174,  -174,   142,  -174,  -174,
    -174,  -174,   143,  -174,   144,   106,    93,  -174,   147,   148,
     145,  -174,  -174,  -174,   149,   150,  -174,   151,   152,  -174,
     106,   155,   156,   157,  -174,  -174,  -174,   158,  -174,  -174,
    -174,   153,   159,   160,   161,   123,  -174,   107,  -174,   136,
     162,   120,   136,   106,  -174,  -174,  -174,  -174
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,     1,     4,     0,    29,
       0,     0,     0,     0,     0,     0,     0,    29,     0,    21,
      26,    27,    28,    22,    23,    24,    25,     0,     0,     0,
      47,     0,     0,     0,     0,    30,    66,     0,     0,     8,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,    38,    39,
      46,    45,    40,    41,    42,    43,    44,    31,    32,    33,
      34,    35,    36,    37,    96,    87,     0,    81,    62,     8,
       0,     8,     0,     6,     5,     7,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    67,     0,     0,     0,     0,     9,    63,    52,
      15,    19,     0,    17,    18,     0,    12,     0,     0,     0,
      88,    90,     0,     0,    93,    69,     0,    94,    95,    80,
      64,    61,     0,     0,     0,     0,    52,     0,    49,    50,
      51,     0,    15,     0,    14,    20,    72,    70,    12,     0,
      11,    10,     0,    83,     0,    57,    89,     0,     0,     0,
       0,    60,     0,     0,     0,    53,    68,     0,    16,    71,
      13,    82,     0,    85,     0,    57,    54,    56,     0,     0,
       0,    73,    59,    97,     0,     0,   100,     0,     0,    58,
      57,     0,     0,     0,    98,    99,    84,     0,    55,    91,
      92,     0,     0,     0,     0,     0,    86,     0,    74,    76,
       0,     0,    76,    57,    79,    75,    77,    78
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -174,  -174,   166,  -174,   -38,  -174,   -17,  -174,    21,  -174,
      61,  -174,   163,  -174,   117,  -174,    38,  -174,  -174,  -173,
    -111,    -9,    -8,     4,  -174,  -174,  -174,  -174,  -174,  -174,
    -174,  -174,  -174,   -37,  -174,  -174,  -174,  -174,  -174,  -174,
    -174,     0,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,  -174
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    81,    82,   148,   149,   142,   143,   111,
     112,    17,    18,    56,    57,   136,   137,   118,   175,   176,
      83,    84,    85,     4,    22,    59,    60,    61,    62,    63,
      64,   160,   208,   211,   212,   213,    23,    24,    65,    66,
     119,   155,   177,    25,    67,    68,    69,    70,    71,    72,
      73,    26,   138,   139,   140,   144
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      19,    20,   189,    28,    38,   150,   133,   134,    19,    20,
      10,    11,     1,    21,     1,     5,   135,   198,    10,    11,
       6,    21,    58,     9,     8,    10,    12,    10,    11,    27,
      13,    14,    80,   105,    80,   106,    30,   150,    39,    29,
     217,   104,    31,   107,    32,    15,    16,    33,    58,    11,
      41,    42,    43,    44,    45,    34,    36,    46,    37,    40,
      74,    75,    47,    48,    49,    50,    51,    76,    52,    77,
      78,    79,    86,    53,    87,    89,    88,    54,    55,   113,
     114,    90,    91,    92,    97,    93,    94,    95,    96,   102,
      98,   108,   117,    99,   100,   103,   120,   121,   109,   110,
     115,   122,   113,   114,   116,   123,   124,   151,   125,   126,
     127,   128,   129,   130,   131,   132,   146,   147,   152,   153,
     156,   154,   141,   157,   158,   159,   174,   161,   162,   163,
     164,   170,   167,   166,   173,   172,   178,   169,   171,   151,
     179,   180,   181,   182,   183,   184,   185,   186,   209,   193,
     187,   188,   191,   192,   194,   195,   207,   203,   196,   197,
     199,   200,   215,   168,   201,   202,   204,   205,   206,   214,
       7,   210,   145,   101,   165,   216,   190,     0,     0,     0,
      35
};

static const yytype_int16 yycheck[] =
{
       9,     9,   175,     5,     7,   116,    30,    31,    17,    17,
       9,    10,     3,     9,     3,     8,    40,   190,     9,    10,
       0,    17,    30,    41,     5,     9,    17,     9,    10,     4,
      21,    22,    16,     5,    16,     7,    41,   148,    41,    41,
     213,    79,     8,    81,     8,    36,    37,     5,    56,    10,
      11,    12,    13,    14,    15,     5,    42,    18,     7,    42,
       5,     5,    23,    24,    25,    26,    27,     7,    29,     7,
       5,    41,     5,    34,     5,     5,    41,    38,    39,    88,
      88,     5,    41,     4,    41,     5,     5,     5,     4,    42,
       5,    42,    19,     7,     7,     7,     7,     5,    41,    41,
      41,     7,   111,   111,    41,     7,     7,   116,    42,    41,
       7,     7,     7,    42,     5,     5,    42,    42,     4,    42,
       5,    28,    32,     5,     5,     4,    20,     5,     4,     4,
       4,   148,     5,    42,     4,     7,     5,    42,    42,   148,
       5,     7,    42,     5,     5,     5,     5,     5,    41,     4,
       7,     7,     5,     5,     5,     5,    33,     4,     7,     7,
       5,     5,    42,   142,     7,     7,     7,     7,     7,     7,
       4,    35,   111,    56,   136,   212,   176,    -1,    -1,    -1,
      17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    44,    45,    66,     8,     0,    45,     5,    41,
       9,    10,    17,    21,    22,    36,    37,    54,    55,    64,
      65,    66,    67,    79,    80,    86,    94,     4,     5,    41,
      41,     8,     8,     5,     5,    55,    42,     7,     7,    41,
      42,    11,    12,    13,    14,    15,    18,    23,    24,    25,
      26,    27,    29,    34,    38,    39,    56,    57,    65,    68,
      69,    70,    71,    72,    73,    81,    82,    87,    88,    89,
      90,    91,    92,    93,     5,     5,     7,     7,     5,    41,
      16,    46,    47,    63,    64,    65,     5,     5,    41,     5,
       5,    41,     4,     5,     5,     5,     4,    41,     5,     7,
       7,    57,    42,     7,    47,     5,     7,    47,    42,    41,
      41,    52,    53,    64,    65,    41,    41,    19,    60,    83,
       7,     5,     7,     7,     7,    42,    41,     7,     7,     7,
      42,     5,     5,    30,    31,    40,    58,    59,    95,    96,
      97,    32,    50,    51,    98,    53,    42,    42,    48,    49,
      63,    64,     4,    42,    28,    84,     5,     5,     5,     4,
      74,     5,     4,     4,     4,    59,    42,     5,    51,    42,
      49,    42,     7,     4,    20,    61,    62,    85,     5,     5,
       7,    42,     5,     5,     5,     5,     5,     7,     7,    62,
      84,     5,     5,     4,     5,     5,     7,     7,    62,     5,
       5,     7,     7,     4,     7,     7,     7,    33,    75,    41,
      35,    76,    77,    78,     7,    42,    76,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    47,    47,
      48,    48,    49,    49,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    54,    54,    54,    54,    54,    54,    55,
      55,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    57,    57,    58,
      58,    58,    59,    59,    60,    60,    61,    62,    62,    63,
      63,    63,    64,    65,    65,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     0,     2,
       1,     1,     0,     2,     1,     0,     2,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     0,     2,     3,     5,     1,     0,     2,     5,
       4,     3,     4,     5,     6,     3,     6,     4,     5,     3,
       4,     5,     4,     5,     7,     4,     0,     2,     2,     2,
       5,     3,     5,     4,     5,     2,     6,     3,     3,     4,
       3,     7,     7,     3,     3,     3,     3,     3,     4,     4,
       3
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
    default: /* Avoid compiler warnings. */
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
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

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
                  (unsigned long) yystacksize));

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
#line 125 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    mdl_root = (yyvsp[0].link);
  }
#line 1507 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 3:
#line 130 "parse_mdl.ypp" /* yacc.c:1660  */
    { (yyval.link) = NULL; }
#line 1513 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 4:
#line 131 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyvsp[-1].link)->next = (yyvsp[0].link);
    (yyval.link) = (yyvsp[-1].link);
  }
#line 1522 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 5:
#line 138 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.element) = NULL;
  }
#line 1530 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 6:
#line 141 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.element) = (yyvsp[0].element);
  }
#line 1538 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 7:
#line 144 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.element) = NULL;
  }
#line 1546 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 8:
#line 149 "parse_mdl.ypp" /* yacc.c:1660  */
    { (yyval.element) = NULL; }
#line 1552 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 9:
#line 150 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    if ((yyvsp[-1].element)) {
      (yyvsp[-1].element)->next = (yyvsp[0].element);
      (yyval.element) = (yyvsp[-1].element);
    } else {
      (yyval.element) = (yyvsp[0].element);
    }
  }
#line 1565 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 10:
#line 161 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.element) = NULL;
  }
#line 1573 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 11:
#line 164 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.element) = (yyvsp[0].element);
  }
#line 1581 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 12:
#line 169 "parse_mdl.ypp" /* yacc.c:1660  */
    { (yyval.element) = NULL; }
#line 1587 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 13:
#line 170 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    if ((yyvsp[-1].element)) {
      (yyvsp[-1].element)->next = (yyvsp[0].element);
      (yyval.element) = (yyvsp[-1].element);
    } else {
      (yyval.element) = (yyvsp[0].element);
    }
  }
#line 1600 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 15:
#line 184 "parse_mdl.ypp" /* yacc.c:1660  */
    { }
#line 1606 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 16:
#line 185 "parse_mdl.ypp" /* yacc.c:1660  */
    {
  }
#line 1613 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 19:
#line 194 "parse_mdl.ypp" /* yacc.c:1660  */
    { }
#line 1619 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 20:
#line 195 "parse_mdl.ypp" /* yacc.c:1660  */
    {
  }
#line 1626 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 21:
#line 200 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.lcontent) = NULL;
  }
#line 1634 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 22:
#line 203 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.lcontent) = NULL;
  }
#line 1642 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 23:
#line 206 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.lcontent) = NULL;
  }
#line 1650 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 24:
#line 209 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.lcontent) = NULL;
  }
#line 1658 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 25:
#line 212 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.lcontent) = NULL;
  }
#line 1666 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 26:
#line 215 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.lcontent) = (struct mdl_lcontent_t *) calloc (sizeof (struct mdl_lcontent_t), 1);
    (yyval.lcontent)->type = t_TABLE;
    (yyval.lcontent)->table = (yyvsp[0].table);
  }
#line 1676 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 27:
#line 220 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.lcontent) = (struct mdl_lcontent_t *) calloc (sizeof (struct mdl_lcontent_t), 1);
    (yyval.lcontent)->type = t_LINK;
    (yyval.lcontent)->link = (yyvsp[0].link);
  }
#line 1686 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 28:
#line 225 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.lcontent) = (struct mdl_lcontent_t *) calloc (sizeof (struct mdl_lcontent_t), 1);
    (yyval.lcontent)->type = t_DATA;
    (yyval.lcontent)->data = (yyvsp[0].data);
  }
#line 1696 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 29:
#line 232 "parse_mdl.ypp" /* yacc.c:1660  */
    { (yyval.lcontent) = NULL; }
#line 1702 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 30:
#line 233 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    if ((yyvsp[-1].lcontent)) {
      (yyvsp[-1].lcontent)->next = (yyvsp[0].lcontent);
      (yyval.lcontent) = (yyvsp[-1].lcontent);
    } else {
      (yyval.lcontent) = (yyvsp[0].lcontent);
    }
  }
#line 1715 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 31:
#line 244 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = NULL;
  }
#line 1723 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 32:
#line 247 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = NULL;
  }
#line 1731 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 33:
#line 250 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = NULL;
  }
#line 1739 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 34:
#line 253 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = NULL;
  }
#line 1747 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 35:
#line 256 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = NULL;
  }
#line 1755 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 36:
#line 259 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = NULL;
  }
#line 1763 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 37:
#line 262 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = NULL;
  }
#line 1771 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 38:
#line 265 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = NULL;
  }
#line 1779 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 39:
#line 268 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = NULL;
  }
#line 1787 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 40:
#line 271 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = NULL;
  }
#line 1795 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 41:
#line 274 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = NULL;
  }
#line 1803 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 42:
#line 277 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = NULL;
  }
#line 1811 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 43:
#line 280 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = (struct mdl_dcontent_t *) calloc (sizeof (struct mdl_dcontent_t), 1);
    (yyval.dcontent)->type = t_HYPTABLE;
    (yyval.dcontent)->hyptable = (yyvsp[0].hyptable);
  }
#line 1821 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 44:
#line 285 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = (struct mdl_dcontent_t *) calloc (sizeof (struct mdl_dcontent_t), 1);
    (yyval.dcontent)->type = t_DATASET;
    (yyval.dcontent)->data = (yyvsp[0].dset);
  }
#line 1831 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 45:
#line 290 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = NULL;
  }
#line 1839 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 46:
#line 293 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dcontent) = NULL;
  }
#line 1847 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 47:
#line 298 "parse_mdl.ypp" /* yacc.c:1660  */
    { (yyval.dcontent) = NULL; }
#line 1853 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 48:
#line 299 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    if ((yyvsp[-1].dcontent)) {
      (yyvsp[-1].dcontent)->next = (yyvsp[0].dcontent);
      (yyval.dcontent) = (yyvsp[-1].dcontent);
    } else {
      (yyval.dcontent) = (yyvsp[0].dcontent);
    }
  }
#line 1866 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 52:
#line 315 "parse_mdl.ypp" /* yacc.c:1660  */
    { }
#line 1872 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 53:
#line 316 "parse_mdl.ypp" /* yacc.c:1660  */
    {
  }
#line 1879 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 54:
#line 321 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dset) = (struct mdl_dataset_t *) calloc (sizeof (struct mdl_dataset_t), 1);
    (yyval.dset)->dsize = (yyvsp[-2].dsize);
    (yyval.dset)->type1 = (yyvsp[-1].ident);
    (yyval.dset)->data1 = (yyvsp[0].point);
  }
#line 1890 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 55:
#line 327 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dset) = (struct mdl_dataset_t *) calloc (sizeof (struct mdl_dataset_t), 1);
    (yyval.dset)->dsize = (yyvsp[-4].dsize);
    (yyval.dset)->type1 = (yyvsp[-3].ident);
    (yyval.dset)->data1 = (yyvsp[-2].point);
    (yyval.dset)->type2 = (yyvsp[-1].ident);
    (yyval.dset)->data2 = (yyvsp[0].point);
  }
#line 1903 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 57:
#line 341 "parse_mdl.ypp" /* yacc.c:1660  */
    { (yyval.point) = NULL; }
#line 1909 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 58:
#line 342 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyvsp[-1].point)->next = (yyvsp[0].point);
    (yyval.point) = (yyvsp[-1].point);
  }
#line 1918 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 59:
#line 349 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.element) = (struct mdl_element_t *) calloc (sizeof (struct mdl_element_t), 1);
    (yyval.element)->number = (int) (yyvsp[-3].f);
    (yyval.element)->name = (yyvsp[-2].ident);
    (yyval.element)->value = (yyvsp[-1].ident);
    (yyval.element)->attr = (yyvsp[0].ident);
  }
#line 1930 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 60:
#line 356 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.element) = (struct mdl_element_t *) calloc (sizeof (struct mdl_element_t), 1);
    (yyval.element)->number = (int) (yyvsp[-2].f);
    (yyval.element)->name = (yyvsp[-1].ident);
    (yyval.element)->value = (yyvsp[0].ident);
  }
#line 1941 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 61:
#line 362 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.element) = (struct mdl_element_t *) calloc (sizeof (struct mdl_element_t), 1);
    (yyval.element)->name = (yyvsp[-1].ident);
    (yyval.element)->value = (yyvsp[0].ident);
  }
#line 1951 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 62:
#line 370 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-2].ident));
    free ((yyvsp[0].ident));
  }
#line 1960 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 63:
#line 377 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.table) = (struct mdl_table_t *) calloc (sizeof (struct mdl_table_t), 1);
    (yyval.table)->name = (yyvsp[-3].ident);
    (yyval.table)->data = (yyvsp[-1].element);
  }
#line 1970 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 64:
#line 382 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.table) = (struct mdl_table_t *) calloc (sizeof (struct mdl_table_t), 1);
    (yyval.table)->name = (yyvsp[-4].ident);
    (yyval.table)->data = (yyvsp[-1].element);
  }
#line 1980 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 65:
#line 387 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.table) = (struct mdl_table_t *) calloc (sizeof (struct mdl_table_t), 1);
  }
#line 1988 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 66:
#line 393 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.link) = (struct mdl_link_t *) calloc (sizeof (struct mdl_link_t), 1);
    (yyval.link)->name = (yyvsp[-3].ident);
    (yyval.link)->type = (yyvsp[-4].ident);
    (yyval.link)->content = (yyvsp[-1].lcontent);
  }
#line 1999 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 67:
#line 402 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.data) = (struct mdl_data_t *) calloc (sizeof (struct mdl_data_t), 1);
    (yyval.data)->content = (yyvsp[-1].dcontent);
  }
#line 2008 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 68:
#line 409 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-3].ident));
  }
#line 2016 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 70:
#line 419 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-2].ident));
  }
#line 2024 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 71:
#line 425 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-3].ident));
  }
#line 2032 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 72:
#line 431 "parse_mdl.ypp" /* yacc.c:1660  */
    {
  }
#line 2039 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 73:
#line 436 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-3].ident));
  }
#line 2047 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 74:
#line 443 "parse_mdl.ypp" /* yacc.c:1660  */
    {
  }
#line 2054 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 75:
#line 448 "parse_mdl.ypp" /* yacc.c:1660  */
    {
  }
#line 2061 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 76:
#line 452 "parse_mdl.ypp" /* yacc.c:1660  */
    { }
#line 2067 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 77:
#line 453 "parse_mdl.ypp" /* yacc.c:1660  */
    {
  }
#line 2074 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 78:
#line 458 "parse_mdl.ypp" /* yacc.c:1660  */
    {
  }
#line 2081 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 79:
#line 463 "parse_mdl.ypp" /* yacc.c:1660  */
    {
  }
#line 2088 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 80:
#line 468 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-3].ident));
  }
#line 2096 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 81:
#line 474 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-1].ident));
  }
#line 2104 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 82:
#line 480 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.hyptable) = (struct mdl_hyptable_t *) calloc (sizeof (struct mdl_hyptable_t), 1);
    (yyval.hyptable)->name = (yyvsp[-3].ident);
    (yyval.hyptable)->data = (yyvsp[-1].element);
  }
#line 2114 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 83:
#line 488 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dset) = (yyvsp[-1].dset);
  }
#line 2122 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 84:
#line 494 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.dsize) = (struct mdl_datasize_t *) calloc (sizeof (struct mdl_datasize_t), 1);
    (yyval.dsize)->type = (yyvsp[-3].ident);
    (yyval.dsize)->size = (int) (yyvsp[-2].f);
    (yyval.dsize)->x = (int) (yyvsp[-1].f);
    (yyval.dsize)->y = (int) (yyvsp[0].f);
  }
#line 2134 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 85:
#line 504 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.ident) = (yyvsp[0].ident);
  }
#line 2142 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 86:
#line 510 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    (yyval.point) = (struct mdl_point_t *) calloc (sizeof (struct mdl_point_t), 1);
    (yyval.point)->n = (int) (yyvsp[-4].f);
    (yyval.point)->x = (int) (yyvsp[-3].f);
    (yyval.point)->y = (int) (yyvsp[-2].f);
    (yyval.point)->r = (yyvsp[-1].f);
    (yyval.point)->i = (yyvsp[0].f);
  }
#line 2155 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 87:
#line 521 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-1].ident));
    free ((yyvsp[0].ident));
  }
#line 2164 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 88:
#line 528 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-1].ident));
  }
#line 2172 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 89:
#line 534 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-2].ident));
    free ((yyvsp[-1].ident));
    free ((yyvsp[0].ident));
  }
#line 2182 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 90:
#line 539 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-1].ident));
    free ((yyvsp[0].ident));
  }
#line 2191 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 91:
#line 546 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-5].ident));
    free ((yyvsp[-3].ident));
    free ((yyvsp[-2].ident));
    free ((yyvsp[-1].ident));
    free ((yyvsp[0].ident));
  }
#line 2203 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 92:
#line 556 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-5].ident));
    free ((yyvsp[-3].ident));
    free ((yyvsp[-2].ident));
    free ((yyvsp[-1].ident));
    free ((yyvsp[0].ident));
  }
#line 2215 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 93:
#line 566 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-1].ident));
  }
#line 2223 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 94:
#line 572 "parse_mdl.ypp" /* yacc.c:1660  */
    {
  }
#line 2230 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 95:
#line 577 "parse_mdl.ypp" /* yacc.c:1660  */
    {
  }
#line 2237 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 96:
#line 582 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-1].ident));
    free ((yyvsp[0].ident));
  }
#line 2246 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 97:
#line 589 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-1].ident));
    free ((yyvsp[0].ident));
  }
#line 2255 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 98:
#line 596 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-2].ident));
    free ((yyvsp[-1].ident));
    free ((yyvsp[0].ident));
  }
#line 2265 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 99:
#line 604 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-2].ident));
    free ((yyvsp[-1].ident));
    free ((yyvsp[0].ident));
  }
#line 2275 "parse_mdl.cpp" /* yacc.c:1660  */
    break;

  case 100:
#line 612 "parse_mdl.ypp" /* yacc.c:1660  */
    {
    free ((yyvsp[-1].ident));
    free ((yyvsp[0].ident));
  }
#line 2284 "parse_mdl.cpp" /* yacc.c:1660  */
    break;


#line 2288 "parse_mdl.cpp" /* yacc.c:1660  */
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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
#line 618 "parse_mdl.ypp" /* yacc.c:1903  */


int mdl_error (const char * error) {
  fprintf (stderr, "line %d: %s\n", mdl_lineno, error);
  return 0;
}
