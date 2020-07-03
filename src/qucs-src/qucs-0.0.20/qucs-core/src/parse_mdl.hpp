/* A Bison parser, made by GNU Bison 3.2.4.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
#line 93 "parse_mdl.ypp" /* yacc.c:1912  */

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

#line 152 "parse_mdl.hpp" /* yacc.c:1912  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE mdl_lval;

int mdl_parse (void);

#endif /* !YY_MDL_PARSE_MDL_HPP_INCLUDED  */
