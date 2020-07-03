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


/* Substitute the variable and function names.  */
#define yyparse         verilogaparse
#define yylex           verilogalex
#define yyerror         verilogaerror
#define yydebug         verilogadebug
#define yynerrs         veriloganerrs

#define yylval          verilogalval
#define yychar          verilogachar

/* Copy the first part of user declarations.  */
#line 6 "verilogaYacc.y" /* yacc.c:339  */

#define YYDEBUG 1
#include "admsVeriloga.h"

static e_verilogactx ctx;
e_verilogactx verilogactx (){return ctx;}
void set_context(e_verilogactx x){ctx=x;}

#define NEWVARIABLE(l) p_variableprototype myvariableprototype=adms_variableprototype_new(gModule,l,(p_adms)gBlockList->data);

inline static void   Y (p_yaccval myyaccval,p_adms myusrdata) {myyaccval->_usrdata=myusrdata;}
inline static p_adms YY(p_yaccval myyaccval)                  {return myyaccval->_usrdata;}
static char* gNatureAccess=NULL;
static p_number gNatureAbsTol=NULL;
static char* gNatureUnits=NULL;
static char* gNatureidt=NULL;
static char* gNatureddt=NULL;
static char* gDisc=NULL;
static p_discipline gDiscipline=NULL;
static p_module gModule=NULL;
static p_analogfunction gAnalogfunction=NULL;
static p_module gInstanceModule=NULL;
static p_node gGND=NULL;
static p_source gSource=NULL;
static p_lexval gLexval=NULL;
static p_contribution gContribution=NULL;
static admse gVariableType=admse_real;
static admse gNodeDirection;
int uid=0;
static p_slist gVariableDeclarationList=NULL;
static p_slist gInstanceVariableList=NULL;
static p_slist gTerminalList=NULL;
static p_slist gBranchAliasList=NULL;
static p_slist gRangeList=NULL;
static p_slist gNodeList=NULL;
static p_slist gAttributeList=NULL;
static p_slist gGlobalAttributeList=NULL;
static p_slist gBlockList=NULL;
static p_slist gBlockVariableList=NULL;
static p_branchalias gBranchAlias=NULL;

static void adms_veriloga_message_fatal_continue(const p_lexval mytoken)
{
  adms_message_fatal_continue(("[%s:%i:%i]: at '%s':\n",mytoken->_f,mytoken->_l,mytoken->_c,mytoken->_string))
}
static void adms_veriloga_message_fatal (const char* message,const p_lexval mytoken)
{
  adms_veriloga_message_fatal_continue(mytoken);
  adms_message_fatal((message))
}
/*
inline static p_variableprototype variableprototype_recursive_lookup_by_id (p_adms myadms,p_lexval mylexval)
{
  if(myadms==(p_adms)gModule)
    return adms_module_list_variable_lookup_by_id(gModule,gModule,mylexval,(p_adms)gModule);
  else if(myadms==(p_adms)gAnalogfunction)
    return adms_analogfunction_list_variable_lookup_by_id(gAnalogfunction,gModule,mylexval,(p_adms)gAnalogfunction);
  else
  {
    p_slist l;
    for(l=((p_block)myadms)->_variable;l;l=l->next)
      if(!strcmp(((p_variableprototype)l->data)->_lexval->_string,mylexval->_string))
        return (p_variableprototype)l->data;
    return variableprototype_recursive_lookup_by_id((p_adms)((p_block)myadms)->_block,mylexval);
  }
}
*/
inline static p_variable variable_recursive_lookup_by_id (p_adms myadms,p_lexval mylexval)
{
  if(myadms==(p_adms)gModule)
  {
    p_variable myvariable=NULL;
    p_variableprototype myvariableprototype;
    if((myvariableprototype=adms_module_list_variable_lookup_by_id(gModule,gModule,mylexval,(p_adms)gModule)))
    {
      myvariable=adms_variable_new(myvariableprototype);
      adms_slist_push(&myvariableprototype->_instance,(p_adms)myvariable);
    }
    return myvariable;
  }
  else if(myadms==(p_adms)gAnalogfunction)
  {
    p_variable myvariable=NULL;
    p_variableprototype myvariableprototype;
    if((myvariableprototype=adms_analogfunction_list_variable_lookup_by_id(gAnalogfunction,gModule,mylexval,(p_adms)gAnalogfunction)))
    {
      myvariable=adms_variable_new(myvariableprototype);
      adms_slist_push(&myvariableprototype->_instance,(p_adms)myvariable);
    }
    return myvariable;
  }
  else
  {
    p_slist l;
    for(l=((p_block)myadms)->_variable;l;l=l->next)
      if(!strcmp(((p_variableprototype)l->data)->_lexval->_string,mylexval->_string))
      {
        p_variableprototype myvariableprototype=(p_variableprototype)l->data;
        p_variable myvariable=adms_variable_new(myvariableprototype);
        adms_slist_push(&myvariableprototype->_instance,(p_adms)myvariable);
        return myvariable;
      }
    return variable_recursive_lookup_by_id((p_adms)((p_block)myadms)->_block,mylexval);
  }
}
static p_nature lookup_nature(const char *myname)
{
  p_slist l;
  for(l=root()->_nature;l;l=l->next)
    if(!strcmp(((p_nature)l->data)->_name,myname))
      return (p_nature)l->data;
  return NULL;
}


#line 190 "verilogaYacc.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
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
#line 126 "verilogaYacc.y" /* yacc.c:355  */

  p_lexval _lexval;
  p_yaccval _yaccval;

#line 288 "verilogaYacc.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE verilogalval;

int verilogaparse (void);

#endif /* !YY_VERILOGA_VERILOGAYACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 305 "verilogaYacc.c" /* yacc.c:358  */

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   642

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  122
/* YYNRULES -- Number of rules.  */
#define YYNRULES  263
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  514

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,    67,     2,    78,    73,     2,
      55,    56,    76,    64,    57,    63,    68,    77,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,    53,
      66,    54,    75,    69,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    62,    71,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,    72,    59,    70,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   295,   295,   300,   303,   308,   311,   314,   319,   326,
     333,   336,   341,   345,   349,   361,   372,   397,   400,   405,
     416,   451,   463,   490,   492,   497,   500,   508,   513,   516,
     521,   533,   548,   532,   559,   561,   564,   567,   572,   575,
     578,   581,   584,   589,   592,   597,   607,   609,   614,   617,
     622,   632,   635,   640,   644,   651,   658,   661,   665,   664,
     672,   671,   679,   678,   685,   688,   691,   697,   696,   708,
     707,   719,   718,   735,   739,   743,   749,   752,   757,   760,
     765,   783,   797,   802,   805,   810,   817,   842,   865,   873,
     879,   887,   895,   906,   909,   914,   917,   920,   923,   926,
     931,   938,   947,   954,   963,   971,   981,   993,  1007,  1019,
    1033,  1037,  1041,  1048,  1047,  1058,  1067,  1070,  1075,  1078,
    1083,  1099,  1102,  1107,  1118,  1129,  1136,  1148,  1157,  1172,
    1174,  1179,  1182,  1187,  1195,  1205,  1213,  1221,  1229,  1237,
    1247,  1251,  1264,  1268,  1279,  1293,  1292,  1303,  1307,  1313,
    1320,  1329,  1339,  1343,  1347,  1351,  1355,  1359,  1363,  1374,
    1382,  1390,  1397,  1401,  1409,  1413,  1426,  1441,  1444,  1449,
    1454,  1460,  1467,  1473,  1482,  1496,  1500,  1506,  1519,  1532,
    1547,  1550,  1555,  1561,  1572,  1582,  1594,  1611,  1636,  1645,
    1654,  1664,  1671,  1680,  1688,  1695,  1705,  1707,  1712,  1735,
    1746,  1749,  1754,  1774,  1789,  1810,  1827,  1852,  1860,  1871,
    1880,  1887,  1896,  1902,  1908,  1912,  1923,  1927,  1935,  1945,
    1949,  1959,  1963,  1973,  1977,  1987,  1991,  2001,  2005,  2015,
    2019,  2027,  2037,  2041,  2049,  2057,  2065,  2075,  2079,  2087,
    2097,  2101,  2109,  2119,  2123,  2131,  2139,  2149,  2153,  2160,
    2167,  2174,  2183,  2190,  2221,  2226,  2256,  2260,  2266,  2284,
    2290,  2298,  2307,  2359
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PREC_IF_THEN", "tk_else", "tk_or",
  "tk_module", "tk_begin", "tk_potential", "tk_aliasparameter",
  "tk_aliasparam", "tk_while", "tk_nature", "tk_ident", "tk_input",
  "tk_number", "tk_string", "tk_inout", "tk_dollar_ident", "tk_op_shr",
  "tk_integer", "tk_default", "tk_bitwise_equr", "tk_domain", "tk_endcase",
  "tk_flow", "tk_disc_id", "tk_parameter", "tk_beginattribute",
  "tk_endnature", "tk_endmodule", "tk_exclude", "tk_ground", "tk_analog",
  "tk_anystring", "tk_inf", "tk_anytext", "tk_from", "tk_enddiscipline",
  "tk_for", "tk_char", "tk_output", "tk_real", "tk_endattribute",
  "tk_discipline", "tk_and", "tk_branch", "tk_op_shl", "tk_endfunction",
  "tk_function", "tk_end", "tk_if", "tk_case", "';'", "'='", "'('", "')'",
  "','", "'{'", "'}'", "'['", "':'", "']'", "'-'", "'+'", "'@'", "'<'",
  "'#'", "'.'", "'?'", "'~'", "'^'", "'|'", "'&'", "'!'", "'>'", "'*'",
  "'/'", "'%'", "$accept", "R_admsParse", "R_l.admsParse", "R_s.admsParse",
  "R_discipline_member", "R_discipline_name", "R_l.discipline_assignment",
  "R_s.discipline_assignment", "R_discipline.naturename",
  "R_nature_member", "R_l.nature_assignment", "R_s.nature_assignment",
  "R_d.attribute.0", "R_d.attribute", "R_l.attribute", "R_s.attribute",
  "R_d.module", "$@1", "$@2", "R_modulebody", "R_netlist", "R_l.instance",
  "R_d.terminal", "R_l.terminal.0", "R_l.terminal", "R_s.terminal",
  "R_l.declaration", "R_s.declaration.withattribute",
  "R_d.attribute.global", "R_s.declaration", "$@3", "$@4", "$@5",
  "R_d.node", "$@6", "$@7", "$@8", "R_node.type", "R_l.terminalnode",
  "R_l.node", "R_s.terminalnode", "R_s.node", "R_d.branch",
  "R_l.branchalias", "R_s.branchalias", "R_s.branch", "R_d.analogfunction",
  "R_d.analogfunction.proto", "R_d.analogfunction.name",
  "R_l.analogfunction.declaration", "R_s.analogfunction.declaration",
  "R_l.analogfunction.input.variable",
  "R_l.analogfunction.output.variable",
  "R_l.analogfunction.inout.variable",
  "R_l.analogfunction.integer.variable",
  "R_l.analogfunction.real.variable", "R_variable.type.set",
  "R_variable.type", "$@9", "R_d.variable.end", "R_l.parameter",
  "R_l.variable", "R_d.aliasparameter", "R_d.aliasparameter.token",
  "R_s.parameter", "R_s.variable", "R_s.parameter.name",
  "R_s.variable.name", "R_s.parameter.range", "R_l.interval",
  "R_s.interval", "R_d.interval", "R_interval.inf", "R_interval.sup",
  "R_analog", "$@10", "R_analogcode", "R_l.expression",
  "R_analogcode.atomic", "R_analogcode.block",
  "R_analogcode.block.atevent", "R_l.analysis", "R_s.analysis",
  "R_d.block", "R_d.block.begin", "R_l.blockitem", "R_d.blockvariable",
  "R_l.blockvariable", "R_s.blockvariable", "R_d.contribution",
  "R_contribution", "R_source", "R_d.while", "R_d.for", "R_d.case",
  "R_l.case.item", "R_s.case.item", "R_s.paramlist.0", "R_s.instance",
  "R_instance.module.name", "R_l.instance.parameter",
  "R_s.instance.parameter", "R_s.assignment", "R_d.conditional",
  "R_s.expression", "R_l.enode", "R_s.function_expression", "R_expression",
  "R_e.conditional", "R_e.bitwise_equ", "R_e.bitwise_xor",
  "R_e.bitwise_or", "R_e.bitwise_and", "R_e.logical_or", "R_e.logical_and",
  "R_e.comp_equ", "R_e.comp", "R_e.bitwise_shift", "R_e.arithm_add",
  "R_e.arithm_mult", "R_e.unary", "R_e.atomic", YY_NULLPTR
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
     305,   306,   307,    59,    61,    40,    41,    44,   123,   125,
      91,    58,    93,    45,    43,    64,    60,    35,    46,    63,
     126,    94,   124,    38,    33,    62,    42,    47,    37
};
# endif

#define YYPACT_NINF -348

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-348)))

#define YYTABLE_NINF -61

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,    45,   140,    55,    47,    26,  -348,  -348,  -348,    98,
    -348,  -348,   136,   106,  -348,  -348,    18,  -348,  -348,   173,
    -348,  -348,   182,   132,    28,  -348,   205,  -348,  -348,   187,
     243,   187,   112,  -348,  -348,   121,  -348,  -348,  -348,  -348,
     210,   216,   228,  -348,  -348,   233,   230,    13,   241,  -348,
    -348,  -348,   277,  -348,  -348,   244,  -348,  -348,  -348,   259,
     266,  -348,   543,  -348,   306,   277,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,   336,  -348,   292,  -348,  -348,   305,
    -348,  -348,   338,  -348,    38,   543,  -348,   577,  -348,  -348,
    -348,  -348,  -348,   147,  -348,  -348,  -348,   353,   359,  -348,
     307,   334,  -348,   376,   149,   383,   376,   109,   496,   385,
     347,  -348,  -348,   359,  -348,  -348,  -348,   292,  -348,   398,
     399,   400,   404,   405,   409,    77,  -348,   306,   383,   371,
     359,   372,   415,  -348,   306,   125,  -348,   383,   369,   213,
    -348,   306,   379,   219,  -348,   417,   417,   381,   380,   160,
     -19,   382,   384,   386,  -348,    12,    96,   423,  -348,  -348,
    -348,   306,  -348,    37,  -348,   306,   377,  -348,  -348,  -348,
     395,  -348,    68,  -348,   359,   306,   222,  -348,  -348,   227,
    -348,   236,  -348,   242,  -348,   249,  -348,   251,   442,  -348,
     407,  -348,   252,  -348,   306,   441,   388,   402,  -348,  -348,
     376,   213,   444,  -348,   383,  -348,  -348,   139,  -348,   410,
     411,  -348,   406,   406,   447,   406,  -348,    22,    82,   406,
     406,  -348,   449,  -348,   452,   452,   452,  -348,   171,  -348,
    -348,   454,  -348,   440,   421,   413,  -348,   462,   468,  -348,
    -348,   398,  -348,   469,  -348,   470,  -348,   471,  -348,   472,
    -348,   473,  -348,   383,  -348,  -348,   306,   476,   275,  -348,
     376,  -348,  -348,   433,  -348,   194,   484,   443,   487,  -348,
    -348,   406,   406,   203,   203,   203,   203,   195,  -348,  -348,
      30,   445,   448,   431,   510,   474,   -15,    97,    34,   166,
     279,  -348,  -348,  -348,  -348,   461,  -348,   287,   459,   475,
     295,  -348,   174,   423,   477,   466,   467,   303,   478,   263,
    -348,   268,   269,   406,   406,   460,  -348,  -348,  -348,   406,
    -348,   479,  -348,   481,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,   480,   489,  -348,   388,   308,   511,   406,   406,  -348,
     406,  -348,   483,   151,  -348,  -348,  -348,  -348,   204,   204,
    -348,   195,  -348,   406,   406,   456,   406,   406,   406,   406,
     406,   491,   492,   237,   299,   406,   406,   406,   406,   406,
     406,   406,   496,  -348,   518,   497,  -348,   501,   406,   406,
     496,   327,   498,  -348,   519,  -348,   452,  -348,  -348,  -348,
     488,  -348,   490,  -348,   462,   462,  -348,   406,  -348,   505,
     500,   320,  -348,  -348,   502,   322,  -348,   195,   432,   432,
    -348,  -348,  -348,  -348,   445,    53,   406,   448,   431,   510,
     474,   -15,   406,   406,   406,    34,   406,    34,   166,   166,
     279,   279,  -348,  -348,  -348,  -348,   509,   406,  -348,  -348,
     513,   563,   285,     9,  -348,   190,  -348,   328,  -348,   507,
    -348,   520,  -348,  -348,   479,   516,  -348,  -348,  -348,   406,
    -348,  -348,  -348,    93,   512,  -348,   483,   517,   406,   445,
      97,    97,    34,    34,  -348,  -348,    82,   496,   496,  -348,
    -348,  -348,   496,   521,   498,   564,   406,  -348,  -348,  -348,
     368,   368,    23,   524,  -348,  -348,  -348,  -348,  -348,   526,
    -348,  -348,   172,   179,  -348,   180,   496,  -348,  -348,  -348,
    -348,  -348,  -348,  -348
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      23,     0,     0,     0,     0,     2,     3,     6,     7,     0,
      24,     5,     0,     0,    26,    27,     0,    28,     9,     0,
       1,     4,     0,     0,     0,    17,     0,    25,    29,     0,
       0,     0,     0,    10,    31,     0,    16,    18,    30,    15,
       0,     0,     0,     8,    11,     0,     0,     0,     0,    12,
      14,    13,    46,    32,    22,     0,    19,    21,    50,     0,
      47,    48,    34,    20,    23,     0,   121,   122,   199,    73,
     112,    75,   110,    71,    58,    69,   145,    74,   111,     0,
      66,    55,     0,    36,    39,    35,    51,     0,    53,    56,
      67,    57,    65,     0,   113,    62,    64,     0,    38,    43,
     196,     0,    49,     0,     0,     0,     0,     0,    23,     0,
       0,    33,   145,    40,    44,    37,    52,     0,    54,     0,
       0,     0,     0,     0,     0,    23,    93,    23,     0,     0,
      41,     0,     0,    45,    23,     0,    78,     0,   127,     0,
     116,    23,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,     0,     0,    24,   146,   147,
     148,    23,   162,    23,   152,    23,     0,   155,   157,   156,
       0,   154,     0,    82,    42,    23,     0,    76,   100,     0,
     104,     0,   106,     0,   102,     0,   108,     0,     0,    94,
       0,   114,     0,   118,    23,     0,     0,     0,    81,    72,
       0,     0,     0,   115,     0,    61,   123,     0,    70,     0,
       0,    89,     0,     0,     0,     0,   160,     0,     0,     0,
       0,   165,     0,   174,     0,     0,     0,   151,     0,   163,
     170,     0,   175,    23,     0,     0,   153,     0,     0,    80,
      68,     0,    95,     0,    97,     0,    98,     0,    96,     0,
      99,     0,    88,     0,    63,   124,    23,     0,     0,   200,
       0,    79,    59,     0,   117,   258,   254,   259,   252,   257,
     256,     0,     0,     0,     0,     0,     0,   129,   209,   213,
     214,   216,   219,   221,   223,   225,   227,   229,   232,   237,
     240,   243,   247,    90,    91,     0,   203,     0,     0,     0,
       0,   149,     0,     0,     0,     0,     0,     0,   182,     0,
     180,     0,     0,     0,     0,    23,   172,   176,   184,     0,
      85,    87,    83,     0,    77,   101,   105,   107,   103,   109,
     119,     0,     0,   197,     0,     0,     0,     0,     0,   255,
       0,   253,     0,     0,   249,   248,   251,   250,     0,     0,
     125,   130,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,   187,     0,     0,   159,     0,     0,     0,
      23,     0,     0,   166,     0,   179,     0,   177,   178,   204,
       0,   171,    23,   185,     0,     0,   120,     0,   201,     0,
       0,     0,   210,   212,     0,     0,   263,   129,     0,     0,
     134,   139,   133,   132,   217,     0,     0,   220,   222,   224,
     226,   228,     0,     0,     0,   233,     0,   235,   238,   239,
     242,   241,   244,   245,   246,   188,     0,     0,   158,   150,
       0,   207,    23,     0,   191,     0,   169,     0,   167,     0,
     181,     0,   173,    84,    86,     0,   198,   128,   262,     0,
     260,   261,   126,     0,     0,   140,   209,     0,     0,   218,
     230,   231,   234,   236,   186,   205,     0,    23,    23,   195,
     190,   192,    23,     0,     0,     0,     0,   202,   211,   141,
       0,     0,   215,     0,   208,   194,   193,   164,   168,     0,
     206,   143,     0,     0,   142,     0,    23,   183,   144,   135,
     136,   137,   138,   189
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -348,  -348,  -348,   576,  -348,  -348,  -348,   550,   552,  -348,
    -348,   566,     5,   -62,  -348,   579,  -348,  -348,  -348,  -348,
     514,    49,  -348,  -348,  -348,   527,  -348,   515,  -348,   525,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -102,
     357,   401,  -348,   207,   211,  -348,  -348,  -348,   247,  -348,
     482,  -348,  -348,  -348,  -348,  -348,  -348,   504,  -348,   -24,
     485,  -348,  -348,  -348,   412,   358,  -348,  -122,   199,  -348,
     262,   265,   206,   126,   536,  -348,  -107,   349,  -348,   499,
    -348,  -348,   141,   465,  -348,   312,  -348,   169,   245,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,   185,  -348,   -67,  -348,
    -348,   298,  -216,  -348,  -204,   -92,   170,  -197,  -348,  -347,
    -332,   278,   276,   280,   281,   282,   -18,  -344,    41,    42,
     -42,  -262
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    19,    32,    33,    40,     8,
      24,    25,   156,    10,    16,    17,    11,    45,    62,    82,
      83,    84,    53,    59,    60,    61,    85,    86,    87,    88,
     104,   105,   128,    89,   119,   106,   103,    90,   176,   135,
     177,   136,    91,   321,   322,   110,    92,    93,   147,   125,
     126,   179,   185,   181,   183,   187,    94,    95,   127,   205,
     139,   192,    96,    97,   140,   193,   141,   142,   350,   351,
     352,   410,   464,   503,    98,   108,   232,   300,   159,   160,
     161,   447,   448,   162,   163,   233,   227,   309,   310,   164,
     165,   166,   167,   168,   169,   443,   444,   132,    99,   100,
     258,   259,   170,   171,   301,   445,   402,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      81,   158,   304,   277,   143,     9,   194,   415,   295,   296,
       9,   344,   345,   346,   347,   305,   306,   114,   298,   425,
     427,   414,   265,    81,   266,   221,    55,   267,     1,   268,
     442,    13,   -23,   480,   216,   265,   217,   266,     1,   361,
     267,    23,   268,   269,     2,   353,   157,    20,   148,   270,
     149,    68,   353,   365,     2,   150,   269,    36,    12,   362,
       3,    27,   270,   114,   271,     2,    56,   222,    18,   101,
       3,   112,   273,   274,   342,   353,   151,   271,   299,   275,
     472,   366,   473,   276,   469,   273,   274,   230,   152,   153,
     154,   120,   275,   355,   121,   302,   276,   122,   231,   354,
     355,   157,   155,   223,    22,     2,   265,   114,   266,   389,
       2,   267,   224,   268,   468,   393,   225,   390,   123,   124,
      29,   492,   144,   355,   237,   238,   317,   269,   489,   145,
     188,   194,   191,   270,    46,    30,    47,    31,   226,   198,
     403,   404,   155,   403,   411,   411,   206,   130,   271,    23,
      43,   146,   265,    13,   266,    48,   303,   267,   335,   268,
      26,   120,   174,   363,   121,    70,   188,   122,   254,    72,
     234,   157,   364,   269,   439,   440,    14,   262,   199,   270,
     239,    29,   200,    15,   403,   265,    35,   266,   123,   124,
     267,    78,   268,   455,   271,    34,    30,   272,    31,   255,
      39,   344,   273,   274,   465,   465,   269,   508,   378,   275,
     407,   466,   270,   276,   213,   214,   265,   265,   266,   266,
     215,   267,   267,   268,   268,   313,   348,   271,   213,   367,
     368,   314,   349,   475,   215,   509,   511,   269,   269,    38,
     345,   510,   512,   270,   270,   401,   403,   459,   405,   337,
     265,   482,   266,   157,   338,   267,    41,   268,   271,   408,
     493,   331,   403,    49,   409,   435,   203,   273,   274,    50,
     204,   269,   208,   441,   275,   240,   200,   270,   276,   241,
     242,    51,   500,    54,   243,   317,   504,   504,    52,   244,
      58,   424,   271,   245,    57,   246,   148,    63,   149,   247,
     273,   274,   248,   150,   250,   203,   249,   275,   251,   253,
     157,   276,   265,     2,   266,    64,   385,   267,   157,   268,
     386,   387,   388,    65,   151,   386,   386,   432,   433,   434,
     157,   333,   334,   269,     2,   479,   152,   153,   154,   270,
     265,   107,   266,   373,   374,   267,   478,   268,   442,   -60,
     155,   377,   378,   426,   271,   369,   370,   371,   382,   383,
     109,   269,   273,   274,   399,   200,   129,   270,   111,   275,
     494,   495,    68,   276,   131,   496,   458,   459,   461,   459,
     157,   265,   271,   266,   483,   484,   267,   133,   268,   134,
     273,   274,   209,   210,   311,   312,   138,   275,   172,   513,
     173,   276,   269,   501,   470,   471,   428,   429,   270,   430,
     431,   175,   178,   180,   303,   157,   157,   182,   184,   265,
     157,   266,   186,   271,   267,   195,   268,   196,   197,   202,
     144,   273,   502,   207,   211,   212,   228,   218,   275,   219,
     269,   220,   276,   235,   157,   265,   270,   266,   236,   223,
     267,   148,   268,   149,   256,   252,   257,   260,   150,   263,
     297,   271,   307,   293,   294,   308,   269,   315,     2,   273,
     274,   148,   270,   149,   318,   320,   275,   319,   150,   151,
     276,   323,   325,   326,   327,   328,   329,   271,     2,   332,
     316,   152,   153,   154,   336,   463,   274,   339,   340,   151,
     341,   148,   275,   149,   358,   155,   276,   148,   150,   149,
     391,   152,   153,   154,   150,   359,   356,   372,     2,   360,
     357,   375,   380,   381,     2,   155,   400,   416,   376,   151,
     379,   436,   446,   396,   449,   151,   394,   395,   384,   406,
     452,   152,   153,   154,   397,   422,   423,   152,   153,   154,
     451,   437,    66,    67,   438,   155,    68,    69,   456,    70,
      71,   155,   457,    72,   460,   474,   476,   477,   485,    73,
      74,     2,   487,   490,   486,    75,    76,   497,   491,   499,
     506,    21,    44,    42,    77,    78,    66,    67,   507,    79,
      37,    69,   102,    70,    71,    28,    80,    72,   324,   115,
     116,   261,   454,    73,    74,   453,   462,   189,   137,    75,
     117,   330,   118,   413,   412,   467,   264,   505,    77,    78,
     113,   343,   201,    79,   190,   498,   229,   392,   481,   488,
      80,   450,   398,   418,   417,     0,     0,     0,   419,     0,
     420,     0,   421
};

static const yytype_int16 yycheck[] =
{
      62,   108,   218,   207,   106,     0,   128,   354,   212,   213,
       5,   273,   274,   275,   276,   219,   220,    84,   215,   363,
     364,   353,    13,    85,    15,    13,    13,    18,    12,    20,
      21,    13,     6,    24,    53,    13,    55,    15,    12,    54,
      18,    13,    20,    34,    28,    22,   108,     0,    11,    40,
      13,    13,    22,    19,    28,    18,    34,    29,    13,    74,
      44,    43,    40,   130,    55,    28,    53,    55,    13,    64,
      44,    33,    63,    64,   271,    22,    39,    55,    56,    70,
     424,    47,   426,    74,   416,    63,    64,    50,    51,    52,
      53,    14,    70,    70,    17,    13,    74,    20,    61,    69,
      70,   163,    65,     7,     6,    28,    13,   174,    15,   313,
      28,    18,    16,    20,    61,   319,    20,   314,    41,    42,
       8,   468,    13,    70,    56,    57,   233,    34,    35,    20,
     125,   253,   127,    40,    13,    23,    15,    25,    42,   134,
     337,   338,    65,   340,   348,   349,   141,    98,    55,    13,
      38,    42,    13,    13,    15,    34,   218,    18,   260,    20,
      54,    14,   113,    66,    17,    16,   161,    20,   192,    20,
     165,   233,    75,    34,   378,   379,    36,   201,    53,    40,
     175,     8,    57,    43,   381,    13,    54,    15,    41,    42,
      18,    42,    20,   397,    55,    13,    23,    58,    25,   194,
      13,   463,    63,    64,   408,   409,    34,    35,    57,    70,
      59,   408,    40,    74,    54,    55,    13,    13,    15,    15,
      60,    18,    18,    20,    20,    54,    31,    55,    54,    63,
      64,    60,    37,   437,    60,    56,    56,    34,    34,    34,
     502,    62,    62,    40,    40,   337,   443,    57,   340,    55,
      13,    61,    15,   315,    60,    18,    13,    20,    55,    55,
     476,   256,   459,    53,    60,   372,    53,    63,    64,    53,
      57,    34,    53,   380,    70,    53,    57,    40,    74,    57,
      53,    53,   486,    53,    57,   392,   490,   491,    55,    53,
      13,    54,    55,    57,    53,    53,    11,    53,    13,    57,
      63,    64,    53,    18,    53,    53,    57,    70,    57,    57,
     372,    74,    13,    28,    15,    56,    53,    18,   380,    20,
      57,    53,    53,    57,    39,    57,    57,   369,   370,   371,
     392,    56,    57,    34,    28,   442,    51,    52,    53,    40,
      13,    49,    15,    56,    57,    18,    61,    20,    21,    13,
      65,    56,    57,    54,    55,    76,    77,    78,    55,    56,
      55,    34,    63,    64,    56,    57,    13,    40,    30,    70,
     477,   478,    13,    74,    67,   482,    56,    57,    56,    57,
     442,    13,    55,    15,    56,    57,    18,    53,    20,    13,
      63,    64,   145,   146,   225,   226,    13,    70,    13,   506,
      53,    74,    34,    35,   422,   423,   365,   366,    40,   367,
     368,    13,    13,    13,   476,   477,   478,    13,    13,    13,
     482,    15,    13,    55,    18,    54,    20,    55,    13,    60,
      13,    63,    64,    54,    53,    55,    13,    55,    70,    55,
      34,    55,    74,    66,   506,    13,    40,    15,    53,     7,
      18,    11,    20,    13,    13,    48,    68,    55,    18,    15,
      13,    55,    13,    53,    53,    13,    34,    13,    28,    63,
      64,    11,    40,    13,    53,    13,    70,    64,    18,    39,
      74,    13,    13,    13,    13,    13,    13,    55,    28,    13,
      50,    51,    52,    53,    61,    63,    64,    13,    55,    39,
      13,    11,    70,    13,    73,    65,    74,    11,    18,    13,
      50,    51,    52,    53,    18,     5,    71,    56,    28,    45,
      72,    62,    56,    56,    28,    65,    15,    71,    53,    39,
      53,    13,    34,    53,    15,    39,    57,    56,    60,    56,
      50,    51,    52,    53,    55,    54,    54,    51,    52,    53,
      62,    54,     9,    10,    53,    65,    13,    14,    53,    16,
      17,    65,    62,    20,    62,    56,    53,     4,    61,    26,
      27,    28,    56,    61,    54,    32,    33,    56,    61,    15,
      56,     5,    32,    31,    41,    42,     9,    10,    62,    46,
      24,    14,    65,    16,    17,    16,    53,    20,   241,    85,
      85,   200,   395,    26,    27,   394,   407,   125,   104,    32,
      33,   253,    87,   351,   349,   409,   204,   491,    41,    42,
      84,   272,   137,    46,   125,   484,   161,   315,   443,   459,
      53,   386,   334,   357,   356,    -1,    -1,    -1,   358,    -1,
     359,    -1,   360
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    28,    44,    80,    81,    82,    83,    88,    91,
      92,    95,    13,    13,    36,    43,    93,    94,    13,    84,
       0,    82,     6,    13,    89,    90,    54,    43,    94,     8,
      23,    25,    85,    86,    13,    54,    29,    90,    34,    13,
      87,    13,    87,    38,    86,    96,    13,    15,    34,    53,
      53,    53,    55,   101,    53,    13,    53,    53,    13,   102,
     103,   104,    97,    53,    56,    57,     9,    10,    13,    14,
      16,    17,    20,    26,    27,    32,    33,    41,    42,    46,
      53,    92,    98,    99,   100,   105,   106,   107,   108,   112,
     116,   121,   125,   126,   135,   136,   141,   142,   153,   177,
     178,    91,   104,   115,   109,   110,   114,    49,   154,    55,
     124,    30,    33,   153,   177,    99,   106,    33,   108,   113,
      14,    17,    20,    41,    42,   128,   129,   137,   111,    13,
     100,    67,   176,    53,    13,   118,   120,   136,    13,   139,
     143,   145,   146,   118,    13,    20,    42,   127,    11,    13,
      18,    39,    51,    52,    53,    65,    91,    92,   155,   157,
     158,   159,   162,   163,   168,   169,   170,   171,   172,   173,
     181,   182,    13,    53,   100,    13,   117,   119,    13,   130,
      13,   132,    13,   133,    13,   131,    13,   134,    91,   129,
     158,    91,   140,   144,   146,    54,    55,    13,    91,    53,
      57,   139,    60,    53,    57,   138,    91,    54,    53,   127,
     127,    53,    55,    54,    55,    60,    53,    55,    55,    55,
      55,    13,    55,     7,    16,    20,    42,   165,    13,   162,
      50,    61,   155,   164,    91,    66,    53,    56,    57,    91,
      53,    57,    53,    57,    53,    57,    53,    57,    53,    57,
      53,    57,    48,    57,   138,    91,    13,    68,   179,   180,
      55,   120,   138,    15,   143,    13,    15,    18,    20,    34,
      40,    55,    58,    63,    64,    70,    74,   183,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,    53,    53,   183,   183,    13,   186,    56,
     156,   183,    13,    92,   181,   183,   183,    13,    13,   166,
     167,   166,   166,    54,    60,    13,    50,   155,    53,    64,
      13,   122,   123,    13,   119,    13,    13,    13,    13,    13,
     144,    91,    13,    56,    57,   118,    61,    55,    60,    13,
      55,    13,   186,   156,   200,   200,   200,   200,    31,    37,
     147,   148,   149,    22,    69,    70,    71,    72,    73,     5,
      45,    54,    74,    66,    75,    19,    47,    63,    64,    76,
      77,    78,    56,    56,    57,    62,    53,    56,    57,    53,
      56,    56,    55,    56,    60,    53,    57,    53,    53,   183,
     186,    50,   164,   183,    57,    56,    53,    55,   180,    56,
      15,   184,   185,   186,   186,   184,    56,    59,    55,    60,
     150,   183,   150,   149,   189,   188,    71,   190,   191,   192,
     193,   194,    54,    54,    54,   196,    54,   196,   197,   197,
     198,   198,   199,   199,   199,   155,    13,    54,    53,   183,
     183,   155,    21,   174,   175,   184,    34,   160,   161,    15,
     167,    62,    50,   123,   122,   183,    53,    62,    56,    57,
      62,    56,   147,    63,   151,   183,   186,   151,    61,   189,
     195,   195,   196,   196,    56,   183,    53,     4,    61,   155,
      24,   175,    61,    56,    57,    61,    54,    56,   185,    35,
      61,    61,   188,   181,   155,   155,   155,    56,   161,    15,
     183,    35,    64,   152,   183,   152,    56,    62,    35,    56,
      62,    56,    62,   155
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    81,    81,    82,    82,    82,    83,    84,
      85,    85,    86,    86,    86,    87,    88,    89,    89,    90,
      90,    90,    90,    91,    91,    92,    92,    92,    93,    93,
      94,    96,    97,    95,    98,    98,    98,    98,    99,    99,
      99,    99,    99,   100,   100,   101,   102,   102,   103,   103,
     104,   105,   105,   106,   106,   107,   108,   108,   109,   108,
     110,   108,   111,   108,   108,   108,   108,   113,   112,   114,
     112,   115,   112,   116,   116,   116,   117,   117,   118,   118,
     119,   120,   121,   122,   122,   123,   124,   124,   125,   126,
     126,   126,   127,   128,   128,   129,   129,   129,   129,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     135,   135,   135,   137,   136,   138,   139,   139,   140,   140,
     141,   142,   142,   143,   144,   145,   145,   146,   146,   147,
     147,   148,   148,   149,   149,   150,   150,   150,   150,   150,
     151,   151,   152,   152,   152,   154,   153,   155,   155,   156,
     156,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   158,   158,   159,   159,   159,   160,   160,   161,
     162,   162,   162,   162,   163,   164,   164,   165,   165,   165,
     166,   166,   167,   167,   168,   169,   170,   170,   171,   172,
     173,   174,   174,   175,   175,   175,   176,   176,   177,   178,
     179,   179,   180,   181,   181,   181,   181,   182,   182,   183,
     184,   184,   185,   186,   187,   187,   188,   188,   188,   189,
     189,   190,   190,   191,   191,   192,   192,   193,   193,   194,
     194,   194,   195,   195,   195,   195,   195,   196,   196,   196,
     197,   197,   197,   198,   198,   198,   198,   199,   199,   199,
     199,   199,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     4,     1,
       1,     2,     3,     3,     3,     1,     4,     1,     2,     4,
       5,     4,     4,     0,     1,     3,     2,     2,     1,     2,
       3,     0,     0,     8,     0,     1,     1,     2,     1,     1,
       2,     2,     3,     1,     2,     5,     0,     1,     1,     3,
       1,     1,     2,     1,     2,     1,     1,     1,     0,     5,
       0,     4,     0,     4,     1,     1,     1,     0,     4,     0,
       4,     0,     4,     1,     1,     1,     1,     3,     1,     3,
       2,     2,     3,     1,     3,     1,     6,     4,     4,     4,
       5,     5,     1,     1,     2,     3,     3,     3,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     0,     3,     1,     1,     3,     1,     3,
       6,     1,     1,     2,     2,     4,     6,     1,     6,     0,
       1,     1,     2,     2,     2,     5,     5,     5,     5,     1,
       1,     2,     1,     1,     2,     0,     3,     1,     1,     1,
       3,     2,     1,     2,     1,     1,     1,     1,     5,     4,
       2,     1,     1,     2,     7,     2,     4,     1,     3,     1,
       2,     4,     3,     5,     2,     1,     2,     3,     3,     3,
       1,     3,     1,     6,     3,     4,     6,     4,     5,     9,
       6,     1,     2,     3,     3,     2,     0,     4,     7,     1,
       1,     3,     5,     3,     4,     6,     7,     5,     7,     1,
       1,     3,     1,     1,     1,     5,     1,     3,     4,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       4,     4,     1,     3,     4,     3,     4,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     2,     2,
       2,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       4,     4,     4,     3
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
#line 296 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 1815 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 3:
#line 301 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 1822 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 4:
#line 304 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 1829 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 5:
#line 309 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 1836 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 6:
#line 312 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 1843 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 7:
#line 315 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 1850 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 8:
#line 320 "verilogaYacc.y" /* yacc.c:1646  */
    {
            adms_admsmain_list_discipline_prepend_once_or_abort(root(),gDiscipline);
            gDiscipline=NULL;
          }
#line 1859 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 9:
#line 327 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[0]._lexval))->_string;
            gDiscipline=adms_discipline_new(mylexval1);
          }
#line 1868 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 10:
#line 334 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 1875 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 11:
#line 337 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 1882 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 12:
#line 342 "verilogaYacc.y" /* yacc.c:1646  */
    {
            gDiscipline->_potential=(p_nature)YY((yyvsp[-1]._yaccval));
          }
#line 1890 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 13:
#line 346 "verilogaYacc.y" /* yacc.c:1646  */
    {
            gDiscipline->_flow=(p_nature)YY((yyvsp[-1]._yaccval));
          }
#line 1898 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 14:
#line 350 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval2=((p_lexval)(yyvsp[-1]._lexval))->_string;
            if(!strcmp(mylexval2,"discrete"))
              gDiscipline->_domain=admse_discrete;
            else if(!strcmp(mylexval2,"continuous"))
              gDiscipline->_domain=admse_continuous;
            else
             adms_veriloga_message_fatal("domain: bad value given - should be either 'discrete' or 'continuous'\n",(yyvsp[-1]._lexval));
          }
#line 1912 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 15:
#line 362 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[0]._lexval))->_string;
            p_nature mynature=lookup_nature(mylexval1);
            if(!mynature)
              adms_veriloga_message_fatal("can't find nature definition\n",(yyvsp[0]._lexval));
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)mynature);
          }
#line 1925 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 16:
#line 373 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval2=((p_lexval)(yyvsp[-2]._lexval))->_string;
            p_nature mynature=NULL;
            if(gNatureAccess) 
              mynature=adms_admsmain_list_nature_prepend_by_id_once_or_abort(root(),gNatureAccess);
            else
             adms_veriloga_message_fatal("attribute 'access' in nature definition not found\n",(yyvsp[-2]._lexval));
            adms_nature_valueto_name(mynature,mylexval2);
            if(gNatureidt) 
              adms_nature_valueto_idt_name(mynature,gNatureidt);
            if(gNatureddt) 
              adms_nature_valueto_ddt_name(mynature,gNatureddt);
            if(gNatureUnits)
              mynature->_units=gNatureUnits;
            if(gNatureAbsTol)
              mynature->_abstol=gNatureAbsTol;
            gNatureAccess=NULL;
            gNatureAbsTol=NULL;
            gNatureUnits=NULL;
            gNatureidt=NULL;
            gNatureddt=NULL;
          }
#line 1952 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 17:
#line 398 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 1959 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 18:
#line 401 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 1966 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 19:
#line 406 "verilogaYacc.y" /* yacc.c:1646  */
    {
            if(!strcmp((yyvsp[-3]._lexval)->_string,"abstol"))
            {
              if(gNatureAbsTol)
                adms_veriloga_message_fatal("nature attribute defined more than once\n",(yyvsp[-3]._lexval));
              gNatureAbsTol=adms_number_new((yyvsp[-1]._lexval));
            }
            else
             adms_veriloga_message_fatal("unknown nature attribute\n",(yyvsp[-3]._lexval));
          }
#line 1981 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 20:
#line 417 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval4=((p_lexval)(yyvsp[-1]._lexval))->_string;
            admse myunit=admse_1;
            if(!strcmp((yyvsp[-4]._lexval)->_string,"abstol"))
            {
              if(gNatureAbsTol)
                adms_veriloga_message_fatal("nature attribute defined more than once\n",(yyvsp[-4]._lexval));
              gNatureAbsTol=adms_number_new((yyvsp[-2]._lexval));
            }
            else
             adms_veriloga_message_fatal("unknown nature attribute\n",(yyvsp[-4]._lexval));
            if(0) {}
            else if(!strcmp(mylexval4,"E")) myunit=admse_E;
            else if(!strcmp(mylexval4,"P")) myunit=admse_P;
            else if(!strcmp(mylexval4,"T")) myunit=admse_T;
            else if(!strcmp(mylexval4,"G")) myunit=admse_G;
            else if(!strcmp(mylexval4,"M")) myunit=admse_M;
            else if(!strcmp(mylexval4,"K")) myunit=admse_K;
            else if(!strcmp(mylexval4,"k")) myunit=admse_k;
            else if(!strcmp(mylexval4,"h")) myunit=admse_h;
            else if(!strcmp(mylexval4,"D")) myunit=admse_D;
            else if(!strcmp(mylexval4,"d")) myunit=admse_d;
            else if(!strcmp(mylexval4,"c")) myunit=admse_c;
            else if(!strcmp(mylexval4,"m")) myunit=admse_m;
            else if(!strcmp(mylexval4,"u")) myunit=admse_u;
            else if(!strcmp(mylexval4,"n")) myunit=admse_n;
            else if(!strcmp(mylexval4,"A")) myunit=admse_A;
            else if(!strcmp(mylexval4,"p")) myunit=admse_p;
            else if(!strcmp(mylexval4,"f")) myunit=admse_f;
            else if(!strcmp(mylexval4,"a")) myunit=admse_a;
            else
              adms_veriloga_message_fatal("can not convert symbol to valid unit\n",(yyvsp[-1]._lexval));
            gNatureAbsTol->_scalingunit=myunit;
          }
#line 2020 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 21:
#line 452 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval3=((p_lexval)(yyvsp[-1]._lexval))->_string;
            if(!strcmp((yyvsp[-3]._lexval)->_string,"units"))
            {
              if(gNatureUnits)
                adms_veriloga_message_fatal("nature attribute defined more than once\n",(yyvsp[-3]._lexval));
              gNatureUnits=adms_kclone(mylexval3);
            }
            else
             adms_veriloga_message_fatal("unknown nature attribute\n",(yyvsp[-3]._lexval));
          }
#line 2036 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 22:
#line 464 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval3=((p_lexval)(yyvsp[-1]._lexval))->_string;
            if(!strcmp((yyvsp[-3]._lexval)->_string,"access"))
            {
              if(gNatureAccess)
                adms_veriloga_message_fatal("nature attribute defined more than once\n",(yyvsp[-3]._lexval));
              gNatureAccess=adms_kclone(mylexval3);
            }
            else if(!strcmp((yyvsp[-3]._lexval)->_string,"idt_nature"))
            {
              if(gNatureidt)
                adms_veriloga_message_fatal("idt_nature attribute defined more than once\n",(yyvsp[-3]._lexval));
              gNatureidt=adms_kclone(mylexval3);
            }
            else if(!strcmp((yyvsp[-3]._lexval)->_string,"ddt_nature"))
            {
              if(gNatureddt)
                adms_veriloga_message_fatal("ddt_nature attribute defined more than once\n",(yyvsp[-3]._lexval));
              gNatureddt=adms_kclone(mylexval3);
            }
            else
             adms_veriloga_message_fatal("unknown nature attribute\n",(yyvsp[-3]._lexval));
          }
#line 2064 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 23:
#line 490 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2071 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 24:
#line 493 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2078 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 25:
#line 498 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2085 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 26:
#line 501 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval2=((p_lexval)(yyvsp[0]._lexval))->_string;
            p_attribute myattribute=adms_attribute_new("ibm");
            p_admst myconstant=adms_admst_newks(adms_kclone(mylexval2));
            myattribute->_value=(p_adms)myconstant;
            adms_slist_push(&gAttributeList,(p_adms)myattribute);
          }
#line 2097 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 27:
#line 509 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2104 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 28:
#line 514 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2111 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 29:
#line 517 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2118 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 30:
#line 522 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[-2]._lexval))->_string;
            char* mylexval3=((p_lexval)(yyvsp[0]._lexval))->_string;
            p_attribute myattribute=adms_attribute_new(mylexval1);
            p_admst myconstant=adms_admst_newks(adms_kclone(mylexval3));
            myattribute->_value=(p_adms)myconstant;
            adms_slist_push(&gAttributeList,(p_adms)myattribute);
          }
#line 2131 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 31:
#line 533 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval3=((p_lexval)(yyvsp[0]._lexval))->_string;
            p_slist l;
            p_nodealias mynodealias;
            gModule=adms_admsmain_list_module_prepend_by_id_once_or_abort(root(),mylexval3); 
            adms_slist_push(&gBlockList,(p_adms)gModule);
            mynodealias=adms_module_list_nodealias_prepend_by_id_once_or_abort(gModule,gModule,"0"); 
            gGND=adms_module_list_node_prepend_by_id_once_or_abort(gModule,gModule,"GND"); 
            mynodealias->_node=gGND;
            gGND->_location=admse_ground;
            for(l=gAttributeList;l;l=l->next)
              adms_slist_push(&gModule->_attribute,l->data);
            adms_slist_free(gAttributeList); gAttributeList=NULL;
          }
#line 2150 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 32:
#line 548 "verilogaYacc.y" /* yacc.c:1646  */
    {
            set_context(ctx_moduletop);
          }
#line 2158 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 33:
#line 552 "verilogaYacc.y" /* yacc.c:1646  */
    {
            adms_slist_pull(&gBlockList);
            adms_slist_inreverse(&gModule->_assignment);
          }
#line 2167 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 34:
#line 559 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2174 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 35:
#line 562 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2181 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 36:
#line 565 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2188 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 37:
#line 568 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2195 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 38:
#line 573 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2202 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 39:
#line 576 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2209 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 40:
#line 579 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2216 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 41:
#line 582 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2223 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 42:
#line 585 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2230 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 43:
#line 590 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2237 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 44:
#line 593 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2244 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 45:
#line 598 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist l;
            for(l=gAttributeList;l;l=l->next)
              adms_slist_push(&gModule->_attribute,l->data);
            adms_slist_free(gAttributeList); gAttributeList=NULL;
          }
#line 2255 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 46:
#line 607 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2262 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 47:
#line 610 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2269 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 48:
#line 615 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2276 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 49:
#line 618 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2283 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 50:
#line 623 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[0]._lexval))->_string;
            p_nodealias mynodealias=adms_module_list_nodealias_prepend_by_id_once_or_abort(gModule,gModule,mylexval1); 
            p_node mynode=adms_module_list_node_prepend_by_id_once_or_abort(gModule,gModule,mylexval1); 
            mynodealias->_node=mynode;
            mynode->_location=admse_external;
          }
#line 2295 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 51:
#line 633 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2302 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 52:
#line 636 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2309 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 53:
#line 641 "verilogaYacc.y" /* yacc.c:1646  */
    {
            set_context(ctx_moduletop);
          }
#line 2317 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 54:
#line 645 "verilogaYacc.y" /* yacc.c:1646  */
    {
            adms_slist_free(gGlobalAttributeList); gGlobalAttributeList=NULL;
            set_context(ctx_moduletop);
          }
#line 2326 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 55:
#line 652 "verilogaYacc.y" /* yacc.c:1646  */
    {
            gGlobalAttributeList=gAttributeList;
            gAttributeList=NULL;
          }
#line 2335 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 56:
#line 659 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2342 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 57:
#line 662 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2349 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 58:
#line 665 "verilogaYacc.y" /* yacc.c:1646  */
    {
            set_context(ctx_any);
          }
#line 2357 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 59:
#line 669 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2364 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 60:
#line 672 "verilogaYacc.y" /* yacc.c:1646  */
    {
            set_context(ctx_any);
          }
#line 2372 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 61:
#line 676 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2379 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 62:
#line 679 "verilogaYacc.y" /* yacc.c:1646  */
    {
            set_context(ctx_any);
          }
#line 2387 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 63:
#line 683 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2394 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 64:
#line 686 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2401 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 65:
#line 689 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2408 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 66:
#line 692 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2415 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 67:
#line 697 "verilogaYacc.y" /* yacc.c:1646  */
    {
            set_context(ctx_any);
          }
#line 2423 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 68:
#line 701 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist l;
            for(l=gTerminalList;l;l=l->next)
              ((p_node)l->data)->_direction=gNodeDirection;
            adms_slist_free(gTerminalList); gTerminalList=NULL;
          }
#line 2434 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 69:
#line 708 "verilogaYacc.y" /* yacc.c:1646  */
    {
            set_context(ctx_any);
          }
#line 2442 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 70:
#line 712 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist l;
            for(l=gNodeList;l;l=l->next)
              ((p_node)l->data)->_location=admse_ground;
            adms_slist_free(gNodeList); gNodeList=NULL;
          }
#line 2453 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 71:
#line 719 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[0]._lexval))->_string;
            set_context(ctx_any);
            gDisc=mylexval1;
          }
#line 2463 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 72:
#line 725 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mydisciplinename=gDisc;
            p_discipline mydiscipline=adms_admsmain_list_discipline_lookup_by_id(root(),mydisciplinename);
            p_slist l;
            for(l=gNodeList;l;l=l->next)
              ((p_node)l->data)->_discipline=mydiscipline;
            adms_slist_free(gNodeList); gNodeList=NULL;
          }
#line 2476 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 73:
#line 736 "verilogaYacc.y" /* yacc.c:1646  */
    {
            gNodeDirection=admse_input;
          }
#line 2484 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 74:
#line 740 "verilogaYacc.y" /* yacc.c:1646  */
    {
            gNodeDirection=admse_output;
          }
#line 2492 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 75:
#line 744 "verilogaYacc.y" /* yacc.c:1646  */
    {
            gNodeDirection=admse_inout;
          }
#line 2500 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 76:
#line 750 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2507 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 77:
#line 753 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2514 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 78:
#line 758 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2521 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 79:
#line 761 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2528 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 80:
#line 766 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[-1]._lexval))->_string;
            p_slist l;
            p_node mynode=adms_module_list_node_lookup_by_id(gModule,gModule,mylexval1);
            if(!mynode)
             adms_veriloga_message_fatal("terminal not found\n",(yyvsp[-1]._lexval));
            if(mynode->_location!=admse_external)
             adms_veriloga_message_fatal("node not a terminal\n",(yyvsp[-1]._lexval));
            adms_slist_push(&gTerminalList,(p_adms)mynode);
            for(l=gAttributeList;l;l=l->next)
              adms_slist_push(&mynode->_attribute,l->data);
            adms_slist_free(gAttributeList); gAttributeList=NULL;
            for(l=gGlobalAttributeList;l;l=l->next)
              adms_slist_push(&mynode->_attribute,l->data);
          }
#line 2548 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 81:
#line 784 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[-1]._lexval))->_string;
            p_slist l;
            p_node mynode=adms_module_list_node_prepend_by_id_once_or_ignore(gModule,gModule,mylexval1);
            adms_slist_push(&gNodeList,(p_adms)mynode);
            for(l=gAttributeList;l;l=l->next)
              adms_slist_push(&mynode->_attribute,l->data);
            adms_slist_free(gAttributeList); gAttributeList=NULL;
            for(l=gGlobalAttributeList;l;l=l->next)
              adms_slist_push(&mynode->_attribute,l->data);
          }
#line 2564 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 82:
#line 798 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2571 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 83:
#line 803 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2578 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 84:
#line 806 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2585 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 85:
#line 811 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[0]._lexval))->_string;
            adms_slist_push(&gBranchAliasList,(p_adms)mylexval1);
          }
#line 2594 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 86:
#line 818 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval2=((p_lexval)(yyvsp[-4]._lexval))->_string;
            char* mylexval4=((p_lexval)(yyvsp[-2]._lexval))->_string;
            p_slist l;
            p_branch mybranch; 
            p_node pnode=adms_module_list_node_lookup_by_id(gModule,gModule,mylexval2);
            p_node nnode=adms_module_list_node_lookup_by_id(gModule,gModule,mylexval4);
            mybranch=adms_module_list_branch_prepend_by_id_once_or_ignore(gModule,gModule,pnode,nnode); 
            if(!pnode)
             adms_veriloga_message_fatal("node never declared\n",(yyvsp[-4]._lexval));
            if(!nnode)
             adms_veriloga_message_fatal("node never declared\n",(yyvsp[-2]._lexval));
            for(l=gBranchAliasList;l;l=l->next)
            {
              char*aliasname=(char*)l->data;
              p_branchalias mybranchalias; 
              mybranchalias=adms_module_list_branchalias_prepend_by_id_once_or_abort(gModule,gModule,aliasname); 
              if(mybranchalias) mybranchalias->_branch=mybranch;
            }
            adms_slist_free(gBranchAliasList);
            gBranchAliasList=NULL;
            for(l=gGlobalAttributeList;l;l=l->next)
              adms_slist_push(&mybranch->_attribute,l->data);
          }
#line 2623 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 87:
#line 843 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval2=((p_lexval)(yyvsp[-2]._lexval))->_string;
            p_slist l;
            p_branch mybranch;
            p_node pnode=adms_module_list_node_lookup_by_id(gModule,gModule,mylexval2);
            if(!pnode)
             adms_veriloga_message_fatal("node never declared\n",(yyvsp[-2]._lexval));
            mybranch=adms_module_list_branch_prepend_by_id_once_or_ignore(gModule,gModule,pnode,gGND); 
            for(l=gBranchAliasList;l;l=l->next)
            {
              char*aliasname=(char*)l->data;
              p_branchalias mybranchalias; 
              mybranchalias=adms_module_list_branchalias_prepend_by_id_once_or_abort(gModule,gModule,aliasname); 
              if(mybranchalias) mybranchalias->_branch=mybranch;
            }
            adms_slist_free(gBranchAliasList);
            gBranchAliasList=NULL;
            for(l=gGlobalAttributeList;l;l=l->next)
              adms_slist_push(&mybranch->_attribute,l->data);
          }
#line 2648 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 88:
#line 866 "verilogaYacc.y" /* yacc.c:1646  */
    {
            adms_slist_pull(&gBlockList);
            gAnalogfunction->_tree=YY((yyvsp[-1]._yaccval));
            gAnalogfunction=NULL;
          }
#line 2658 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 89:
#line 874 "verilogaYacc.y" /* yacc.c:1646  */
    {
            NEWVARIABLE(gAnalogfunction->_lexval)
            adms_analogfunction_list_variable_prepend_once_or_abort(gAnalogfunction,myvariableprototype); 
            myvariableprototype->_output=admse_yes;
          }
#line 2668 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 90:
#line 880 "verilogaYacc.y" /* yacc.c:1646  */
    {
            NEWVARIABLE(gAnalogfunction->_lexval)
            adms_analogfunction_list_variable_prepend_once_or_abort(gAnalogfunction,myvariableprototype); 
            myvariableprototype->_output=admse_yes;
            myvariableprototype->_type=admse_integer;
            gAnalogfunction->_type=admse_integer; 
          }
#line 2680 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 91:
#line 888 "verilogaYacc.y" /* yacc.c:1646  */
    {
            NEWVARIABLE(gAnalogfunction->_lexval)
            adms_analogfunction_list_variable_prepend_once_or_abort(gAnalogfunction,myvariableprototype); 
            myvariableprototype->_output=admse_yes;
          }
#line 2690 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 92:
#line 896 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist l;
            gAnalogfunction=adms_analogfunction_new(gModule,(yyvsp[0]._lexval));
            adms_slist_push(&gBlockList,(p_adms)gAnalogfunction);
            adms_module_list_analogfunction_prepend_once_or_abort(gModule,gAnalogfunction); 
            for(l=gGlobalAttributeList;l;l=l->next)
              adms_slist_push(&gAnalogfunction->_attribute,l->data);
          }
#line 2703 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 93:
#line 907 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2710 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 94:
#line 910 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2717 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 95:
#line 915 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2724 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 96:
#line 918 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2731 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 97:
#line 921 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2738 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 98:
#line 924 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2745 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 99:
#line 927 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2752 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 100:
#line 932 "verilogaYacc.y" /* yacc.c:1646  */
    {
            NEWVARIABLE((yyvsp[0]._lexval))
            adms_analogfunction_list_variable_prepend_once_or_abort(gAnalogfunction,myvariableprototype); 
            myvariableprototype->_input=admse_yes;
            myvariableprototype->_parametertype=admse_analogfunction;
          }
#line 2763 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 101:
#line 939 "verilogaYacc.y" /* yacc.c:1646  */
    {
            NEWVARIABLE((yyvsp[0]._lexval))
            adms_analogfunction_list_variable_prepend_once_or_abort(gAnalogfunction,myvariableprototype); 
            myvariableprototype->_input=admse_yes;
            myvariableprototype->_parametertype=admse_analogfunction;
          }
#line 2774 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 102:
#line 948 "verilogaYacc.y" /* yacc.c:1646  */
    {
            NEWVARIABLE((yyvsp[0]._lexval))
            adms_analogfunction_list_variable_prepend_once_or_abort(gAnalogfunction,myvariableprototype); 
            myvariableprototype->_output=admse_yes;
            myvariableprototype->_parametertype=admse_analogfunction;
          }
#line 2785 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 103:
#line 955 "verilogaYacc.y" /* yacc.c:1646  */
    {
            NEWVARIABLE((yyvsp[0]._lexval))
            adms_analogfunction_list_variable_prepend_once_or_abort(gAnalogfunction,myvariableprototype); 
            myvariableprototype->_output=admse_yes;
            myvariableprototype->_parametertype=admse_analogfunction;
          }
#line 2796 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 104:
#line 964 "verilogaYacc.y" /* yacc.c:1646  */
    {
            NEWVARIABLE((yyvsp[0]._lexval))
            adms_analogfunction_list_variable_prepend_once_or_abort(gAnalogfunction,myvariableprototype); 
            myvariableprototype->_input=admse_yes;
            myvariableprototype->_output=admse_yes;
            myvariableprototype->_parametertype=admse_analogfunction;
          }
#line 2808 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 105:
#line 972 "verilogaYacc.y" /* yacc.c:1646  */
    {
            NEWVARIABLE((yyvsp[0]._lexval))
            adms_analogfunction_list_variable_prepend_once_or_abort(gAnalogfunction,myvariableprototype); 
            myvariableprototype->_input=admse_yes;
            myvariableprototype->_output=admse_yes;
            myvariableprototype->_parametertype=admse_analogfunction;
          }
#line 2820 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 106:
#line 982 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_variableprototype myvariableprototype=adms_analogfunction_list_variable_lookup_by_id(gAnalogfunction,gModule,(yyvsp[0]._lexval),(p_adms)gAnalogfunction);
            if(myvariableprototype)
              myvariableprototype->_type=admse_integer;
            else
            {
              NEWVARIABLE((yyvsp[0]._lexval))
              adms_analogfunction_list_variable_prepend_once_or_abort(gAnalogfunction,myvariableprototype); 
              myvariableprototype->_type=admse_integer;
            }
          }
#line 2836 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 107:
#line 994 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_variableprototype myvariableprototype=adms_analogfunction_list_variable_lookup_by_id(gAnalogfunction,gModule,(yyvsp[0]._lexval),(p_adms)gAnalogfunction);
            if(myvariableprototype)
              myvariableprototype->_type=admse_integer;
            else
            {
              NEWVARIABLE((yyvsp[0]._lexval))
              adms_analogfunction_list_variable_prepend_once_or_abort(gAnalogfunction,myvariableprototype); 
              myvariableprototype->_type=admse_integer;
            }
          }
#line 2852 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1008 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_variableprototype myvariableprototype=adms_analogfunction_list_variable_lookup_by_id(gAnalogfunction,gModule,(yyvsp[0]._lexval),(p_adms)gAnalogfunction);
            if(myvariableprototype)
              myvariableprototype->_type=admse_real;
            else
            {
              NEWVARIABLE((yyvsp[0]._lexval))
              adms_analogfunction_list_variable_prepend_once_or_abort(gAnalogfunction,myvariableprototype); 
              myvariableprototype->_type=admse_real;
            }
          }
#line 2868 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1020 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_variableprototype myvariableprototype=adms_analogfunction_list_variable_lookup_by_id(gAnalogfunction,gModule,(yyvsp[0]._lexval),(p_adms)gAnalogfunction);
            if(myvariableprototype)
              myvariableprototype->_type=admse_real;
            else
            {
              NEWVARIABLE((yyvsp[0]._lexval))
              adms_analogfunction_list_variable_prepend_once_or_abort(gAnalogfunction,myvariableprototype); 
              myvariableprototype->_type=admse_real;
            }
          }
#line 2884 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1034 "verilogaYacc.y" /* yacc.c:1646  */
    {
            gVariableType=admse_integer;
          }
#line 2892 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1038 "verilogaYacc.y" /* yacc.c:1646  */
    {
            gVariableType=admse_real;
          }
#line 2900 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1042 "verilogaYacc.y" /* yacc.c:1646  */
    {
            gVariableType=admse_string;
          }
#line 2908 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1048 "verilogaYacc.y" /* yacc.c:1646  */
    {
            set_context(ctx_any);
          }
#line 2916 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1052 "verilogaYacc.y" /* yacc.c:1646  */
    {
            adms_slist_concat(&gGlobalAttributeList,gAttributeList);
            gAttributeList=NULL;
          }
#line 2925 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1059 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist l;
            for(l=gVariableDeclarationList;l;l=l->next)
              ((p_variableprototype)l->data)->_type=gVariableType;
            adms_slist_free(gVariableDeclarationList); gVariableDeclarationList=NULL;
          }
#line 2936 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1068 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2943 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1071 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2950 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1076 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2957 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1079 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2964 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1084 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval2=((p_lexval)(yyvsp[-4]._lexval))->_string;
            p_slist l;
            p_variableprototype myvariableprototype=adms_module_list_variable_lookup_by_id(gModule,gModule,(yyvsp[-2]._lexval),(p_adms)gModule);
            if(!myvariableprototype)
             adms_veriloga_message_fatal("variable never declared\n",(yyvsp[-2]._lexval));
            adms_variableprototype_list_alias_prepend_once_or_abort(myvariableprototype,adms_kclone(mylexval2));
            for(l=gAttributeList;l;l=l->next)
              adms_slist_push(&myvariableprototype->_attribute,l->data);
            adms_slist_free(gAttributeList); gAttributeList=NULL;
            for(l=gGlobalAttributeList;l;l=l->next)
              adms_slist_push(&myvariableprototype->_attribute,l->data);
          }
#line 2982 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1100 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2989 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1103 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 2996 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1108 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist l;
            for(l=gAttributeList;l;l=l->next)
              adms_slist_push(&((p_variableprototype)gVariableDeclarationList->data)->_attribute,l->data);
            adms_slist_free(gAttributeList); gAttributeList=NULL;
            for(l=gGlobalAttributeList;l;l=l->next)
              adms_slist_push(&((p_variableprototype)gVariableDeclarationList->data)->_attribute,l->data);
          }
#line 3009 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1119 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist l;
            for(l=gAttributeList;l;l=l->next)
              adms_slist_push(&((p_variableprototype)gVariableDeclarationList->data)->_attribute,l->data);
            adms_slist_free(gAttributeList); gAttributeList=NULL;
            for(l=gGlobalAttributeList;l;l=l->next)
              adms_slist_push(&((p_variableprototype)gVariableDeclarationList->data)->_attribute,l->data);
          }
#line 3022 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1130 "verilogaYacc.y" /* yacc.c:1646  */
    {
            ((p_variableprototype)gVariableDeclarationList->data)->_input=admse_yes;
            ((p_variableprototype)gVariableDeclarationList->data)->_default=((p_expression)YY((yyvsp[-1]._yaccval)));
            ((p_variableprototype)gVariableDeclarationList->data)->_range=adms_slist_reverse(gRangeList);
            gRangeList=NULL;
          }
#line 3033 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1137 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist myArgs=(p_slist)YY((yyvsp[-2]._yaccval));
            adms_slist_inreverse(&myArgs);
            ((p_variableprototype)gVariableDeclarationList->data)->_input=admse_yes;
            ((p_variableprototype)gVariableDeclarationList->data)->_default=((p_expression)myArgs->data);
            ((p_variableprototype)gVariableDeclarationList->data)->_arraydefault=myArgs;
            ((p_variableprototype)gVariableDeclarationList->data)->_range=adms_slist_reverse(gRangeList);
            gRangeList=NULL;
          }
#line 3047 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1149 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[0]._lexval))->_string;
            NEWVARIABLE((yyvsp[0]._lexval))
            if(adms_module_list_node_lookup_by_id(gModule,gModule,mylexval1))
             adms_veriloga_message_fatal("variable already defined as node\n",(yyvsp[0]._lexval));
            adms_module_list_variable_prepend_once_or_abort(gModule,myvariableprototype); 
            adms_slist_push(&gVariableDeclarationList,(p_adms)myvariableprototype);
          }
#line 3060 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1158 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[-5]._lexval))->_string;
            NEWVARIABLE((yyvsp[-5]._lexval))
            if(adms_module_list_node_lookup_by_id(gModule,gModule,mylexval1))
             adms_veriloga_message_fatal("variable already defined as node\n",(yyvsp[-5]._lexval));
            adms_module_list_variable_prepend_once_or_abort(gModule,myvariableprototype); 
            adms_slist_push(&gVariableDeclarationList,(p_adms)myvariableprototype);
            myvariableprototype->_sizetype=admse_array;
            myvariableprototype->_minsize=adms_number_new((yyvsp[-3]._lexval));
            myvariableprototype->_maxsize=adms_number_new((yyvsp[-1]._lexval));
          }
#line 3076 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1172 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 3083 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1175 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 3090 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1180 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 3097 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1183 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 3104 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1188 "verilogaYacc.y" /* yacc.c:1646  */
    {
            if(((p_range)YY((yyvsp[0]._yaccval)))->_infboundtype==admse_range_bound_value)
              ((p_range)YY((yyvsp[0]._yaccval)))->_type=admse_include_value;
            else
              ((p_range)YY((yyvsp[0]._yaccval)))->_type=admse_include;
            adms_slist_push(&gRangeList,YY((yyvsp[0]._yaccval)));
          }
#line 3116 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1196 "verilogaYacc.y" /* yacc.c:1646  */
    {
            if(((p_range)YY((yyvsp[0]._yaccval)))->_infboundtype==admse_range_bound_value)
              ((p_range)YY((yyvsp[0]._yaccval)))->_type=admse_exclude_value;
            else
              ((p_range)YY((yyvsp[0]._yaccval)))->_type=admse_exclude;
            adms_slist_push(&gRangeList,YY((yyvsp[0]._yaccval)));
          }
#line 3128 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1206 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_range myrange=adms_module_list_range_prepend_by_id_once_or_abort(gModule,gModule,(p_expression)YY((yyvsp[-3]._yaccval)),(p_expression)YY((yyvsp[-1]._yaccval))); 
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            myrange->_infboundtype=admse_range_bound_exclude;
            myrange->_supboundtype=admse_range_bound_exclude;
            Y((yyval._yaccval),(p_adms)myrange);
          }
#line 3140 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1214 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_range myrange=adms_module_list_range_prepend_by_id_once_or_abort(gModule,gModule,(p_expression)YY((yyvsp[-3]._yaccval)),(p_expression)YY((yyvsp[-1]._yaccval))); 
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            myrange->_infboundtype=admse_range_bound_exclude;
            myrange->_supboundtype=admse_range_bound_include;
            Y((yyval._yaccval),(p_adms)myrange);
          }
#line 3152 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1222 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_range myrange=adms_module_list_range_prepend_by_id_once_or_abort(gModule,gModule,(p_expression)YY((yyvsp[-3]._yaccval)),(p_expression)YY((yyvsp[-1]._yaccval))); 
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            myrange->_infboundtype=admse_range_bound_include;
            myrange->_supboundtype=admse_range_bound_exclude;
            Y((yyval._yaccval),(p_adms)myrange);
          }
#line 3164 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1230 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_range myrange=adms_module_list_range_prepend_by_id_once_or_abort(gModule,gModule,(p_expression)YY((yyvsp[-3]._yaccval)),(p_expression)YY((yyvsp[-1]._yaccval))); 
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            myrange->_infboundtype=admse_range_bound_include;
            myrange->_supboundtype=admse_range_bound_include;
            Y((yyval._yaccval),(p_adms)myrange);
          }
#line 3176 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1238 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_range myrange=adms_module_list_range_prepend_by_id_once_or_abort(gModule,gModule,(p_expression)YY((yyvsp[0]._yaccval)),(p_expression)YY((yyvsp[0]._yaccval))); 
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            myrange->_infboundtype=admse_range_bound_value;
            myrange->_supboundtype=admse_range_bound_value;
            Y((yyval._yaccval),(p_adms)myrange);
          }
#line 3188 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1248 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 3196 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1252 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_number mynumber=adms_number_new((yyvsp[0]._lexval)); 
            p_expression myexpression=adms_expression_new(gModule,(p_adms)mynumber); 
            mynumber->_lexval->_string=adms_kclone("-inf");
            adms_slist_push(&gModule->_expression,(p_adms)myexpression); 
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            myexpression->_infinity=admse_minus;
            myexpression->_hasspecialnumber=adms_kclone("YES");
            Y((yyval._yaccval),(p_adms)myexpression);
          }
#line 3211 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1265 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 3219 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1269 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_number mynumber=adms_number_new((yyvsp[0]._lexval)); 
            p_expression myexpression=adms_expression_new(gModule,(p_adms)mynumber); 
            mynumber->_lexval->_string=adms_kclone("+inf");
            adms_slist_push(&gModule->_expression,(p_adms)myexpression); 
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            myexpression->_infinity=admse_plus;
            myexpression->_hasspecialnumber=adms_kclone("YES");
            Y((yyval._yaccval),(p_adms)myexpression);
          }
#line 3234 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1280 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_number mynumber=adms_number_new((yyvsp[0]._lexval)); 
            p_expression myexpression=adms_expression_new(gModule,(p_adms)mynumber); 
            mynumber->_lexval->_string=adms_kclone("+inf");
            adms_slist_push(&gModule->_expression,(p_adms)myexpression); 
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            myexpression->_infinity=admse_plus;
            myexpression->_hasspecialnumber=adms_kclone("YES");
            Y((yyval._yaccval),(p_adms)myexpression);
          }
#line 3249 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1293 "verilogaYacc.y" /* yacc.c:1646  */
    {
            set_context(ctx_any); // from here, don't recognize node declarations.
                                  // they are not permitted anyway.
          }
#line 3258 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1298 "verilogaYacc.y" /* yacc.c:1646  */
    {
            gModule->_analog=adms_analog_new(YY((yyvsp[0]._yaccval)));
          }
#line 3266 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1304 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 3274 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1308 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 3282 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1314 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist myArgs=NULL;
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            adms_slist_push(&myArgs,YY((yyvsp[0]._yaccval)));
            Y((yyval._yaccval),(p_adms)myArgs);
          }
#line 3293 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1321 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist myArgs=(p_slist)YY((yyvsp[-2]._yaccval));
            (yyval._yaccval)=(yyvsp[-2]._yaccval);
            adms_slist_push(&myArgs,YY((yyvsp[0]._yaccval)));
            Y((yyval._yaccval),(p_adms)myArgs);
          }
#line 3304 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1330 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist l;
            p_slist lv;
            for(l=gAttributeList;l;l=l->next)
              for(lv=((p_blockvariable)YY((yyvsp[0]._yaccval)))->_variable;lv;lv=lv->next)
                adms_slist_push(&((p_variableprototype)lv->data)->_attribute,l->data);
            adms_slist_free(gAttributeList); gAttributeList=NULL;
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 3318 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1340 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 3326 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1344 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[-1]._yaccval);
          }
#line 3334 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1348 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 3342 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1352 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 3350 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1356 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 3358 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1360 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 3366 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1364 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_function myfunction=adms_function_new((yyvsp[-4]._lexval),uid++);
            p_slist myArgs=(p_slist)YY((yyvsp[-2]._yaccval));
            p_callfunction mycallfunction=adms_callfunction_new(gModule,myfunction);
            adms_slist_push(&gModule->_callfunction,(p_adms)mycallfunction);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            adms_slist_inreverse(&myArgs);
            myfunction->_arguments=myArgs;
            Y((yyval._yaccval),(p_adms)mycallfunction);
          }
#line 3381 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1375 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_function myfunction=adms_function_new((yyvsp[-3]._lexval),uid++);
            p_callfunction mycallfunction=adms_callfunction_new(gModule,myfunction);
            adms_slist_push(&gModule->_callfunction,(p_adms)mycallfunction);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)mycallfunction);
          }
#line 3393 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1383 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_function myfunction=adms_function_new((yyvsp[-1]._lexval),uid++);
            p_callfunction mycallfunction=adms_callfunction_new(gModule,myfunction);
            adms_slist_push(&gModule->_callfunction,(p_adms)mycallfunction);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)mycallfunction);
          }
#line 3405 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1391 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)adms_nilled_new(gModule));
          }
#line 3414 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1398 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 3422 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1402 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
            adms_lexval_free(((p_block)YY((yyval._yaccval)))->_lexval);
            ((p_block)YY((yyval._yaccval)))->_lexval=(p_lexval)YY((yyvsp[-1]._yaccval));
          }
#line 3432 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1410 "verilogaYacc.y" /* yacc.c:1646  */
    {
            adms_veriloga_message_fatal("@ control not supported\n",(yyvsp[-4]._lexval));
          }
#line 3440 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1414 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval2=((p_lexval)(yyvsp[0]._lexval))->_string;
            char* mypartitionning=adms_kclone(mylexval2);
            if(strcmp(mypartitionning,"initial_model")
              && strcmp(mypartitionning,"initial_instance")
              && strcmp(mypartitionning,"noise")
              && strcmp(mypartitionning,"initial_step")
              && strcmp(mypartitionning,"final_step"))
              adms_veriloga_message_fatal(" @() control not supported\n",(yyvsp[0]._lexval));
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)(yyvsp[0]._lexval));
          }
#line 3457 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1427 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval3=((p_lexval)(yyvsp[-1]._lexval))->_string;
            char* mypartitionning=adms_kclone(mylexval3);
            if(strcmp(mypartitionning,"initial_model")
              && strcmp(mypartitionning,"initial_instance")
              && strcmp(mypartitionning,"noise")
              && strcmp(mypartitionning,"initial_step")
              && strcmp(mypartitionning,"final_step"))
              adms_veriloga_message_fatal(" @() control not supported\n",(yyvsp[-1]._lexval));
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)(yyvsp[-1]._lexval));
          }
#line 3474 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1442 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 3481 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1445 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 3488 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1450 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 3495 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1455 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),gBlockList->data);
            adms_slist_pull(&gBlockList);
          }
#line 3505 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1461 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),gBlockList->data);
            adms_slist_pull(&gBlockList);
            ((p_block)YY((yyval._yaccval)))->_lexval->_string=(yyvsp[-1]._lexval)->_string;
          }
#line 3516 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1468 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),gBlockList->data);
            adms_slist_pull(&gBlockList);
          }
#line 3526 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1474 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),gBlockList->data);
            adms_slist_pull(&gBlockList);
            ((p_block)YY((yyval._yaccval)))->_lexval->_string=(yyvsp[-2]._lexval)->_string;
          }
#line 3537 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1483 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist l;
            p_block myblock=adms_block_new(gModule,(yyvsp[0]._lexval),gBlockList?((p_block)gBlockList->data):NULL,NULL);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            myblock->_lexval->_string=adms_kclone("");
            adms_slist_push(&gBlockList,(p_adms)myblock);
            for(l=gAttributeList;l;l=l->next)
              adms_slist_push(&myblock->_attribute,l->data);
            adms_slist_free(gAttributeList); gAttributeList=NULL;
            adms_slist_push(&gModule->_block,gBlockList->data);
          }
#line 3553 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1497 "verilogaYacc.y" /* yacc.c:1646  */
    {
            adms_slist_push(&((p_block)gBlockList->data)->_item,YY((yyvsp[0]._yaccval)));
          }
#line 3561 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1501 "verilogaYacc.y" /* yacc.c:1646  */
    {
            adms_slist_push(&((p_block)gBlockList->data)->_item,YY((yyvsp[0]._yaccval)));
          }
#line 3569 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1507 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist l;
            p_blockvariable myblockvariable=adms_blockvariable_new(((p_block)gBlockList->data)); 
            adms_slist_push(&gModule->_blockvariable,(p_adms)myblockvariable); 
            for(l=gBlockVariableList;l;l=l->next)
              ((p_variableprototype)l->data)->_type=admse_integer;
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            adms_slist_inreverse(&gBlockVariableList);
            myblockvariable->_variable=gBlockVariableList;
            gBlockVariableList=NULL;
            Y((yyval._yaccval),(p_adms)myblockvariable);
          }
#line 3586 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1520 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist l;
            p_blockvariable myblockvariable=adms_blockvariable_new(((p_block)gBlockList->data)); 
            adms_slist_push(&gModule->_blockvariable,(p_adms)myblockvariable); 
            for(l=gBlockVariableList;l;l=l->next)
              ((p_variableprototype)l->data)->_type=admse_real;
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            adms_slist_inreverse(&gBlockVariableList);
            myblockvariable->_variable=gBlockVariableList;
            gBlockVariableList=NULL;
            Y((yyval._yaccval),(p_adms)myblockvariable);
          }
#line 3603 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1533 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist l;
            p_blockvariable myblockvariable=adms_blockvariable_new(((p_block)gBlockList->data)); 
            adms_slist_push(&gModule->_blockvariable,(p_adms)myblockvariable); 
            for(l=gBlockVariableList;l;l=l->next)
              ((p_variableprototype)l->data)->_type=admse_string;
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            adms_slist_inreverse(&gBlockVariableList);
            myblockvariable->_variable=gBlockVariableList;
            gBlockVariableList=NULL;
            Y((yyval._yaccval),(p_adms)myblockvariable);
          }
#line 3620 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1548 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 3627 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1551 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 3634 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1556 "verilogaYacc.y" /* yacc.c:1646  */
    {
            NEWVARIABLE((yyvsp[0]._lexval))
            adms_block_list_variable_prepend_once_or_abort(((p_block)gBlockList->data),myvariableprototype); 
            adms_slist_push(&gBlockVariableList,(p_adms)myvariableprototype);
          }
#line 3644 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1562 "verilogaYacc.y" /* yacc.c:1646  */
    {
            NEWVARIABLE((yyvsp[-5]._lexval))
            adms_block_list_variable_prepend_once_or_abort(((p_block)gBlockList->data),myvariableprototype); 
            adms_slist_push(&gVariableDeclarationList,(p_adms)myvariableprototype);
            myvariableprototype->_sizetype=admse_array;
            myvariableprototype->_minsize=adms_number_new((yyvsp[-3]._lexval));
            myvariableprototype->_maxsize=adms_number_new((yyvsp[-1]._lexval));
          }
#line 3657 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1573 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist l;
            for(l=gAttributeList;l;l=l->next)
              adms_slist_push(&gContribution->_attribute,l->data);
            adms_slist_free(gAttributeList); gAttributeList=NULL;
            gContribution=NULL;
          }
#line 3669 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1583 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_source mysource=(p_source)YY((yyvsp[-3]._yaccval));
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            gContribution=adms_contribution_new(gModule,mysource,(p_expression)YY((yyvsp[0]._yaccval)),gLexval);
            adms_slist_push(&gModule->_contribution,(p_adms)gContribution);
            Y((yyval._yaccval),(p_adms)gContribution);
            gContribution->_branchalias=gBranchAlias;
            gBranchAlias=NULL;
          }
#line 3683 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1595 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[-5]._lexval))->_string;
            char* mylexval3=((p_lexval)(yyvsp[-3]._lexval))->_string;
            char* mylexval5=((p_lexval)(yyvsp[-1]._lexval))->_string;
            p_node Pnode=adms_module_list_node_lookup_by_id(gModule,gModule,mylexval3);
            p_node Nnode=adms_module_list_node_lookup_by_id(gModule,gModule,mylexval5);
            char* natureID=mylexval1;
            p_nature mynature=adms_admsmain_list_nature_lookup_by_id(root(),natureID);
            p_branch mybranch=adms_module_list_branch_prepend_by_id_once_or_ignore(gModule,gModule,Pnode,Nnode);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            if(!mynature)
             adms_message_fatal(("[source:error] there is no nature with access %s, missing discipline.h file?\n",natureID))
            gSource=adms_module_list_source_prepend_by_id_once_or_ignore(gModule,gModule,mybranch,mynature);
            gLexval=(yyvsp[-5]._lexval);
            Y((yyval._yaccval),(p_adms)gSource);
          }
#line 3704 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1612 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[-3]._lexval))->_string;
            char* mylexval3=((p_lexval)(yyvsp[-1]._lexval))->_string;
            char* natureID=mylexval1;
            p_nature mynature=adms_admsmain_list_nature_lookup_by_id(root(),natureID);
            p_branchalias branchalias=adms_module_list_branchalias_lookup_by_id(gModule,gModule,mylexval3);
            p_node pnode=adms_module_list_node_lookup_by_id(gModule,gModule,mylexval3);
            p_branch mybranch=NULL;
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            if(!mynature)
             adms_message_fatal(("[source:error] there is no nature with access %s, please, include discipline.h file\n",natureID))
            if(pnode)
              mybranch=adms_module_list_branch_prepend_by_id_once_or_ignore(gModule,gModule,pnode,gGND);
            else if(branchalias)
              mybranch=branchalias->_branch;
            else
              adms_veriloga_message_fatal("undefined branch or node\n",(yyvsp[-3]._lexval));
            gSource=adms_module_list_source_prepend_by_id_once_or_ignore(gModule,gModule,mybranch,mynature);
            gLexval=(yyvsp[-3]._lexval);
            gBranchAlias=branchalias;
            Y((yyval._yaccval),(p_adms)gSource);
          }
#line 3731 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1637 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_whileloop mywhileloop=adms_whileloop_new(gModule,(p_expression)YY((yyvsp[-2]._yaccval)),YY((yyvsp[0]._yaccval)));
            adms_slist_push(&gModule->_whileloop,(p_adms)mywhileloop);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)mywhileloop);
          }
#line 3742 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1646 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_forloop myforloop=adms_forloop_new(gModule,(p_assignment)YY((yyvsp[-6]._yaccval)),(p_expression)YY((yyvsp[-4]._yaccval)),(p_assignment)YY((yyvsp[-2]._yaccval)),YY((yyvsp[0]._yaccval)));
            adms_slist_push(&gModule->_forloop,(p_adms)myforloop);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myforloop);
          }
#line 3753 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1655 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_case mycase=adms_case_new(gModule,(p_expression)YY((yyvsp[-3]._yaccval)));
            adms_slist_push(&gModule->_case,(p_adms)mycase);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            mycase->_caseitem=adms_slist_reverse((p_slist)YY((yyvsp[-1]._yaccval)));
            Y((yyval._yaccval),(p_adms)mycase);
          }
#line 3765 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1665 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist myArgs=NULL;
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            adms_slist_push(&myArgs,YY((yyvsp[0]._yaccval)));
            Y((yyval._yaccval),(p_adms)myArgs);
          }
#line 3776 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1672 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist myArgs=(p_slist)YY((yyvsp[-1]._yaccval));
            (yyval._yaccval)=(yyvsp[-1]._yaccval);
            adms_slist_push(&myArgs,YY((yyvsp[0]._yaccval)));
            Y((yyval._yaccval),(p_adms)myArgs);
          }
#line 3787 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1681 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist myArgs=(p_slist)YY((yyvsp[-2]._yaccval));
            p_caseitem mycaseitem=adms_caseitem_new(YY((yyvsp[0]._yaccval)));
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            mycaseitem->_condition=adms_slist_reverse(myArgs);
            Y((yyval._yaccval),(p_adms)mycaseitem);
          }
#line 3799 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1689 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_caseitem mycaseitem=adms_caseitem_new(YY((yyvsp[0]._yaccval)));
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            mycaseitem->_defaultcase=admse_yes;
            Y((yyval._yaccval),(p_adms)mycaseitem);
          }
#line 3810 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1696 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_caseitem mycaseitem=adms_caseitem_new(YY((yyvsp[0]._yaccval)));
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            mycaseitem->_defaultcase=admse_yes;
            Y((yyval._yaccval),(p_adms)mycaseitem);
          }
#line 3821 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1705 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 3828 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1708 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 3835 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1713 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval3=((p_lexval)(yyvsp[-4]._lexval))->_string;
            p_instance myinstance;
            p_slist l1;
            p_slist l2;
            myinstance=adms_module_list_instance_prepend_by_id_once_or_abort(gModule,gModule,gInstanceModule,mylexval3);
            adms_slist_inreverse(&gInstanceModule->_node);
            l2=gInstanceModule->_node;
            l2=l2->next; /*GND ignored*/
            for(l1=adms_slist_reverse(gNodeList);l1;l1=l1->next)
            {
              adms_instance_list_terminal_prepend_once_or_abort(myinstance,adms_instancenode_new(((p_node)l1->data),(p_node)l2->data));
              l2=l2->next;
            }
            for(l1=gInstanceVariableList;l1;l1=l1->next)
              adms_instance_list_parameterset_prepend_once_or_abort(myinstance,(p_instanceparameter)l1->data);
            adms_slist_inreverse(&gInstanceModule->_node);
            adms_slist_free(gNodeList);gNodeList=NULL;
            adms_slist_free(gInstanceVariableList);gInstanceVariableList=NULL;
          }
#line 3860 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1736 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[0]._lexval))->_string;
            set_context(ctx_any); // from here, don't recognize node declarations.
                                  // they are not permitted anyway.
            gInstanceModule=adms_admsmain_list_module_lookup_by_id(root(),mylexval1);
            if(!gInstanceModule)
              adms_message_fatal(("module '%s' not found\n",mylexval1));
          }
#line 3873 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1747 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 3880 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1750 "verilogaYacc.y" /* yacc.c:1646  */
    {
          }
#line 3887 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1755 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval2=((p_lexval)(yyvsp[-3]._lexval))->_string;
            p_variableprototype myvariableprototype=adms_module_list_variable_lookup_by_id(gInstanceModule,gInstanceModule,(yyvsp[-3]._lexval),(p_adms)gInstanceModule);
            if(myvariableprototype)
            {
              p_instanceparameter myinstanceparameter;
              myinstanceparameter=adms_instanceparameter_new(myvariableprototype);
              adms_slist_push(&gInstanceVariableList,(p_adms)myinstanceparameter);
              myinstanceparameter->_value=((p_expression)YY((yyvsp[-1]._yaccval)));
            }
            else
            {
              adms_veriloga_message_fatal_continue((yyvsp[-3]._lexval));
              adms_message_fatal(("[%s.%s.%s]: undefined variable (instance declaration)",
                adms_module_uid(gModule),adms_module_uid(gInstanceModule),mylexval2))
            }
          }
#line 3909 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1775 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_assignment myassignment;
            p_variable myvariable=variable_recursive_lookup_by_id(gBlockList->data,(yyvsp[-2]._lexval));
            p_variableprototype myvariableprototype;
            if(!myvariable)
              adms_veriloga_message_fatal("undefined variable\n",(yyvsp[-2]._lexval));
            myvariableprototype=myvariable->_prototype;
            myassignment=adms_assignment_new(gModule,(p_adms)myvariable,(p_expression)YY((yyvsp[0]._yaccval)),(yyvsp[-2]._lexval));
            adms_slist_push(&gModule->_assignment,(p_adms)myassignment);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myassignment);
            myvariableprototype->_vcount++;
            myvariableprototype->_vlast=myassignment;
          }
#line 3928 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1790 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_assignment myassignment;
            p_variable myvariable=variable_recursive_lookup_by_id(gBlockList->data,(yyvsp[-2]._lexval));
            p_variableprototype myvariableprototype;
            if(!myvariable)
              adms_veriloga_message_fatal("undefined variable\n",(yyvsp[-2]._lexval));
            myvariableprototype=myvariable->_prototype;
            myassignment=adms_assignment_new(gModule,(p_adms)myvariable,(p_expression)YY((yyvsp[0]._yaccval)),(yyvsp[-2]._lexval));
            adms_slist_push(&gModule->_assignment,(p_adms)myassignment);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myassignment);
            {
              p_slist l;
              for(l=gAttributeList;l;l=l->next)
                adms_slist_push(&myassignment->_attribute,l->data);
            }
            adms_slist_free(gAttributeList); gAttributeList=NULL;
            myvariableprototype->_vcount++;
            myvariableprototype->_vlast=myassignment;
          }
#line 3953 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1811 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_assignment myassignment;
            p_array myarray;
            p_variable myvariable=variable_recursive_lookup_by_id(gBlockList->data,(yyvsp[-5]._lexval));
            p_variableprototype myvariableprototype;
            if(!myvariable)
              adms_veriloga_message_fatal("undefined variable\n",(yyvsp[-5]._lexval));
            myvariableprototype=myvariable->_prototype;
            myarray=adms_array_new(myvariable,YY((yyvsp[-3]._yaccval)));
            myassignment=adms_assignment_new(gModule,(p_adms)myarray,(p_expression)YY((yyvsp[0]._yaccval)),(yyvsp[-5]._lexval));
            adms_slist_push(&gModule->_assignment,(p_adms)myassignment);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myassignment);
            myvariableprototype->_vcount++;
            myvariableprototype->_vlast=myassignment;
          }
#line 3974 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1828 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_assignment myassignment;
            p_array myarray;
            p_variable myvariable=variable_recursive_lookup_by_id(gBlockList->data,(yyvsp[-5]._lexval));
            p_variableprototype myvariableprototype;
            if(!myvariable)
              adms_veriloga_message_fatal("undefined variable\n",(yyvsp[-5]._lexval));
            myvariableprototype=myvariable->_prototype;
            myarray=adms_array_new(myvariable,YY((yyvsp[-3]._yaccval)));
            myassignment=adms_assignment_new(gModule,(p_adms)myarray,(p_expression)YY((yyvsp[0]._yaccval)),(yyvsp[-5]._lexval));
            adms_slist_push(&gModule->_assignment,(p_adms)myassignment);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myassignment);
            {
              p_slist l;
              for(l=gAttributeList;l;l=l->next)
                adms_slist_push(&myassignment->_attribute,l->data);
            }
            adms_slist_free(gAttributeList); gAttributeList=NULL;
            myvariableprototype->_vcount++;
            myvariableprototype->_vlast=myassignment;
          }
#line 4001 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1853 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_expression myexpression=(p_expression)YY((yyvsp[-2]._yaccval));
            p_adms mythen=YY((yyvsp[0]._yaccval));
            p_conditional myconditional=adms_conditional_new(gModule,myexpression,mythen,NULL);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myconditional);
          }
#line 4013 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1861 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_expression myexpression=(p_expression)YY((yyvsp[-4]._yaccval));
            p_adms mythen=YY((yyvsp[-2]._yaccval));
            p_adms myelse=YY((yyvsp[0]._yaccval));
            p_conditional myconditional=adms_conditional_new(gModule,myexpression,mythen,myelse);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myconditional);
          }
#line 4026 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1872 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_expression myexpression=adms_expression_new(gModule,YY((yyvsp[0]._yaccval))); 
            adms_slist_push(&gModule->_expression,(p_adms)myexpression); 
            (yyval._yaccval)=(yyvsp[0]._yaccval);
            Y((yyval._yaccval),(p_adms)myexpression);
          }
#line 4037 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1881 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist myArgs=NULL;
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            adms_slist_push(&myArgs,YY((yyvsp[0]._yaccval)));
            Y((yyval._yaccval),(p_adms)myArgs);
          }
#line 4048 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1888 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_slist myArgs=(p_slist)YY((yyvsp[-2]._yaccval));
            (yyval._yaccval)=(yyvsp[-2]._yaccval);
            adms_slist_push(&myArgs,YY((yyvsp[0]._yaccval)));
            Y((yyval._yaccval),(p_adms)myArgs);
          }
#line 4059 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1897 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4067 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1903 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4075 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1909 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4083 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1913 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-4]._yaccval));
            p_adms m2=YY((yyvsp[-2]._yaccval));
            p_adms m3=YY((yyvsp[0]._yaccval));
            p_mapply_ternary myop=adms_mapply_ternary_new(admse_conditional,m1,m2,m3);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4096 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1924 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4104 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1928 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_bw_equr,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4116 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1936 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-3]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_bw_equl,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4128 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1946 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4136 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1950 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_bw_xor,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4148 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1960 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4156 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1964 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_bw_or,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4168 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1974 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4176 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1978 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_bw_and,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4188 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1988 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4196 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1992 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_or,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4208 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 227:
#line 2002 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4216 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 228:
#line 2006 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_and,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4228 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 229:
#line 2016 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4236 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 230:
#line 2020 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-3]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_equ,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4248 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 231:
#line 2028 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-3]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_notequ,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4260 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 232:
#line 2038 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4268 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 233:
#line 2042 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_lt,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4280 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 234:
#line 2050 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-3]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_lt_equ,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4292 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 235:
#line 2058 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_gt,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4304 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 236:
#line 2066 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-3]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_gt_equ,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4316 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 237:
#line 2076 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4324 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 238:
#line 2080 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_shiftr,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4336 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 239:
#line 2088 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_shiftl,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4348 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 240:
#line 2098 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4356 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 241:
#line 2102 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_addp,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4368 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 242:
#line 2110 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_addm,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4380 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 243:
#line 2120 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4388 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 244:
#line 2124 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_multtime,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4400 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2132 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_multdiv,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4412 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2140 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m1=YY((yyvsp[-2]._yaccval));
            p_adms m2=YY((yyvsp[0]._yaccval));
            p_mapply_binary myop=adms_mapply_binary_new(admse_multmod,m1,m2);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myop);
          }
#line 4424 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2150 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[0]._yaccval);
          }
#line 4432 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2154 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m=YY((yyvsp[0]._yaccval));
            p_mapply_unary mymathapply=adms_mapply_unary_new(admse_plus,m);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)mymathapply);
          }
#line 4443 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2161 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m=YY((yyvsp[0]._yaccval));
            p_mapply_unary mymathapply=adms_mapply_unary_new(admse_minus,m);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)mymathapply);
          }
#line 4454 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2168 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m=YY((yyvsp[0]._yaccval));
            p_mapply_unary mymathapply=adms_mapply_unary_new(admse_not,m);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)mymathapply);
          }
#line 4465 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2175 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_adms m=YY((yyvsp[0]._yaccval));
            p_mapply_unary mymathapply=adms_mapply_unary_new(admse_bw_not,m);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)mymathapply);
          }
#line 4476 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2184 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_number mynumber=adms_number_new((yyvsp[0]._lexval));
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            mynumber->_cast=admse_i;
            Y((yyval._yaccval),(p_adms)mynumber);
          }
#line 4487 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2191 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval2=((p_lexval)(yyvsp[0]._lexval))->_string;
            p_number mynumber=adms_number_new((yyvsp[-1]._lexval));
            int myunit=admse_1;
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            if(0) {}
            else if(!strcmp(mylexval2,"E")) myunit=admse_E;
            else if(!strcmp(mylexval2,"P")) myunit=admse_P;
            else if(!strcmp(mylexval2,"T")) myunit=admse_T;
            else if(!strcmp(mylexval2,"G")) myunit=admse_G;
            else if(!strcmp(mylexval2,"M")) myunit=admse_M;
            else if(!strcmp(mylexval2,"K")) myunit=admse_K;
            else if(!strcmp(mylexval2,"k")) myunit=admse_k;
            else if(!strcmp(mylexval2,"h")) myunit=admse_h;
            else if(!strcmp(mylexval2,"D")) myunit=admse_D;
            else if(!strcmp(mylexval2,"d")) myunit=admse_d;
            else if(!strcmp(mylexval2,"c")) myunit=admse_c;
            else if(!strcmp(mylexval2,"m")) myunit=admse_m;
            else if(!strcmp(mylexval2,"u")) myunit=admse_u;
            else if(!strcmp(mylexval2,"n")) myunit=admse_n;
            else if(!strcmp(mylexval2,"A")) myunit=admse_A;
            else if(!strcmp(mylexval2,"p")) myunit=admse_p;
            else if(!strcmp(mylexval2,"f")) myunit=admse_f;
            else if(!strcmp(mylexval2,"a")) myunit=admse_a;
            else
              adms_veriloga_message_fatal(" can not convert symbol to valid unit\n",(yyvsp[0]._lexval));
            mynumber->_scalingunit=myunit;
            mynumber->_cast=admse_i;
            Y((yyval._yaccval),(p_adms)mynumber);
          }
#line 4522 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2222 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)adms_number_new((yyvsp[0]._lexval)));
          }
#line 4531 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2227 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval2=((p_lexval)(yyvsp[0]._lexval))->_string;
            p_number mynumber=adms_number_new((yyvsp[-1]._lexval));
            int myunit=admse_1;
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            if(0) {}
            else if(!strcmp(mylexval2,"E")) myunit=admse_E;
            else if(!strcmp(mylexval2,"P")) myunit=admse_P;
            else if(!strcmp(mylexval2,"T")) myunit=admse_T;
            else if(!strcmp(mylexval2,"G")) myunit=admse_G;
            else if(!strcmp(mylexval2,"M")) myunit=admse_M;
            else if(!strcmp(mylexval2,"K")) myunit=admse_K;
            else if(!strcmp(mylexval2,"k")) myunit=admse_k;
            else if(!strcmp(mylexval2,"h")) myunit=admse_h;
            else if(!strcmp(mylexval2,"D")) myunit=admse_D;
            else if(!strcmp(mylexval2,"d")) myunit=admse_d;
            else if(!strcmp(mylexval2,"c")) myunit=admse_c;
            else if(!strcmp(mylexval2,"m")) myunit=admse_m;
            else if(!strcmp(mylexval2,"u")) myunit=admse_u;
            else if(!strcmp(mylexval2,"n")) myunit=admse_n;
            else if(!strcmp(mylexval2,"A")) myunit=admse_A;
            else if(!strcmp(mylexval2,"p")) myunit=admse_p;
            else if(!strcmp(mylexval2,"f")) myunit=admse_f;
            else if(!strcmp(mylexval2,"a")) myunit=admse_a;
            else
              adms_veriloga_message_fatal(" can not convert symbol to valid unit\n",(yyvsp[0]._lexval));
            mynumber->_scalingunit=myunit;
            Y((yyval._yaccval),(p_adms)mynumber);
          }
#line 4565 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 256:
#line 2257 "verilogaYacc.y" /* yacc.c:1646  */
    {
            adms_veriloga_message_fatal("%s: character are not handled\n",(yyvsp[0]._lexval));
          }
#line 4573 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 257:
#line 2261 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[0]._lexval))->_string;
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)adms_string_new(mylexval1));
          }
#line 4583 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2267 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[0]._lexval))->_string;
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            p_variable myvariable=variable_recursive_lookup_by_id(gBlockList->data,(yyvsp[0]._lexval));
            if(myvariable)
              Y((yyval._yaccval),(p_adms)myvariable);
            else if (!gAnalogfunction)
            {
                p_branchalias mybranchalias=adms_module_list_branchalias_lookup_by_id(gModule,gModule,mylexval1);
                p_node mynode=adms_module_list_node_lookup_by_id(gModule,gModule,mylexval1);
                if(mynode) Y((yyval._yaccval),(p_adms)mynode);
                if(mybranchalias)
                  Y((yyval._yaccval),(p_adms)mybranchalias->_branch);
            }
            if(!YY((yyval._yaccval)))
              adms_veriloga_message_fatal("identifier never declared\n",(yyvsp[0]._lexval));
          }
#line 4605 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2285 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_function myfunction=adms_function_new((yyvsp[0]._lexval),uid++);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            Y((yyval._yaccval),(p_adms)myfunction);
          }
#line 4615 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2291 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            p_variable myvariable=variable_recursive_lookup_by_id(gBlockList->data,(yyvsp[-3]._lexval));
            if(!myvariable)
               adms_veriloga_message_fatal("undefined array variable\n",(yyvsp[-3]._lexval));
            Y((yyval._yaccval),(p_adms)adms_array_new(myvariable,YY((yyvsp[-1]._yaccval))));
          }
#line 4627 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 261:
#line 2299 "verilogaYacc.y" /* yacc.c:1646  */
    {
            p_function myfunction=adms_function_new((yyvsp[-3]._lexval),uid++);
            p_slist myArgs=(p_slist)YY((yyvsp[-1]._yaccval));
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            adms_slist_inreverse(&myArgs);
            myfunction->_arguments=myArgs;
            Y((yyval._yaccval),(p_adms)myfunction);
          }
#line 4640 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2308 "verilogaYacc.y" /* yacc.c:1646  */
    {
            char* mylexval1=((p_lexval)(yyvsp[-3]._lexval))->_string;
            char* myfunctionname=mylexval1;
            p_slist myArgs=(p_slist)YY((yyvsp[-1]._yaccval));
            int narg=adms_slist_length(myArgs);
            p_probe myprobe=NULL;
            p_nature mynature=adms_admsmain_list_nature_lookup_by_id(root(),myfunctionname);
            (yyval._yaccval)=adms_yaccval_new("unknown source file");
            if(mynature && narg==1)
            {
              p_adms mychild0=(p_adms)adms_slist_nth_data(myArgs,0);
              if(mychild0->_datatypename==admse_node)
              {
                p_branch mybranch=adms_module_list_branch_prepend_by_id_once_or_ignore(gModule,gModule,(p_node)mychild0,gGND);
                myprobe=adms_module_list_probe_prepend_by_id_once_or_ignore(gModule,gModule,mybranch,mynature);
              }
              else if(mychild0->_datatypename==admse_branch)
              {
                myprobe=adms_module_list_probe_prepend_by_id_once_or_ignore(gModule,gModule,(p_branch)mychild0,mynature);
              }
              else
                adms_veriloga_message_fatal("bad argument (expecting node or branch)\n",(yyvsp[-3]._lexval));
            }
            else if(mynature && narg==2)
            {
              p_adms mychild0=(p_adms)adms_slist_nth_data(myArgs,0);
              p_adms mychild1=(p_adms)adms_slist_nth_data(myArgs,1);
              p_branch mybranch;
              if(mychild0->_datatypename!=admse_node)
                adms_veriloga_message_fatal("second argument of probe is not a node\n",(yyvsp[-3]._lexval));
              if(mychild1->_datatypename!=admse_node)
                adms_veriloga_message_fatal("first argument of probe is not a node\n",(yyvsp[-3]._lexval));
              mybranch=adms_module_list_branch_prepend_by_id_once_or_ignore(gModule,gModule,(p_node)mychild1,((p_node)mychild0));
              myprobe=adms_module_list_probe_prepend_by_id_once_or_ignore(gModule,gModule,mybranch,mynature);
            }
            if(myprobe)
              Y((yyval._yaccval),(p_adms)myprobe);
            else
            {
              p_slist l;
              p_function myfunction=adms_function_new((yyvsp[-3]._lexval),uid++);
              for(l=gModule->_analogfunction;l&&(myfunction->_definition==NULL);l=l->next)
              {
                p_analogfunction myanalogfunction=(p_analogfunction)l->data;
                if(!strcmp((yyvsp[-3]._lexval)->_string,myanalogfunction->_lexval->_string))
                  myfunction->_definition=myanalogfunction;
              }
              myfunction->_arguments=adms_slist_reverse(myArgs);
              Y((yyval._yaccval),(p_adms)myfunction);
            }
          }
#line 4696 "verilogaYacc.c" /* yacc.c:1646  */
    break;

  case 263:
#line 2360 "verilogaYacc.y" /* yacc.c:1646  */
    {
            (yyval._yaccval)=(yyvsp[-1]._yaccval);
          }
#line 4704 "verilogaYacc.c" /* yacc.c:1646  */
    break;


#line 4708 "verilogaYacc.c" /* yacc.c:1646  */
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
#line 2364 "verilogaYacc.y" /* yacc.c:1906  */

void adms_veriloga_setint_yydebug(const int val)
{
  yydebug=val;
}
