
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "bison.y"

#include "semantic.h"
#include "types.h"
#include "fake.h"

#define YYPARSE_PARAM   parm
#define YYLEX_PARAM     parm

#define yyerror(msg) my_yyerror(msg, YYPARSE_PARAM)

int yylex(YYSTYPE *lvalp, void * parm)
{
	myflexer *l = (myflexer *)parm;
	int ret = l->yylex(lvalp);
	FKLOG("[bison]: bison get token[%s] str[%s]", fkget_token_name(ret).c_str(), lvalp->str.c_str());
	return ret;
}

int my_yyerror(const char *s, void * parm)
{
    myflexer *l = (myflexer *)parm;
    l->LexerError(s);
    return 1;
}

#define NEWTYPE(p, x) \
	x* p = (x*)(((myflexer *)parm)->malloc(sizeof(x), #x)); \
	new (p) x(); \
	p->fk = ((myflexer *)parm)->getfake(); \
	p->lno = ((myflexer *)parm)->lineno(); \
	FKLOG("[bison]: bison new type %s %p line %d", #x, p, p->lno);
	


/* Line 189 of yacc.c  */
#line 108 "bison.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VAR_BEGIN = 258,
     RETURN = 259,
     BREAK = 260,
     FUNC = 261,
     WHILE = 262,
     TRUE = 263,
     FALSE = 264,
     IF = 265,
     THEN = 266,
     ELSE = 267,
     END = 268,
     STRING_DEFINITION = 269,
     IDENTIFIER = 270,
     NUMBER = 271,
     SINGLE_LINE_COMMENT = 272,
     DIVIDE_MOD = 273,
     ARG_SPLITTER = 274,
     PLUS = 275,
     MINUS = 276,
     DIVIDE = 277,
     MULTIPLY = 278,
     ASSIGN = 279,
     MORE = 280,
     LESS = 281,
     MORE_OR_EQUAL = 282,
     LESS_OR_EQUAL = 283,
     EQUAL = 284,
     NOT_EQUAL = 285,
     OPEN_BRACKET = 286,
     CLOSE_BRACKET = 287,
     AND = 288,
     OR = 289,
     FKFLOAT = 290,
     PLUS_ASSIGN = 291,
     MINUS_ASSIGN = 292,
     DIVIDE_ASSIGN = 293,
     MULTIPLY_ASSIGN = 294,
     DIVIDE_MOD_ASSIGN = 295,
     COLON = 296,
     FOR = 297,
     INC = 298,
     FAKE = 299,
     FKUUID = 300,
     OPEN_SQUARE_BRACKET = 301,
     CLOSE_SQUARE_BRACKET = 302,
     FCONST = 303,
     PACKAGE = 304,
     INCLUDE = 305,
     IDENTIFIER_DOT = 306,
     IDENTIFIER_POINTER = 307,
     STRUCT = 308
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 202 "bison.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   703

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNRULES -- Number of states.  */
#define YYNSTATES  197

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    10,    13,    16,    17,    19,    22,
      25,    26,    28,    31,    36,    37,    40,    42,    43,    45,
      48,    53,    54,    56,    59,    67,    74,    75,    79,    81,
      83,    88,    93,   100,   101,   105,   107,   109,   112,   114,
     116,   118,   120,   122,   124,   126,   128,   130,   132,   134,
     137,   147,   156,   162,   167,   174,   180,   181,   184,   186,
     190,   194,   198,   202,   206,   210,   214,   218,   222,   224,
     226,   228,   230,   232,   235,   239,   241,   243,   245,   247,
     251,   255,   259,   261,   263,   265,   267,   271,   275,   279,
     283,   287,   290,   293,   295,   297,   302,   304,   308,   310,
     312,   316,   320,   324,   328,   332,   336,   338,   340,   342,
     344,   346,   348,   350,   352,   354,   356
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    56,    57,    59,    62,    64,    -1,    -1,
      49,    15,    -1,    49,    51,    -1,    -1,    58,    -1,    57,
      58,    -1,    50,    14,    -1,    -1,    60,    -1,    59,    60,
      -1,    53,    15,    61,    13,    -1,    -1,    61,    15,    -1,
      15,    -1,    -1,    63,    -1,    62,    63,    -1,    48,    15,
      24,    93,    -1,    -1,    65,    -1,    64,    65,    -1,     6,
      15,    31,    66,    32,    71,    13,    -1,     6,    15,    31,
      66,    32,    13,    -1,    -1,    66,    19,    67,    -1,    67,
      -1,    15,    -1,    15,    31,    69,    32,    -1,    51,    31,
      69,    32,    -1,    89,    41,    15,    31,    69,    32,    -1,
      -1,    69,    19,    70,    -1,    70,    -1,    92,    -1,    71,
      72,    -1,    72,    -1,    75,    -1,    76,    -1,    80,    -1,
      83,    -1,    84,    -1,    94,    -1,    90,    -1,    87,    -1,
      74,    -1,    73,    -1,    44,    68,    -1,    42,    71,    19,
      78,    19,    71,    11,    71,    13,    -1,    42,    71,    19,
      78,    19,    71,    11,    13,    -1,     7,    78,    11,    71,
      13,    -1,     7,    78,    11,    13,    -1,    10,    78,    11,
      71,    77,    13,    -1,    10,    78,    11,    77,    13,    -1,
      -1,    12,    71,    -1,    12,    -1,    31,    78,    32,    -1,
      78,    33,    78,    -1,    78,    34,    78,    -1,    79,    26,
      79,    -1,    79,    25,    79,    -1,    79,    29,    79,    -1,
      79,    27,    79,    -1,    79,    28,    79,    -1,    79,    30,
      79,    -1,     8,    -1,     9,    -1,    93,    -1,    89,    -1,
      90,    -1,     4,    81,    -1,    81,    19,    82,    -1,    82,
      -1,    93,    -1,    89,    -1,    90,    -1,    88,    24,    86,
      -1,    85,    24,    68,    -1,    85,    19,    88,    -1,    88,
      -1,    93,    -1,    89,    -1,    90,    -1,    89,    36,    86,
      -1,    89,    37,    86,    -1,    89,    38,    86,    -1,    89,
      39,    86,    -1,    89,    40,    86,    -1,    89,    43,    -1,
       3,    15,    -1,    89,    -1,    15,    -1,    15,    46,    92,
      47,    -1,    52,    -1,    31,    90,    32,    -1,    68,    -1,
      91,    -1,    31,    91,    32,    -1,    92,    20,    92,    -1,
      92,    21,    92,    -1,    92,    23,    92,    -1,    92,    22,
      92,    -1,    92,    18,    92,    -1,    91,    -1,    93,    -1,
      68,    -1,    89,    -1,     8,    -1,     9,    -1,    16,    -1,
      45,    -1,    14,    -1,    35,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   147,   147,   156,   159,   166,   175,   178,   180,   184,
     194,   197,   199,   203,   214,   218,   227,   238,   241,   243,
     247,   257,   260,   262,   268,   279,   293,   297,   306,   316,
     326,   336,   346,   365,   369,   378,   388,   398,   407,   417,
     423,   429,   435,   441,   447,   453,   459,   465,   471,   479,
     489,   500,   513,   522,   533,   543,   556,   560,   568,   578,
     584,   594,   604,   614,   624,   634,   644,   654,   664,   674,
     686,   692,   698,   706,   716,   725,   734,   740,   746,   754,
     765,   776,   785,   794,   800,   806,   814,   824,   834,   844,
     854,   864,   880,   888,   896,   904,   913,   923,   929,   935,
     943,   949,   959,   969,   979,   989,  1001,  1007,  1013,  1019,
    1027,  1036,  1045,  1054,  1063,  1072,  1083
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR_BEGIN", "RETURN", "BREAK", "FUNC",
  "WHILE", "TRUE", "FALSE", "IF", "THEN", "ELSE", "END",
  "STRING_DEFINITION", "IDENTIFIER", "NUMBER", "SINGLE_LINE_COMMENT",
  "DIVIDE_MOD", "ARG_SPLITTER", "PLUS", "MINUS", "DIVIDE", "MULTIPLY",
  "ASSIGN", "MORE", "LESS", "MORE_OR_EQUAL", "LESS_OR_EQUAL", "EQUAL",
  "NOT_EQUAL", "OPEN_BRACKET", "CLOSE_BRACKET", "AND", "OR", "FKFLOAT",
  "PLUS_ASSIGN", "MINUS_ASSIGN", "DIVIDE_ASSIGN", "MULTIPLY_ASSIGN",
  "DIVIDE_MOD_ASSIGN", "COLON", "FOR", "INC", "FAKE", "FKUUID",
  "OPEN_SQUARE_BRACKET", "CLOSE_SQUARE_BRACKET", "FCONST", "PACKAGE",
  "INCLUDE", "IDENTIFIER_DOT", "IDENTIFIER_POINTER", "STRUCT", "$accept",
  "program", "package_head", "include_head", "include_define",
  "struct_head", "struct_define", "struct_mem_declaration", "const_head",
  "const_define", "body", "function_declaration",
  "function_declaration_arguments", "arg", "function_call",
  "function_call_arguments", "arg_expr", "block", "stmt", "fake_call_stmt",
  "for_stmt", "while_stmt", "if_stmt", "else_stmt", "cmp", "cmp_value",
  "return_stmt", "return_value_list", "return_value", "assign_stmt",
  "multi_assign_stmt", "var_list", "assign_value", "math_assign_stmt",
  "var", "variable", "expr", "math_expr", "expr_value", "explicit_value",
  "break", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    57,    57,    57,    58,
      59,    59,    59,    60,    61,    61,    61,    62,    62,    62,
      63,    64,    64,    64,    65,    65,    66,    66,    66,    67,
      68,    68,    68,    69,    69,    69,    70,    71,    71,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    73,
      74,    74,    75,    75,    76,    76,    77,    77,    77,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      79,    79,    79,    80,    81,    81,    82,    82,    82,    83,
      84,    85,    85,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    88,    88,    89,    89,    89,    90,    90,    90,
      91,    91,    91,    91,    91,    91,    92,    92,    92,    92,
      93,    93,    93,    93,    93,    93,    94
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     2,     2,     0,     1,     2,     2,
       0,     1,     2,     4,     0,     2,     1,     0,     1,     2,
       4,     0,     1,     2,     7,     6,     0,     3,     1,     1,
       4,     4,     6,     0,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       9,     8,     5,     4,     6,     5,     0,     2,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     2,     3,     1,     1,     1,     1,     3,
       3,     3,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     2,     2,     1,     1,     4,     1,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     6,     4,     5,     1,     0,    10,     7,
       9,     0,     8,    17,    11,    14,     0,    12,    21,    18,
      16,     0,     0,     0,    19,     2,    22,    13,    15,     0,
       0,    23,   110,   111,   114,   112,   115,   113,    20,    26,
      29,     0,    28,     0,     0,    27,     0,     0,   116,     0,
       0,    25,    94,     0,     0,     0,     0,    96,    98,     0,
      38,    48,    47,    39,    40,    41,    42,    43,     0,    46,
      82,   109,    45,    99,     0,   107,    44,    92,    73,    75,
      77,    78,    76,   110,   111,     0,     0,     0,    71,    72,
      70,     0,    33,     0,   109,     0,    99,     0,    49,     0,
      33,    24,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,     0,   108,     0,    35,   106,    36,     0,    97,   100,
       0,     0,    94,    81,    93,    80,    79,    84,    85,    83,
      86,    87,    88,    89,    90,     0,   105,   101,   102,   104,
     103,    74,    59,    53,     0,    60,    61,    63,    62,    65,
      66,    64,    67,    58,    56,     0,   106,     0,    30,    95,
       0,    31,    33,    52,    57,     0,    55,    34,     0,     0,
      54,     0,    32,     0,    51,     0,    50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,    13,    14,    21,    18,    19,
      25,    26,    41,    42,    58,   133,   134,    59,    60,    61,
      62,    63,    64,   175,    86,    87,    65,    78,    79,    66,
      67,    68,   146,    69,    70,    71,    72,    73,    74,    75,
      76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -99
static const yytype_int16 yypact[] =
{
     -27,    -8,    38,    27,   -99,   -99,   -99,    72,    59,   -99,
     -99,    37,   -99,   -45,   -99,    80,   117,   -99,     3,   -99,
     -99,    13,    86,   120,   -99,   125,   -99,   -99,   -99,    -3,
     109,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   126,
     -99,    -2,   -99,   126,   279,   -99,   131,   633,   -99,   642,
     642,   -99,   -21,   633,   601,     4,   121,   -99,   278,   329,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,    42,   -99,
     133,   183,   -99,   284,   295,   -99,   -99,   -99,   136,   -99,
     138,   -99,   365,   218,   221,   642,    26,   216,   138,   -99,
     365,    30,   651,   651,   122,   130,   193,   347,   -99,   122,
     651,   -99,   -99,     1,     4,   633,   633,   633,   633,   633,
     633,   154,   -99,   651,   651,   651,   651,   651,   633,   116,
     130,   397,   642,   642,   633,   633,   633,   633,   633,   633,
     415,   651,   -99,     8,   -99,   -99,   295,   107,   -99,   -99,
     642,    66,   124,   -99,   -99,   -99,   -99,   138,   -99,   365,
     -99,   -99,   -99,   -99,   -99,   140,   295,   295,   304,    11,
      31,   -99,   -99,   -99,   465,    69,    69,   -99,   -99,   -99,
     -99,   -99,   -99,   601,   415,   159,   149,   651,   -99,   -99,
       2,   -99,   651,   -99,   601,   170,   -99,   -99,   601,    82,
     -99,   483,   -99,   533,   -99,   583,   -99
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -99,   -99,   177,   -99,   174,   -99,   -99,   181,
     -99,   163,   -99,   160,     7,   -98,    28,   -54,   -58,   -99,
     -99,   -99,   -99,    32,    95,   139,   -99,   -99,    91,   -99,
     -99,   -99,   287,   -99,   127,   -35,   151,    51,   -69,    68,
     -99
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -110
static const yytype_int16 yytable[] =
{
      97,   102,   141,    16,    46,    32,    33,     4,    11,    23,
      92,    34,    80,    35,    88,    88,   142,    43,    94,    52,
      99,   188,     1,   136,   137,    93,    27,   177,    28,   113,
      44,   136,    36,   116,   117,   122,   123,   121,     6,   102,
     178,   130,    37,     5,   156,   157,   158,   159,   160,   113,
      88,    16,    15,    57,   117,    56,    57,    94,    94,   122,
     123,   103,    98,   122,   123,    94,   104,   164,   144,    99,
     147,   147,   147,   147,   147,   147,   174,     7,    94,    94,
      94,    94,    94,    80,   189,   177,    10,    88,    88,    88,
      88,    88,    88,    88,    88,    20,    94,    38,   181,   132,
     132,   177,   122,   123,    96,    88,   102,   132,   136,     7,
      29,   145,    11,   136,   192,    82,   102,    90,    90,   184,
     132,   132,   132,   132,   132,   113,   102,   114,   115,   116,
     117,    23,    22,   102,   191,    30,    96,   102,   132,   195,
      39,    40,    94,   135,   135,    91,    77,    94,   162,   122,
     123,   135,   100,    90,   179,   118,  -109,   105,  -109,  -109,
    -109,  -109,   138,   111,   135,   135,   135,   135,   135,   155,
      93,   182,   186,   149,   149,   149,   149,   149,   149,   111,
     119,   139,   176,   190,   132,    12,    82,    17,    31,   132,
      90,    90,    90,    90,    90,    90,    90,    90,    81,    24,
      89,    89,   -93,    45,    95,   187,   185,   -93,    90,   161,
       0,  -106,     0,  -106,  -106,  -106,  -106,   165,   166,   106,
     107,   108,   109,   110,   111,   139,   112,     0,   135,   -68,
     143,     0,   -69,   135,     0,   180,   120,   -68,     0,     0,
     -69,   124,   125,   126,   127,   128,   129,     0,     0,     0,
     -68,   -68,   -68,   -69,   -69,   -69,   148,   148,   148,   148,
     148,   148,     0,   167,   168,   169,   170,   171,   172,    81,
       0,     0,     0,    89,    89,    89,    89,    89,    89,    89,
      89,     0,    46,    47,    48,     0,    49,    32,    33,    50,
       0,    89,    51,    34,    52,    35,  -108,     0,  -108,  -108,
    -108,  -108,  -106,     0,  -106,  -106,  -106,  -106,     0,     0,
      53,     0,     0,   113,    36,   114,   115,   116,   117,     0,
       0,    54,   113,    55,    37,   115,   116,   117,     0,     0,
      56,    57,    46,    47,    48,     0,    49,    32,    33,    50,
       0,     0,   101,    34,    52,    35,     0,     0,     0,     0,
      46,    47,    48,     0,    49,    32,    33,    50,     0,     0,
      53,    34,    52,    35,    36,     0,   140,     0,     0,     0,
       0,    54,     0,    55,    37,     0,     0,     0,    53,     0,
      56,    57,    36,  -107,     0,  -107,  -107,  -107,  -107,    54,
       0,    55,    37,   150,   151,   152,   153,   154,    56,    57,
      46,    47,    48,     0,    49,    32,    33,    50,     0,     0,
     163,    34,    52,    35,     0,     0,     0,     0,    46,    47,
      48,     0,    49,    32,    33,    50,     0,   173,    53,    34,
      52,    35,    36,     0,     0,     0,     0,     0,     0,    54,
       0,    55,    37,     0,     0,     0,    53,     0,    56,    57,
      36,     0,     0,     0,     0,     0,     0,    54,     0,    55,
      37,     0,     0,     0,     0,     0,    56,    57,    46,    47,
      48,     0,    49,    32,    33,    50,     0,     0,   183,    34,
      52,    35,     0,     0,     0,     0,    46,    47,    48,     0,
      49,    32,    33,    50,   193,     0,    53,    34,    52,    35,
      36,     0,     0,     0,     0,     0,     0,    54,     0,    55,
      37,     0,     0,     0,    53,     0,    56,    57,    36,     0,
       0,     0,     0,     0,     0,    54,     0,    55,    37,     0,
       0,     0,     0,     0,    56,    57,    46,    47,    48,     0,
      49,    32,    33,    50,     0,     0,   194,    34,    52,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,    54,     0,    55,    37,     0,
       0,     0,     0,     0,    56,    57,    46,    47,    48,     0,
      49,    32,    33,    50,     0,     0,   196,    34,    52,    35,
       0,     0,     0,     0,    46,    47,    48,     0,    49,    32,
      33,    50,     0,     0,    53,    34,    52,    35,    36,     0,
       0,     0,     0,     0,     0,    54,     0,    55,    37,     0,
       0,     0,    53,     0,    56,    57,    36,     0,     0,     0,
       0,    32,    33,    54,     0,    55,    37,    34,    52,    35,
      83,    84,    56,    57,     0,     0,    34,    52,    35,    32,
      33,     0,     0,     0,    53,    34,    52,    35,    36,     0,
       0,     0,     0,    85,     0,     0,     0,    36,    37,     0,
       0,     0,   131,     0,    56,    57,    36,    37,     0,     0,
       0,     0,     0,    56,    57,     0,    37,     0,     0,     0,
       0,     0,    56,    57
};

static const yytype_int16 yycheck[] =
{
      54,    59,   100,    48,     3,     8,     9,    15,    53,     6,
      31,    14,    47,    16,    49,    50,    15,    19,    53,    15,
      55,    19,    49,    92,    93,    46,    13,    19,    15,    18,
      32,   100,    35,    22,    23,    33,    34,    11,     0,    97,
      32,    11,    45,    51,   113,   114,   115,   116,   117,    18,
      85,    48,    15,    52,    23,    51,    52,    92,    93,    33,
      34,    19,    55,    33,    34,   100,    24,   121,   103,   104,
     105,   106,   107,   108,   109,   110,   130,    50,   113,   114,
     115,   116,   117,   118,   182,    19,    14,   122,   123,   124,
     125,   126,   127,   128,   129,    15,   131,    29,    32,    92,
      93,    19,    33,    34,    53,   140,   164,   100,   177,    50,
      24,   104,    53,   182,    32,    47,   174,    49,    50,   173,
     113,   114,   115,   116,   117,    18,   184,    20,    21,    22,
      23,     6,    15,   191,   188,    15,    85,   195,   131,   193,
      31,    15,   177,    92,    93,    50,    15,   182,    32,    33,
      34,   100,    31,    85,    47,    19,    18,    24,    20,    21,
      22,    23,    32,    41,   113,   114,   115,   116,   117,    15,
      46,    31,    13,   105,   106,   107,   108,   109,   110,    41,
      85,    32,   131,    13,   177,     8,   118,    13,    25,   182,
     122,   123,   124,   125,   126,   127,   128,   129,    47,    18,
      49,    50,    19,    43,    53,   177,   174,    24,   140,   118,
      -1,    18,    -1,    20,    21,    22,    23,   122,   123,    36,
      37,    38,    39,    40,    41,    32,    43,    -1,   177,    11,
     103,    -1,    11,   182,    -1,   140,    85,    19,    -1,    -1,
      19,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      32,    33,    34,    32,    33,    34,   105,   106,   107,   108,
     109,   110,    -1,   124,   125,   126,   127,   128,   129,   118,
      -1,    -1,    -1,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,   140,    13,    14,    15,    16,    18,    -1,    20,    21,
      22,    23,    18,    -1,    20,    21,    22,    23,    -1,    -1,
      31,    -1,    -1,    18,    35,    20,    21,    22,    23,    -1,
      -1,    42,    18,    44,    45,    21,    22,    23,    -1,    -1,
      51,    52,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      31,    14,    15,    16,    35,    -1,    19,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    -1,    -1,    -1,    31,    -1,
      51,    52,    35,    18,    -1,    20,    21,    22,    23,    42,
      -1,    44,    45,   106,   107,   108,   109,   110,    51,    52,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    12,    31,    14,
      15,    16,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    45,    -1,    -1,    -1,    31,    -1,    51,    52,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    51,    52,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    31,    14,    15,    16,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      45,    -1,    -1,    -1,    31,    -1,    51,    52,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    52,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    52,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    31,    14,    15,    16,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,    -1,
      -1,    -1,    31,    -1,    51,    52,    35,    -1,    -1,    -1,
      -1,     8,     9,    42,    -1,    44,    45,    14,    15,    16,
       8,     9,    51,    52,    -1,    -1,    14,    15,    16,     8,
       9,    -1,    -1,    -1,    31,    14,    15,    16,    35,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    45,    -1,
      -1,    -1,    31,    -1,    51,    52,    35,    45,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,    55,    56,    15,    51,     0,    50,    57,    58,
      14,    53,    58,    59,    60,    15,    48,    60,    62,    63,
      15,    61,    15,     6,    63,    64,    65,    13,    15,    24,
      15,    65,     8,     9,    14,    16,    35,    45,    93,    31,
      15,    66,    67,    19,    32,    67,     3,     4,     5,     7,
      10,    13,    15,    31,    42,    44,    51,    52,    68,    71,
      72,    73,    74,    75,    76,    80,    83,    84,    85,    87,
      88,    89,    90,    91,    92,    93,    94,    15,    81,    82,
      89,    90,    93,     8,     9,    31,    78,    79,    89,    90,
      93,    78,    31,    46,    89,    90,    91,    71,    68,    89,
      31,    13,    72,    19,    24,    24,    36,    37,    38,    39,
      40,    41,    43,    18,    20,    21,    22,    23,    19,    78,
      90,    11,    33,    34,    25,    26,    27,    28,    29,    30,
      11,    31,    68,    69,    70,    91,    92,    92,    32,    32,
      19,    69,    15,    88,    89,    68,    86,    89,    90,    93,
      86,    86,    86,    86,    86,    15,    92,    92,    92,    92,
      92,    82,    32,    13,    71,    78,    78,    79,    79,    79,
      79,    79,    79,    12,    71,    77,    91,    19,    32,    47,
      78,    32,    31,    13,    71,    77,    13,    70,    19,    69,
      13,    71,    32,    11,    13,    71,    13
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 156 "bison.y"
    {
	;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 160 "bison.y"
    {
		FKLOG("[bison]: package %s", (yyvsp[(2) - (2)].str).c_str());
		myflexer *l = (myflexer *)parm;
		l->set_package((yyvsp[(2) - (2)].str).c_str());
	;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 167 "bison.y"
    {
		FKLOG("[bison]: package %s", (yyvsp[(2) - (2)].str).c_str());
		myflexer *l = (myflexer *)parm;
		l->set_package((yyvsp[(2) - (2)].str).c_str());
	;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 175 "bison.y"
    {
	;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 185 "bison.y"
    {
		FKLOG("[bison]: include %s", (yyvsp[(2) - (2)].str).c_str());
		myflexer *l = (myflexer *)parm;
		l->add_include((yyvsp[(2) - (2)].str).c_str());
	;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 194 "bison.y"
    {
	;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 204 "bison.y"
    {
		FKLOG("[bison]: struct_define %s", (yyvsp[(2) - (4)].str).c_str());
		myflexer *l = (myflexer *)parm;
		struct_desc_memlist_node * p = dynamic_cast<struct_desc_memlist_node*>((yyvsp[(3) - (4)].syntree));
		l->add_struct_desc((yyvsp[(2) - (4)].str).c_str(), p);
	;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 214 "bison.y"
    {
		(yyval.syntree) = 0;
	;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 219 "bison.y"
    {
		FKLOG("[bison]: struct_mem_declaration <- IDENTIFIER struct_mem_declaration");
		assert((yyvsp[(1) - (2)].syntree)->gettype() == est_struct_memlist);
		struct_desc_memlist_node * p = dynamic_cast<struct_desc_memlist_node*>((yyvsp[(1) - (2)].syntree));
		p->add_arg((yyvsp[(2) - (2)].str));
		(yyval.syntree) = p;
	;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 228 "bison.y"
    {
		FKLOG("[bison]: struct_mem_declaration <- IDENTIFIER");
		NEWTYPE(p, struct_desc_memlist_node);
		p->add_arg((yyvsp[(1) - (1)].str));
		(yyval.syntree) = p;
	;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 238 "bison.y"
    {
	;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 248 "bison.y"
    {
		FKLOG("[bison]: const_define %s", (yyvsp[(2) - (4)].str).c_str());
		myflexer *l = (myflexer *)parm;
		l->add_const_desc((yyvsp[(2) - (4)].str).c_str(), (yyvsp[(4) - (4)].syntree));
	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 257 "bison.y"
    {
	;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 269 "bison.y"
    {
		FKLOG("[bison]: function_declaration <- block %s", (yyvsp[(2) - (7)].str).c_str());
		NEWTYPE(p, func_desc_node);
		p->funcname = (yyvsp[(2) - (7)].str);
		p->arglist = dynamic_cast<func_desc_arglist_node*>((yyvsp[(4) - (7)].syntree));
		p->block = dynamic_cast<block_node*>((yyvsp[(6) - (7)].syntree));
		myflexer *l = (myflexer *)parm;
		l->add_func_desc(p);
	;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 280 "bison.y"
    {
		FKLOG("[bison]: function_declaration <- empty %s", (yyvsp[(2) - (6)].str).c_str());
		NEWTYPE(p, func_desc_node);
		p->funcname = (yyvsp[(2) - (6)].str);
		p->arglist = 0;
		p->block = 0;
		myflexer *l = (myflexer *)parm;
		l->add_func_desc(p);
	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 293 "bison.y"
    {
		(yyval.syntree) = 0;
	;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 298 "bison.y"
    {
		FKLOG("[bison]: function_declaration_arguments <- arg function_declaration_arguments");
		assert((yyvsp[(1) - (3)].syntree)->gettype() == est_arglist);
		func_desc_arglist_node * p = dynamic_cast<func_desc_arglist_node*>((yyvsp[(1) - (3)].syntree));
		p->add_arg((yyvsp[(3) - (3)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 307 "bison.y"
    {
		FKLOG("[bison]: function_declaration_arguments <- arg");
		NEWTYPE(p, func_desc_arglist_node);
		p->add_arg((yyvsp[(1) - (1)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 317 "bison.y"
    {
		FKLOG("[bison]: arg <- IDENTIFIER %s", (yyvsp[(1) - (1)].str).c_str());
		NEWTYPE(p, identifier_node);
		p->str = (yyvsp[(1) - (1)].str);
		(yyval.syntree) = p;
	;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 327 "bison.y"
    {
		FKLOG("[bison]: function_call <- function_call_arguments %s", (yyvsp[(1) - (4)].str).c_str());
		NEWTYPE(p, function_call_node);
		p->fuc = (yyvsp[(1) - (4)].str);
		p->arglist = dynamic_cast<function_call_arglist_node*>((yyvsp[(3) - (4)].syntree));
		p->fakecall = false;
		(yyval.syntree) = p;
	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 337 "bison.y"
    {
		FKLOG("[bison]: function_call <- function_call_arguments %s", (yyvsp[(1) - (4)].str).c_str());
		NEWTYPE(p, function_call_node);
		p->fuc = (yyvsp[(1) - (4)].str);
		p->arglist = dynamic_cast<function_call_arglist_node*>((yyvsp[(3) - (4)].syntree));
		p->fakecall = false;
		(yyval.syntree) = p;
	;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 347 "bison.y"
    {
		FKLOG("[bison]: function_call <- mem function_call_arguments %s", (yyvsp[(3) - (6)].str).c_str());
		NEWTYPE(p, function_call_node);
		p->fuc = (yyvsp[(3) - (6)].str);
		p->arglist = dynamic_cast<function_call_arglist_node*>((yyvsp[(5) - (6)].syntree));
		if (p->arglist == 0)
		{
			NEWTYPE(pa, function_call_arglist_node);
			p->arglist = pa;
		}
		p->arglist->add_arg((yyvsp[(1) - (6)].syntree));
		p->fakecall = false;
		(yyval.syntree) = p;
	;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 365 "bison.y"
    {
		(yyval.syntree) = 0;
	;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 370 "bison.y"
    {
		FKLOG("[bison]: function_call_arguments <- arg_expr function_call_arguments");
		assert((yyvsp[(1) - (3)].syntree)->gettype() == est_call_arglist);
		function_call_arglist_node * p = dynamic_cast<function_call_arglist_node*>((yyvsp[(1) - (3)].syntree));
		p->add_arg((yyvsp[(3) - (3)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 379 "bison.y"
    {
		FKLOG("[bison]: function_call_arguments <- arg_expr");
		NEWTYPE(p, function_call_arglist_node);
		p->add_arg((yyvsp[(1) - (1)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 389 "bison.y"
    {
		FKLOG("[bison]: arg_expr <- expr_value");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 399 "bison.y"
    {
		FKLOG("[bison]: block <- block stmt");
		assert((yyvsp[(1) - (2)].syntree)->gettype() == est_block);
		block_node * p = dynamic_cast<block_node*>((yyvsp[(1) - (2)].syntree));
		p->add_stmt((yyvsp[(2) - (2)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 408 "bison.y"
    {
		FKLOG("[bison]: block <- stmt");
		NEWTYPE(p, block_node);
		p->add_stmt((yyvsp[(1) - (1)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 418 "bison.y"
    {
		FKLOG("[bison]: stmt <- while_stmt");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 424 "bison.y"
    {
		FKLOG("[bison]: stmt <- if_stmt");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 430 "bison.y"
    {
		FKLOG("[bison]: stmt <- return_stmt");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 436 "bison.y"
    {
		FKLOG("[bison]: stmt <- assign_stmt");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 442 "bison.y"
    {
		FKLOG("[bison]: stmt <- multi_assign_stmt");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 448 "bison.y"
    {
		FKLOG("[bison]: stmt <- break");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 454 "bison.y"
    {
		FKLOG("[bison]: stmt <- expr");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 460 "bison.y"
    {
		FKLOG("[bison]: stmt <- math_assign_stmt");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 466 "bison.y"
    {
		FKLOG("[bison]: stmt <- for_stmt");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 472 "bison.y"
    {
		FKLOG("[bison]: stmt <- fake_call_stmt");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 480 "bison.y"
    {
		FKLOG("[bison]: fake_call_stmt <- fake function_call");
		function_call_node * p = dynamic_cast<function_call_node*>((yyvsp[(2) - (2)].syntree));
		p->fakecall = true;
		(yyval.syntree) = p;
	;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 490 "bison.y"
    {
		FKLOG("[bison]: for_stmt <- block cmp block");
		NEWTYPE(p, for_stmt);
		p->cmp = dynamic_cast<cmp_stmt*>((yyvsp[(4) - (9)].syntree));
		p->beginblock = dynamic_cast<block_node*>((yyvsp[(2) - (9)].syntree));
		p->endblock = dynamic_cast<block_node*>((yyvsp[(6) - (9)].syntree));
		p->block = dynamic_cast<block_node*>((yyvsp[(8) - (9)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 501 "bison.y"
    {
		FKLOG("[bison]: for_stmt <- block cmp block");
		NEWTYPE(p, for_stmt);
		p->cmp = dynamic_cast<cmp_stmt*>((yyvsp[(4) - (8)].syntree));
		p->beginblock = dynamic_cast<block_node*>((yyvsp[(2) - (8)].syntree));
		p->endblock = dynamic_cast<block_node*>((yyvsp[(6) - (8)].syntree));
		p->block = 0;
		(yyval.syntree) = p;
	;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 514 "bison.y"
    {
		FKLOG("[bison]: while_stmt <- cmp block");
		NEWTYPE(p, while_stmt);
		p->cmp = dynamic_cast<cmp_stmt*>((yyvsp[(2) - (5)].syntree));
		p->block = dynamic_cast<block_node*>((yyvsp[(4) - (5)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 523 "bison.y"
    {
		FKLOG("[bison]: while_stmt <- cmp");
		NEWTYPE(p, while_stmt);
		p->cmp = dynamic_cast<cmp_stmt*>((yyvsp[(2) - (4)].syntree));
		p->block = 0;
		(yyval.syntree) = p;
	;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 534 "bison.y"
    {
		FKLOG("[bison]: if_stmt <- cmp block");
		NEWTYPE(p, if_stmt);
		p->cmp = dynamic_cast<cmp_stmt*>((yyvsp[(2) - (6)].syntree));
		p->block = dynamic_cast<block_node*>((yyvsp[(4) - (6)].syntree));
		p->elses = dynamic_cast<else_stmt*>((yyvsp[(5) - (6)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 544 "bison.y"
    {
		FKLOG("[bison]: if_stmt <- cmp");
		NEWTYPE(p, if_stmt);
		p->cmp = dynamic_cast<cmp_stmt*>((yyvsp[(2) - (5)].syntree));
		p->block = 0;
		p->elses = dynamic_cast<else_stmt*>((yyvsp[(4) - (5)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 556 "bison.y"
    {
		(yyval.syntree) = 0;
	;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 561 "bison.y"
    {
		FKLOG("[bison]: else_stmt <- block");
		NEWTYPE(p, else_stmt);
		p->block = dynamic_cast<block_node*>((yyvsp[(2) - (2)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 569 "bison.y"
    {
		FKLOG("[bison]: else_stmt <- empty");
		NEWTYPE(p, else_stmt);
		p->block = 0;
		(yyval.syntree) = p;
	;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 579 "bison.y"
    {
		FKLOG("[bison]: cmp <- ( cmp )");
		(yyval.syntree) = (yyvsp[(2) - (3)].syntree);
	;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 585 "bison.y"
    {
		FKLOG("[bison]: cmp <- cmp AND cmp");
		NEWTYPE(p, cmp_stmt);
		p->cmp = "&&";
		p->left = (yyvsp[(1) - (3)].syntree);
		p->right = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 595 "bison.y"
    {
		FKLOG("[bison]: cmp <- cmp OR cmp");
		NEWTYPE(p, cmp_stmt);
		p->cmp = "||";
		p->left = (yyvsp[(1) - (3)].syntree);
		p->right = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 605 "bison.y"
    {
		FKLOG("[bison]: cmp <- cmp_value LESS cmp_value");
		NEWTYPE(p, cmp_stmt);
		p->cmp = (yyvsp[(2) - (3)].str);
		p->left = (yyvsp[(1) - (3)].syntree);
		p->right = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 615 "bison.y"
    {
		FKLOG("[bison]: cmp <- cmp_value MORE cmp_value");
		NEWTYPE(p, cmp_stmt);
		p->cmp = (yyvsp[(2) - (3)].str);
		p->left = (yyvsp[(1) - (3)].syntree);
		p->right = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 625 "bison.y"
    {
		FKLOG("[bison]: cmp <- cmp_value EQUAL cmp_value");
		NEWTYPE(p, cmp_stmt);
		p->cmp = (yyvsp[(2) - (3)].str);
		p->left = (yyvsp[(1) - (3)].syntree);
		p->right = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 635 "bison.y"
    {
		FKLOG("[bison]: cmp <- cmp_value MORE_OR_EQUAL cmp_value");
		NEWTYPE(p, cmp_stmt);
		p->cmp = (yyvsp[(2) - (3)].str);
		p->left = (yyvsp[(1) - (3)].syntree);
		p->right = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 645 "bison.y"
    {
		FKLOG("[bison]: cmp <- cmp_value LESS_OR_EQUAL cmp_value");
		NEWTYPE(p, cmp_stmt);
		p->cmp = (yyvsp[(2) - (3)].str);
		p->left = (yyvsp[(1) - (3)].syntree);
		p->right = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 655 "bison.y"
    {
		FKLOG("[bison]: cmp <- cmp_value NOT_EQUAL cmp_value");
		NEWTYPE(p, cmp_stmt);
		p->cmp = (yyvsp[(2) - (3)].str);
		p->left = (yyvsp[(1) - (3)].syntree);
		p->right = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 665 "bison.y"
    {
		FKLOG("[bison]: cmp <- true");
		NEWTYPE(p, cmp_stmt);
		p->cmp = "true";
		p->left = 0;
		p->right = 0;
		(yyval.syntree) = p;
	;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 675 "bison.y"
    {
		FKLOG("[bison]: cmp <- false");
		NEWTYPE(p, cmp_stmt);
		p->cmp = "false";
		p->left = 0;
		p->right = 0;
		(yyval.syntree) = p;
	;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 687 "bison.y"
    {
		FKLOG("[bison]: cmp_value <- explicit_value");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 693 "bison.y"
    {
		FKLOG("[bison]: cmp_value <- variable");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 699 "bison.y"
    {
		FKLOG("[bison]: cmp_value <- expr");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 707 "bison.y"
    {
		FKLOG("[bison]: return_stmt <- RETURN return_value_list");
		NEWTYPE(p, return_stmt);
		p->returnlist = dynamic_cast<return_value_list_node*>((yyvsp[(2) - (2)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 717 "bison.y"
    {
		FKLOG("[bison]: return_value_list <- return_value_list return_value");
		assert((yyvsp[(1) - (3)].syntree)->gettype() == est_return_value_list);
		return_value_list_node * p = dynamic_cast<return_value_list_node*>((yyvsp[(1) - (3)].syntree));
		p->add_arg((yyvsp[(3) - (3)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 726 "bison.y"
    {
		NEWTYPE(p, return_value_list_node);
		p->add_arg((yyvsp[(1) - (1)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 735 "bison.y"
    {
		FKLOG("[bison]: return_value <- explicit_value");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 741 "bison.y"
    {
		FKLOG("[bison]: return_value <- variable");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 747 "bison.y"
    {
		FKLOG("[bison]: return_value <- expr");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 755 "bison.y"
    {
		FKLOG("[bison]: assign_stmt <- var assign_value");
		NEWTYPE(p, assign_stmt);
		p->var = (yyvsp[(1) - (3)].syntree);
		p->value = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 766 "bison.y"
    {
		FKLOG("[bison]: multi_assign_stmt <- var_list function_call");
		NEWTYPE(p, multi_assign_stmt);
		p->varlist = dynamic_cast<var_list_node*>((yyvsp[(1) - (3)].syntree));
		p->value = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 777 "bison.y"
    {
		FKLOG("[bison]: var_list <- var_list var");
		assert((yyvsp[(1) - (3)].syntree)->gettype() == est_var_list);
		var_list_node * p = dynamic_cast<var_list_node*>((yyvsp[(1) - (3)].syntree));
		p->add_arg((yyvsp[(3) - (3)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 786 "bison.y"
    {
		NEWTYPE(p, var_list_node);
		p->add_arg((yyvsp[(1) - (1)].syntree));
		(yyval.syntree) = p;
	;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 795 "bison.y"
    {
		FKLOG("[bison]: assign_value <- explicit_value");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 801 "bison.y"
    {
		FKLOG("[bison]: assign_value <- variable");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 807 "bison.y"
    {
		FKLOG("[bison]: assign_value <- expr");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 815 "bison.y"
    {
		FKLOG("[bison]: math_assign_stmt <- variable assign_value");
		NEWTYPE(p, math_assign_stmt);
		p->var = (yyvsp[(1) - (3)].syntree);
		p->oper = "+=";
		p->value = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 825 "bison.y"
    {
		FKLOG("[bison]: math_assign_stmt <- variable assign_value");
		NEWTYPE(p, math_assign_stmt);
		p->var = (yyvsp[(1) - (3)].syntree);
		p->oper = "-=";
		p->value = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 835 "bison.y"
    {
		FKLOG("[bison]: math_assign_stmt <- variable assign_value");
		NEWTYPE(p, math_assign_stmt);
		p->var = (yyvsp[(1) - (3)].syntree);
		p->oper = "/=";
		p->value = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 845 "bison.y"
    {
		FKLOG("[bison]: math_assign_stmt <- variable assign_value");
		NEWTYPE(p, math_assign_stmt);
		p->var = (yyvsp[(1) - (3)].syntree);
		p->oper = "*=";
		p->value = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 855 "bison.y"
    {
		FKLOG("[bison]: math_assign_stmt <- variable assign_value");
		NEWTYPE(p, math_assign_stmt);
		p->var = (yyvsp[(1) - (3)].syntree);
		p->oper = "%=";
		p->value = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 865 "bison.y"
    {
		FKLOG("[bison]: math_assign_stmt <- variable INC");
		NEWTYPE(pp, explicit_value_node);
		pp->str = "1";
		pp->type = explicit_value_node::EVT_NUM;
		
		NEWTYPE(p, math_assign_stmt);
		p->var = (yyvsp[(1) - (2)].syntree);
		p->oper = "+=";
		p->value = pp;
		(yyval.syntree) = p;
	;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 881 "bison.y"
    {
		FKLOG("[bison]: var <- VAR_BEGIN IDENTIFIER %s", (yyvsp[(2) - (2)].str).c_str());
		NEWTYPE(p, var_node);
		p->str = (yyvsp[(2) - (2)].str);
		(yyval.syntree) = p;
	;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 889 "bison.y"
    {
		FKLOG("[bison]: var <- variable");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 897 "bison.y"
    {
		FKLOG("[bison]: variable <- IDENTIFIER %s", (yyvsp[(1) - (1)].str).c_str());
		NEWTYPE(p, variable_node);
		p->str = (yyvsp[(1) - (1)].str);
		(yyval.syntree) = p;
	;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 905 "bison.y"
    {
		FKLOG("[bison]: container_get_node <- IDENTIFIER[expr_value] %s", (yyvsp[(1) - (4)].str).c_str());
		NEWTYPE(p, container_get_node);
		p->container = (yyvsp[(1) - (4)].str);
		p->key = (yyvsp[(3) - (4)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 914 "bison.y"
    {
		FKLOG("[bison]: variable <- IDENTIFIER_POINTER %s", (yyvsp[(1) - (1)].str).c_str());
		NEWTYPE(p, struct_pointer_node);
		p->str = (yyvsp[(1) - (1)].str);
		(yyval.syntree) = p;
	;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 924 "bison.y"
    {
		FKLOG("[bison]: expr <- (expr)");
		(yyval.syntree) = (yyvsp[(2) - (3)].syntree);
	;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 930 "bison.y"
    {
		FKLOG("[bison]: expr <- function_call");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 936 "bison.y"
    {
		FKLOG("[bison]: expr <- math_expr");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 944 "bison.y"
    {
		FKLOG("[bison]: math_expr <- (math_expr)");
		(yyval.syntree) = (yyvsp[(2) - (3)].syntree);
	;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 950 "bison.y"
    {
		FKLOG("[bison]: math_expr <- expr_value %s expr_value", (yyvsp[(2) - (3)].str).c_str());
		NEWTYPE(p, math_expr_node);
		p->oper = "+";
		p->left = (yyvsp[(1) - (3)].syntree);
		p->right = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 960 "bison.y"
    {
		FKLOG("[bison]: math_expr <- expr_value %s expr_value", (yyvsp[(2) - (3)].str).c_str());
		NEWTYPE(p, math_expr_node);
		p->oper = "-";
		p->left = (yyvsp[(1) - (3)].syntree);
		p->right = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 970 "bison.y"
    {
		FKLOG("[bison]: math_expr <- expr_value %s expr_value", (yyvsp[(2) - (3)].str).c_str());
		NEWTYPE(p, math_expr_node);
		p->oper = "*";
		p->left = (yyvsp[(1) - (3)].syntree);
		p->right = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 980 "bison.y"
    {
		FKLOG("[bison]: math_expr <- expr_value %s expr_value", (yyvsp[(2) - (3)].str).c_str());
		NEWTYPE(p, math_expr_node);
		p->oper = "/";
		p->left = (yyvsp[(1) - (3)].syntree);
		p->right = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 990 "bison.y"
    {
		FKLOG("[bison]: math_expr <- expr_value %s expr_value", (yyvsp[(2) - (3)].str).c_str());
		NEWTYPE(p, math_expr_node);
		p->oper = "%";
		p->left = (yyvsp[(1) - (3)].syntree);
		p->right = (yyvsp[(3) - (3)].syntree);
		(yyval.syntree) = p;
	;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1002 "bison.y"
    {
		FKLOG("[bison]: expr_value <- math_expr");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1008 "bison.y"
    {
		FKLOG("[bison]: expr_value <- explicit_value");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1014 "bison.y"
    {
		FKLOG("[bison]: expr_value <- function_call");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1020 "bison.y"
    {
		FKLOG("[bison]: expr_value <- variable");
		(yyval.syntree) = (yyvsp[(1) - (1)].syntree);
	;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1028 "bison.y"
    {
		FKLOG("[bison]: explicit_value <- TRUE");
		NEWTYPE(p, explicit_value_node);
		p->str = (yyvsp[(1) - (1)].str);
		p->type = explicit_value_node::EVT_TRUE;
		(yyval.syntree) = p;
	;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1037 "bison.y"
    {
		FKLOG("[bison]: explicit_value <- FALSE");
		NEWTYPE(p, explicit_value_node);
		p->str = (yyvsp[(1) - (1)].str);
		p->type = explicit_value_node::EVT_FALSE;
		(yyval.syntree) = p;
	;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1046 "bison.y"
    {
		FKLOG("[bison]: explicit_value <- NUMBER %s", (yyvsp[(1) - (1)].str).c_str());
		NEWTYPE(p, explicit_value_node);
		p->str = (yyvsp[(1) - (1)].str);
		p->type = explicit_value_node::EVT_NUM;
		(yyval.syntree) = p;
	;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1055 "bison.y"
    {
		FKLOG("[bison]: explicit_value <- FKUUID %s", (yyvsp[(1) - (1)].str).c_str());
		NEWTYPE(p, explicit_value_node);
		p->str = (yyvsp[(1) - (1)].str);
		p->type = explicit_value_node::EVT_UUID;
		(yyval.syntree) = p;
	;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1064 "bison.y"
    {
		FKLOG("[bison]: explicit_value <- STRING_DEFINITION %s", (yyvsp[(1) - (1)].str).c_str());
		NEWTYPE(p, explicit_value_node);
		p->str = (yyvsp[(1) - (1)].str);
		p->type = explicit_value_node::EVT_STR;
		(yyval.syntree) = p;
	;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1073 "bison.y"
    {
		FKLOG("[bison]: explicit_value <- FKFLOAT %s", (yyvsp[(1) - (1)].str).c_str());
		NEWTYPE(p, explicit_value_node);
		p->str = (yyvsp[(1) - (1)].str);
		p->type = explicit_value_node::EVT_FLOAT;
		(yyval.syntree) = p;
	;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1084 "bison.y"
    {
		FKLOG("[bison]: break <- BREAK");
		NEWTYPE(p, break_stmt);
		(yyval.syntree) = p;
	;}
    break;



/* Line 1455 of yacc.c  */
#line 2954 "bison.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



