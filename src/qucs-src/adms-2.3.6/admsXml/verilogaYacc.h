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

#ifndef YY_VERILOGA_VERILOGAYACC_H_INCLUDED
# define YY_VERILOGA_VERILOGAYACC_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int verilogadebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PREC_IF_THEN = 258,
    tk_else = 259,
    tk_or = 260,
    tk_module = 261,
    tk_begin = 262,
    tk_potential = 263,
    tk_aliasparameter = 264,
    tk_aliasparam = 265,
    tk_while = 266,
    tk_nature = 267,
    tk_ident = 268,
    tk_input = 269,
    tk_number = 270,
    tk_string = 271,
    tk_inout = 272,
    tk_dollar_ident = 273,
    tk_op_shr = 274,
    tk_integer = 275,
    tk_default = 276,
    tk_bitwise_equr = 277,
    tk_domain = 278,
    tk_endcase = 279,
    tk_flow = 280,
    tk_disc_id = 281,
    tk_parameter = 282,
    tk_beginattribute = 283,
    tk_endnature = 284,
    tk_endmodule = 285,
    tk_exclude = 286,
    tk_ground = 287,
    tk_analog = 288,
    tk_anystring = 289,
    tk_inf = 290,
    tk_anytext = 291,
    tk_from = 292,
    tk_enddiscipline = 293,
    tk_for = 294,
    tk_char = 295,
    tk_output = 296,
    tk_real = 297,
    tk_endattribute = 298,
    tk_discipline = 299,
    tk_and = 300,
    tk_branch = 301,
    tk_op_shl = 302,
    tk_endfunction = 303,
    tk_function = 304,
    tk_end = 305,
    tk_if = 306,
    tk_case = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 126 "verilogaYacc.y" /* yacc.c:1909  */

  p_lexval _lexval;
  p_yaccval _yaccval;

#line 112 "verilogaYacc.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE verilogalval;

int verilogaparse (void);

#endif /* !YY_VERILOGA_VERILOGAYACC_H_INCLUDED  */
