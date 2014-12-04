/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <iostream>
#include "semantic.hh"
#include "optimize.hh"
#include "codegen.hh"

/* Defined in parser.cc */
extern char *yytext;

/* Nr of errors encountered so far. Only generate quads & assembler if
   error_count == 0. Defined in error.cc. */
extern int error_count;

/* Defined in symtab.cc. */
extern symbol_table *sym_tab;

/* Defined in semantic.cc. */
extern semantic *type_checker;

/* Defined in codegen.cc. */
extern code_generator *code_gen;

/* From scanner.l output. */
extern int yylex();

/* Defined in error.hh. */
extern void yyerror(string);

/* All these defined in main.cc. They represent some of the flags
   given to the 'diesel' script. */
extern bool print_ast;
extern bool print_quads;
extern bool typecheck;
extern bool optimize;
extern bool quads;
extern bool assembler;

#define YYDEBUG 1

/* Have this defined to give better error messages. Using it causes
   some bison warnings at compiler compile time, however. Use as you
   wish. Not mandatory. */
/* #define YYERROR_VERBOSE */

#line 111 "parser.cc" /* yacc.c:339  */

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
   by #include "parser.hh".  */
#ifndef YY_YY_PARSER_HH_INCLUDED
# define YY_YY_PARSER_HH_INCLUDED
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
    T_EOF = 258,
    T_ERROR = 259,
    T_DOT = 260,
    T_SEMICOLON = 261,
    T_EQ = 262,
    T_COLON = 263,
    T_LEFTBRACKET = 264,
    T_RIGHTBRACKET = 265,
    T_LEFTPAR = 266,
    T_RIGHTPAR = 267,
    T_COMMA = 268,
    T_LESSTHAN = 269,
    T_GREATERTHAN = 270,
    T_ADD = 271,
    T_SUB = 272,
    T_MUL = 273,
    T_RDIV = 274,
    T_OF = 275,
    T_IF = 276,
    T_DO = 277,
    T_ASSIGN = 278,
    T_NOTEQ = 279,
    T_OR = 280,
    T_VAR = 281,
    T_END = 282,
    T_AND = 283,
    T_IDIV = 284,
    T_MOD = 285,
    T_NOT = 286,
    T_THEN = 287,
    T_ELSE = 288,
    T_CONST = 289,
    T_ARRAY = 290,
    T_BEGIN = 291,
    T_WHILE = 292,
    T_ELSIF = 293,
    T_RETURN = 294,
    T_STRINGCONST = 295,
    T_IDENT = 296,
    T_PROGRAM = 297,
    T_PROCEDURE = 298,
    T_FUNCTION = 299,
    T_INTNUM = 300,
    T_REALNUM = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 54 "parser.y" /* yacc.c:355  */

    ast_node             *ast;
    ast_id               *id;
    ast_stmt_list        *statement_list;
    ast_statement        *statement;
    ast_expr_list        *expression_list;
    ast_expression       *expression;
    ast_elsif_list       *elsif_list;
    ast_elsif            *elsif;
    ast_lvalue           *lvalue;
    ast_functioncall     *function_call;
    ast_functionhead     *function_head;
    ast_procedurehead    *procedure_head;
    ast_integer          *integer;
    ast_real             *real;

    long                  ival;
    double                rval;
    pool_index            str;
    pool_index            pool_p;

#line 220 "parser.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 249 "parser.cc" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYLAST   254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   124,   124,   173,   180,   202,   203,   204,   208,   209,
     213,   219,   225,   229,   254,   258,   265,   266,   270,   271,
     275,   282,   289,   341,   342,   346,   347,   351,   399,   450,
     457,   466,   486,   508,   513,   519,   527,   532,   538,   556,
     564,   571,   584,   590,   596,   602,   608,   614,   620,   627,
     634,   638,   644,   651,   656,   661,   668,   675,   683,   693,
     699,   707,   713,   721,   727,   736,   741,   747,   753,   759,
     768,   773,   780,   785,   791,   797,   806,   811,   817,   823,
     829,   835,   844,   848,   852,   856,   860,   866,   871,   878,
     889,   902,   915,   930,   944,   957,   974,   988,  1003,  1017
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_EOF", "T_ERROR", "T_DOT",
  "T_SEMICOLON", "T_EQ", "T_COLON", "T_LEFTBRACKET", "T_RIGHTBRACKET",
  "T_LEFTPAR", "T_RIGHTPAR", "T_COMMA", "T_LESSTHAN", "T_GREATERTHAN",
  "T_ADD", "T_SUB", "T_MUL", "T_RDIV", "T_OF", "T_IF", "T_DO", "T_ASSIGN",
  "T_NOTEQ", "T_OR", "T_VAR", "T_END", "T_AND", "T_IDIV", "T_MOD", "T_NOT",
  "T_THEN", "T_ELSE", "T_CONST", "T_ARRAY", "T_BEGIN", "T_WHILE",
  "T_ELSIF", "T_RETURN", "T_STRINGCONST", "T_IDENT", "T_PROGRAM",
  "T_PROCEDURE", "T_FUNCTION", "T_INTNUM", "T_REALNUM", "$accept",
  "program", "prog_decl", "prog_head", "const_part", "const_decls",
  "const_decl", "variable_part", "var_decls", "var_decl", "subprog_part",
  "subprog_decls", "subprog_decl", "proc_decl", "func_decl", "proc_head",
  "func_head", "opt_param_list", "param_list", "param", "comp_stmt",
  "stmt_list", "stmt", "lvariable", "rvariable", "elsif_list", "elsif",
  "else_part", "opt_expr_list", "expr_list", "expr", "simple_expr", "term",
  "factor", "func_call", "integer", "real", "type_id", "const_id",
  "lvar_id", "rvar_id", "proc_id", "func_id", "array_id", "id", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -103

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-103)))

#define YYTABLE_NINF -99

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -31,   -27,    31,    80,    42,  -103,  -103,    10,    26,    50,
      80,  -103,    80,    80,    93,    93,   137,  -103,  -103,    39,
     107,  -103,    50,    50,     9,   114,   121,    96,    96,   108,
     102,   102,    94,  -103,    11,  -103,   130,  -103,   133,   155,
      48,  -103,   150,   168,   170,   180,    40,  -103,   137,   154,
     184,    96,  -103,    96,   157,  -103,  -103,   102,   105,   105,
     105,  -103,  -103,  -103,    13,    58,    79,  -103,  -103,  -103,
    -103,  -103,   188,   204,    70,   172,   208,    39,  -103,   144,
      24,   161,  -103,  -103,  -103,   154,   177,  -103,   108,   213,
    -103,   -22,  -103,   216,   157,  -103,   196,   112,   112,  -103,
     102,   102,   102,   102,    39,   105,   105,   105,   105,   105,
     105,   105,   105,    24,   102,    39,  -103,     6,   208,   209,
     212,   208,   221,   190,  -103,  -103,  -103,   137,   227,    20,
      28,   228,  -103,    12,  -103,  -103,    58,    58,    58,    58,
     229,   112,   112,   112,  -103,  -103,  -103,  -103,  -103,   224,
     202,    16,  -103,   102,  -103,  -103,   108,  -103,  -103,  -103,
    -103,  -103,  -103,   230,   231,    35,  -103,  -103,  -103,   208,
    -103,    81,  -103,    39,   102,  -103,   211,   232,   233,   229,
     169,  -103,   220,   225,    39,   154,   154,   229,   235,   238,
    -103,  -103
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    24,     0,     4,     1,     0,     0,     0,
      23,    25,    24,    24,    35,    35,     0,    31,    32,    49,
       0,    26,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,     0,    99,     0,    40,     0,    50,     0,     0,
      94,     2,     0,     0,     0,     0,     0,    36,     0,     0,
       0,     6,     8,     5,     0,     3,    55,     0,     0,     0,
       0,    90,    91,    82,     0,    65,    70,    76,    83,    84,
      85,    53,     0,     0,    95,     0,    46,    49,    39,     0,
       0,     0,    27,    28,    34,     0,     0,    33,    17,     0,
      92,     0,     9,     0,    16,    18,    88,    71,    72,    86,
       0,     0,     0,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,    41,    55,    45,     0,
      61,    63,    55,     0,    38,    37,    29,     0,     0,     0,
       0,     0,    93,     0,    19,    87,    66,    68,    69,    67,
      57,    74,    75,    73,    78,    79,    77,    80,    81,     0,
       0,     0,    44,     0,    52,    51,    17,    12,    14,    10,
      15,    11,    13,     0,     0,    60,    89,    54,    43,    64,
      30,     0,    20,    49,     0,    56,     0,     0,     0,    59,
       0,    42,     0,     0,    49,     0,     0,    58,     0,     0,
      21,    22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,  -103,  -103,  -103,   -40,   218,    64,   -79,  -103,   153,
     146,  -103,   239,  -103,  -103,  -103,  -103,   236,  -103,   162,
     147,  -102,   173,  -103,  -103,  -103,  -103,  -103,   139,  -103,
     -25,   127,   -43,   -18,  -103,   -87,   163,   -84,    82,  -103,
    -103,  -103,  -103,   -16,   -19
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    29,    51,    52,    55,    94,    95,
       9,    10,    11,    12,    13,    14,    15,    25,    46,    47,
      20,    34,    35,    36,    63,   165,   175,   176,   119,   120,
     121,    65,    66,    67,    68,    69,    70,    89,   131,    37,
      71,    38,    72,    73,    74
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,   124,   140,    39,   129,    64,    75,    76,    88,   126,
      44,     1,   -48,   151,     5,    97,    98,    77,   128,    33,
     100,   158,    77,    61,    62,    56,   159,   101,   102,   160,
      90,     6,    96,   -48,   161,    57,   -62,   103,    78,   -48,
      58,    59,    99,   168,   -48,   104,    86,   163,    16,   164,
      45,    17,    87,    33,   118,    60,   123,   -98,    40,   -96,
      30,    39,   141,   142,   143,    33,    90,    18,   173,    61,
      62,   179,   132,   174,   105,   106,    31,   170,    32,   -98,
      33,   -97,   187,   107,   177,    40,    19,   156,    39,   150,
     144,   145,   146,   147,   148,    56,    40,   108,   109,    39,
     -47,   188,   189,    56,    24,    57,    56,   110,   111,   112,
      58,    59,    41,    57,    90,    92,    57,    92,    58,    59,
      48,   -47,    33,     7,     8,    60,    61,   -47,   169,    49,
     108,   109,   -47,    60,    54,    33,    60,    50,    27,    61,
      62,   111,   112,    33,    80,   117,    33,    61,    62,   180,
      61,    62,   132,    79,    40,    57,    82,    39,    22,    23,
      58,    59,   122,    -7,    81,    40,    90,    90,    39,    42,
      43,    28,    57,    -7,    83,    60,   100,    58,    59,   100,
      -7,    -7,    84,   101,   102,    33,   101,   102,    85,    61,
      62,    91,    60,   103,   115,    33,   103,   100,    93,   113,
     155,   184,    33,   100,   101,   102,    61,    62,   135,   100,
     101,   102,   167,   114,   103,   100,   101,   102,    45,   127,
     103,   152,   101,   102,   133,   153,   103,   136,   137,   138,
     139,   154,   103,   157,   162,    77,   166,   172,   181,   171,
     185,   190,   182,   183,   191,   186,    53,   134,   125,    21,
     116,    26,   149,   178,   130
};

static const yytype_uint8 yycheck[] =
{
      19,    85,   104,    19,    91,    30,    31,    32,    48,    88,
       1,    42,     6,   115,    41,    58,    59,     6,    40,    41,
       7,     1,     6,    45,    46,     1,     6,    14,    15,     1,
      49,     0,    57,    27,     6,    11,    12,    24,    27,    33,
      16,    17,    60,    27,    38,    32,     6,    35,     6,   133,
      41,    41,    12,    41,    79,    31,    81,     9,    77,    11,
      21,    77,   105,   106,   107,    41,    85,    41,    33,    45,
      46,   173,    91,    38,    16,    17,    37,   156,    39,     9,
      41,    11,   184,    25,   171,   104,    36,   127,   104,   114,
     108,   109,   110,   111,   112,     1,   115,    18,    19,   115,
       6,   185,   186,     1,    11,    11,     1,    28,    29,    30,
      16,    17,     5,    11,   133,    51,    11,    53,    16,    17,
       6,    27,    41,    43,    44,    31,    45,    33,   153,     8,
      18,    19,    38,    31,    26,    41,    31,    41,     1,    45,
      46,    29,    30,    41,    11,     1,    41,    45,    46,   174,
      45,    46,   171,    23,   173,    11,     6,   173,    12,    13,
      16,    17,     1,    26,     9,   184,   185,   186,   184,    22,
      23,    34,    11,    36,     6,    31,     7,    16,    17,     7,
      43,    44,    12,    14,    15,    41,    14,    15,     8,    45,
      46,     7,    31,    24,    22,    41,    24,     7,    41,    11,
      10,    32,    41,     7,    14,    15,    45,    46,    12,     7,
      14,    15,    10,     9,    24,     7,    14,    15,    41,     6,
      24,    12,    14,    15,     8,    13,    24,   100,   101,   102,
     103,    10,    24,     6,     6,     6,    12,     6,    27,     9,
      20,     6,    10,    10,     6,    20,    28,    94,    86,    10,
      77,    15,   113,   171,    91
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    42,    48,    49,    50,    41,     0,    43,    44,    57,
      58,    59,    60,    61,    62,    63,     6,    41,    41,    36,
      67,    59,    57,    57,    11,    64,    64,     1,    34,    51,
      21,    37,    39,    41,    68,    69,    70,    86,    88,    90,
      91,     5,    67,    67,     1,    41,    65,    66,     6,     8,
      41,    52,    53,    52,    26,    54,     1,    11,    16,    17,
      31,    45,    46,    71,    77,    78,    79,    80,    81,    82,
      83,    87,    89,    90,    91,    77,    77,     6,    27,    23,
      11,     9,     6,     6,    12,     8,     6,    12,    51,    84,
      91,     7,    53,    41,    55,    56,    77,    79,    79,    80,
       7,    14,    15,    24,    32,    16,    17,    25,    18,    19,
      28,    29,    30,    11,     9,    22,    69,     1,    77,    75,
      76,    77,     1,    77,    84,    66,    54,     6,    40,    82,
      83,    85,    91,     8,    56,    12,    78,    78,    78,    78,
      68,    79,    79,    79,    80,    80,    80,    80,    80,    75,
      77,    68,    12,    13,    10,    10,    51,     6,     1,     6,
       1,     6,     6,    35,    84,    72,    12,    10,    27,    77,
      54,     9,     6,    33,    38,    73,    74,    82,    85,    68,
      77,    27,    10,    10,    32,    20,    20,    68,    84,    84,
       6,     6
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    50,    51,    51,    51,    52,    52,
      53,    53,    53,    53,    53,    53,    54,    54,    55,    55,
      56,    56,    56,    57,    57,    58,    58,    59,    59,    60,
      61,    62,    63,    64,    64,    64,    65,    65,    66,    67,
      68,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    70,    71,    71,    71,    72,    72,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    77,    77,    77,
      78,    78,    78,    78,    78,    78,    79,    79,    79,    79,
      79,    79,    80,    80,    80,    80,    80,    80,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     4,     2,     2,     2,     0,     1,     2,
       4,     4,     4,     4,     4,     4,     2,     0,     1,     2,
       4,     9,     9,     1,     0,     1,     2,     4,     4,     5,
       7,     2,     2,     3,     3,     0,     1,     3,     3,     3,
       1,     3,     7,     5,     4,     3,     2,     1,     3,     0,
       1,     4,     4,     1,     4,     1,     2,     0,     4,     2,
       0,     1,     0,     1,     3,     1,     3,     3,     3,     3,
       1,     2,     2,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     2,     3,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 125 "parser.y" /* yacc.c:1646  */
    {

                    symbol *env = sym_tab->get_symbol((yyvsp[-3].procedure_head)->sym_p);

                    // The status variables here depend on what flags were
                    // passed to the compiler. See the 'diesel' script for
                    // more information.
                    if (typecheck) {
                        type_checker->do_typecheck(env, (yyvsp[-1].statement_list));
                    }

                    if (print_ast) {
                        cout << "\nUnoptimized AST for global level" << endl;
                        cout << (ast_stmt_list *)(yyvsp[-1].statement_list) << endl;
                    }

                    if (optimize) {
                        optimizer->do_optimize((yyvsp[-1].statement_list));
                        if(print_ast) {
                            cout << "\nOptimized AST for global level" << endl;
                            cout << (ast_stmt_list *)(yyvsp[-1].statement_list) << endl;
                        }
                    }
                    if (error_count == 0) {
                        if (quads) {
                            quad_list *q = (yyvsp[-3].procedure_head)->do_quads((yyvsp[-1].statement_list));
                            if (print_quads) {
                                cout << "\nQuad list for global level" << endl;
                                cout << (quad_list *)q << endl;
                            }

                            if (assembler) {
                                cout << "Generating assembler, global level"
                                     << endl;
                                code_gen->generate_assembler(q, env);
                            }
                        }
                    } else {
                        cout << "Found " << error_count << " errors. "
                             << "Compilation aborted.\n";
                    }

                    // We close the global scope.
                    sym_tab->close_scope();
                }
#line 1618 "parser.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 174 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.procedure_head) = (yyvsp[-3].procedure_head);
                }
#line 1626 "parser.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 181 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here nikokod, kanske inte ok :S 
                        det finns ingen 'ast_programhead funktion i .hh. wtf'FEL*/
					position_information *pos =
						new position_information((yylsp[-1]).first_line,
												 (yylsp[-1]).first_column);
					// We add the function id to the symbol table.
					sym_index prog_loc = sym_tab->enter_procedure(pos,
																  (yyvsp[0].pool_p));
					// Open a new scope.
					sym_tab->open_scope();
					// This AST node is just a temporary node which we create
					// here in order to be able to provide the symbol table
					// index for the procedure to the proc_decl production
					// above. It's needed for code generation.
					(yyval.procedure_head) = new ast_procedurehead(pos, prog_loc);
                    
                }
#line 1649 "parser.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 214 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
					position_information *pos = new position_information((yylsp[-3]).first_line, (yylsp[-3]).first_column);
					sym_index loc = sym_tab->enter_constant(pos, (yyvsp[-3].pool_p), integer_type, (yyvsp[-1].integer)->value);
                }
#line 1659 "parser.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 220 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
					position_information *pos = new position_information((yylsp[-3]).first_line, (yylsp[-3]).first_column);
					sym_index loc = sym_tab->enter_constant(pos, (yyvsp[-3].pool_p), real_type, (yyvsp[-1].real)->value);
                }
#line 1669 "parser.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 226 "parser.y" /* yacc.c:1646  */
    {
                    // This isn't implemented in Diesel... Do nothing.
                }
#line 1677 "parser.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 230 "parser.y" /* yacc.c:1646  */
    {

                    // This part of code is a bit ugly, but it's needed to
                    // allow constructions like this:
                    // constant foo = 5;
                    // constant bar = foo;
                    // ...now, why would anyone want to do that?
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-3]).first_line, (yylsp[-3]).first_column);
                	symbol *sym  = sym_tab->get_symbol((yyvsp[-1].id)->sym_p);
                	if (sym == NULL) 
                	{
                		fatal("Constant symbol was NULL.");
                	}
                	else if(sym->type == integer_type) {
                		
                		constant_symbol *constant = sym->get_constant_symbol();
                        sym_tab->enter_constant(pos, (yyvsp[-3].pool_p), constant->type, (constant->const_value.ival));
                	}else if(sym->type == real_type) {
                		
                		constant_symbol *constant = sym->get_constant_symbol();
                        sym_tab->enter_constant(pos, (yyvsp[-3].pool_p), constant->type, (constant->const_value.rval));
                	}
                }
#line 1706 "parser.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 255 "parser.y" /* yacc.c:1646  */
    {
                	yyerror("Found error at end of line.");
                }
#line 1714 "parser.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 259 "parser.y" /* yacc.c:1646  */
    {
                	yyerror("Found error at end of line.");
                }
#line 1722 "parser.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 276 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
					position_information *pos = new position_information((yylsp[-3]).first_line, (yylsp[-3]).first_column);
	                	
	                sym_tab->enter_variable(pos, (yyvsp[-3].pool_p), (yyvsp[-1].id)->sym_p);
                }
#line 1733 "parser.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 283 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-8]).first_line, (yylsp[-8]).first_column);
                	
                	sym_tab->enter_array(pos, (yyvsp[-8].pool_p), (yyvsp[-1].id)->sym_p, (yyvsp[-4].integer)->value);
                }
#line 1744 "parser.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 290 "parser.y" /* yacc.c:1646  */
    {
                    // We enter an array: pool_pointer, type pointer,
                    // the id type of the constant, and the value of the
                    // constant.
                    position_information *pos =
                        new position_information((yylsp[-8]).first_line,
                                                 (yylsp[-8]).first_column);

                    // Ideally we should be able to just enter the array and
                    // defer index type checking to the semantic phase.
                    // However, since a constant can represent a real value,
                    // and the enter_array() method only accepts integer
                    // values for cardinality, we have to prevent entering an
                    // array with a float index here, or the compiler would
                    // crash.
                    // However, to make the compiler install the array,
                    // so we won't get a ton of complaints about this array
                    // being undeclared later on, we cheat and install it
                    // anyway with an illegal cardinality - which we _can_
                    // defer checking until the semantic phase.

                    // Find the const_id's symbol in the symbol table.
                    symbol *tmp =
                        sym_tab->get_symbol((yyvsp[-4].id)->sym_p);

                    // Make sure it exists. This should belong in a later pass,
                    // but if we don't do it here and NULL is returned (which
                    // shouldn't happen if you've done everything right, but
                    // paranoia never hurts) the compiler would crash.
                    if(tmp == NULL || tmp->tag != SYM_CONST) {
                        type_error(pos) << "bad index in array declaration: "
                                        << yytext << endl << flush;
                    } else {
                        constant_symbol *con = tmp->get_constant_symbol();
                        if (con->type == integer_type) {
                            sym_tab->enter_array(pos,
                                                 (yyvsp[-8].pool_p),
                                                 (yyvsp[-1].id)->sym_p,
                                                 con->const_value.ival);
                        } else {
                            sym_tab->enter_array(pos,
                                                 (yyvsp[-8].pool_p),
                                                 (yyvsp[-1].id)->sym_p,
                                                 ILLEGAL_ARRAY_CARD);
                        }
                    }
                }
#line 1796 "parser.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 352 "parser.y" /* yacc.c:1646  */
    {

                    symbol *env = sym_tab->get_symbol((yyvsp[-3].procedure_head)->sym_p);

                    if (typecheck) {
                        type_checker->do_typecheck(env, (yyvsp[-1].statement_list));
                    }

                    if (print_ast) {
                        cout << "\nUnoptimized AST for \""
                             << sym_tab->pool_lookup(env->id)
                             << "\"" << endl;
                        cout << (ast_stmt_list *)(yyvsp[-1].statement_list) << endl;
                    }

                    if (optimize) {
                        optimizer->do_optimize((yyvsp[-1].statement_list));
                        if (print_ast) {
                            cout << "\nOptimized AST for \""
                                 << sym_tab->pool_lookup(env->id)
                                 << "\"" << endl;
                            cout << (ast_stmt_list*)(yyvsp[-1].statement_list) << endl;
                        }
                    }

                    if (error_count == 0) {
                        if (quads) {
                            quad_list *q = (yyvsp[-3].procedure_head)->do_quads((yyvsp[-1].statement_list));
                            if (print_quads) {
                                cout << "\nQuad list for \""
                                     << sym_tab->pool_lookup(env->id)
                                     << "\"" << endl;
                                cout << (quad_list *)q << endl;
                            }

                            if (assembler) {
                                cout << "Generating assembler for procedure \""
                                     << sym_tab->pool_lookup(env->id)
                                     << "\"" << endl;
                                code_gen->generate_assembler(q, env);
                            }
                        }
                    }

                    // Close the current scope.
                    sym_tab->close_scope();
                }
#line 1848 "parser.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 400 "parser.y" /* yacc.c:1646  */
    {

                    symbol *env = sym_tab->get_symbol((yyvsp[-3].function_head)->sym_p);

                    if (typecheck) {
                        type_checker->do_typecheck(env, (yyvsp[-1].statement_list));
                    }

                    if (print_ast) {
                        cout << "\nUnoptimized AST for \""
                             << sym_tab->pool_lookup(env->id)
                             << "\"" << endl;
                        cout << (ast_stmt_list *)(yyvsp[-1].statement_list) << endl;
                    }

                    if (optimize) {
                        optimizer->do_optimize((yyvsp[-1].statement_list));
                        if (print_ast) {
                            cout << "\nOptimized AST for \""
                                 << sym_tab->pool_lookup(env->id)
                                 << "\"" << endl;
                            cout << (ast_stmt_list *)(yyvsp[-1].statement_list) << endl;
                        }
                    }

                    if (error_count == 0) {
                        if (quads) {
                            quad_list *q = (yyvsp[-3].function_head)->do_quads((yyvsp[-1].statement_list));
                            if (print_quads) {
                                cout << "\nQuad list for \""
                                     << sym_tab->pool_lookup(env->id)
                                     << "\"" << endl;
                                cout << (quad_list *)q << endl;
                            }

                            if (assembler) {
                                cout << "Generating assembler for function \""
                                     << sym_tab->pool_lookup(env->id) << "\""
                                     << endl;
                                code_gen->generate_assembler(q, env);
                            }
                        }
                    }

                    // Close the current scope.
                    sym_tab->close_scope();
                }
#line 1900 "parser.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 451 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.procedure_head) = (yyvsp[-4].procedure_head);
                }
#line 1908 "parser.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 458 "parser.y" /* yacc.c:1646  */
    {
                    /* Your niko code here*/
					sym_tab->set_symbol_type((yyvsp[-6].function_head)->sym_p, (yyvsp[-3].id)->sym_p);
                    (yyval.function_head) = (yyvsp[-6].function_head);
                }
#line 1918 "parser.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 467 "parser.y" /* yacc.c:1646  */
    {
                    position_information *pos =
                        new position_information((yylsp[-1]).first_line,
                                                 (yylsp[-1]).first_column);
                    // We add the function id to the symbol table.
                    sym_index proc_loc = sym_tab->enter_procedure(pos,
                                                                  (yyvsp[0].pool_p));
                    // Open a new scope.
                    sym_tab->open_scope();
                    // This AST node is just a temporary node which we create
                    // here in order to be able to provide the symbol table
                    // index for the procedure to the proc_decl production
                    // above. It's needed for code generation.
                    (yyval.procedure_head) = new ast_procedurehead(pos,
                                               proc_loc);
                }
#line 1939 "parser.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 487 "parser.y" /* yacc.c:1646  */
    {
                    position_information *pos =
                        new position_information((yylsp[-1]).first_line,
                                                 (yylsp[-1]).first_column);
                    // We add the function id to the symbol table.
                    sym_index func_loc = sym_tab->enter_function(pos,
                                                                 (yyvsp[0].pool_p));
                    // Open a new scope.
                    sym_tab->open_scope();

                    // This AST node is just a temporary node which we create
                    // here in order to be able to provide the symbol table
                    // index for the function to the func_decl production
                    // above. We need it to be able to set the return type
                    // and also later on for code generation.
                    (yyval.function_head) = new ast_functionhead(pos,
                                              func_loc);
                }
#line 1962 "parser.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 509 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
			(yyval.expression_list) = (yyvsp[-1].expression_list);
                }
#line 1971 "parser.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 514 "parser.y" /* yacc.c:1646  */
    {
		    yyerror("Error in parameter list.");
                    (yyval.expression_list) = NULL;
                }
#line 1980 "parser.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 519 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	// TODO
                	(yyval.expression_list) = NULL;
                }
#line 1990 "parser.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 528 "parser.y" /* yacc.c:1646  */
    {
                    /* Note that we use expr_lists for parameters. This
                       is thus simply a place-holder in the grammar. */
                }
#line 1999 "parser.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 533 "parser.y" /* yacc.c:1646  */
    {
                }
#line 2006 "parser.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 539 "parser.y" /* yacc.c:1646  */
    {
                    position_information *pos =
                        new position_information((yylsp[-2]).first_line,
                                                 (yylsp[-2]).first_column);

                    // Enter parameter into the symbol table. The linking of
                    // parameters and things is taken care of in the
                    // enter_parameter function, which is worth taking a
                    // second look at.
                    sym_index param_loc =
                        sym_tab->enter_parameter(pos,
                                                 (yyvsp[-2].pool_p),
                                                 (yyvsp[0].id)->sym_p);
                }
#line 2025 "parser.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 557 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
					(yyval.statement_list) = (yyvsp[-1].statement_list); // TODO: wat is comp? complete?
                }
#line 2034 "parser.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 565 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
					position_information *pos = new position_information((yylsp[0]).first_line, (yylsp[0]).first_column);
					if ((yyvsp[0].statement) != NULL)  
					(yyval.statement_list) = new ast_stmt_list(pos, (yyvsp[0].statement));
                }
#line 2045 "parser.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 572 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
				if((yyvsp[0].statement) != NULL){
					position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
					(yyval.statement_list) = new ast_stmt_list(pos, (yyvsp[0].statement), (yyvsp[-2].statement_list));
			}else
		(yyval.statement_list) = (yyvsp[-2].statement_list);	

                }
#line 2059 "parser.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 585 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
					position_information *pos = new position_information((yylsp[-6]).first_line, (yylsp[-6]).first_column);
					(yyval.statement) = new ast_if(pos, (yyvsp[-5].expression), (yyvsp[-3].statement_list), (yyvsp[-2].elsif_list), (yyvsp[-1].statement_list));
                }
#line 2069 "parser.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 591 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-4]).first_line, (yylsp[-4]).first_column);
					(yyval.statement) = new ast_while(pos, (yyvsp[-3].expression), (yyvsp[-1].statement_list));
                }
#line 2079 "parser.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 597 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-3]).first_line, (yylsp[-3]).first_column);
					(yyval.statement) = new ast_procedurecall(pos, (yyvsp[-3].id), (yyvsp[-1].expression_list));
                }
#line 2089 "parser.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 603 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
					(yyval.statement) = new ast_assign(pos, (yyvsp[-2].lvalue), (yyvsp[0].expression));
                }
#line 2099 "parser.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 609 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-1]).first_line, (yylsp[-1]).first_column);
					(yyval.statement) = new ast_return(pos, (yyvsp[0].expression));
                }
#line 2109 "parser.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 615 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[0]).first_line, (yylsp[0]).first_column);
					(yyval.statement) = new ast_return(pos);
                }
#line 2119 "parser.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 621 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	yyerror("Missing expression to assign the variable."); 
                	(yyval.statement) = NULL;
                }
#line 2129 "parser.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 627 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	// TODO: null läggs ju fan in i trädet, det vill vi inte!! 
                	(yyval.statement) = NULL;
                }
#line 2139 "parser.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 635 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.lvalue) = (yyvsp[0].id);
                }
#line 2147 "parser.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 639 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.lvalue) = new ast_indexed((yyvsp[-3].id)->pos,
                                         (yyvsp[-3].id),
                                         (yyvsp[-1].expression));
                }
#line 2157 "parser.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 645 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.lvalue) = NULL;
                }
#line 2165 "parser.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 652 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
					(yyval.expression) = (yyvsp[0].id);
                }
#line 2174 "parser.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 657 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	(yyval.expression) = new ast_indexed((yyvsp[-3].id)->pos, (yyvsp[-3].id), (yyvsp[-1].expression));
                }
#line 2183 "parser.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 662 "parser.y" /* yacc.c:1646  */
    {
			yyerror("Error in rvariable.");
		}
#line 2191 "parser.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 669 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
						position_information *pos = new position_information((yylsp[-1]).first_line, (yylsp[-1]).first_column);
						(yyval.elsif_list) = new ast_elsif_list(pos, (yyvsp[0].elsif), (yyvsp[-1].elsif_list));
                }
#line 2201 "parser.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 675 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	//TODO:
                	(yyval.elsif_list) = NULL;
                }
#line 2211 "parser.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 684 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
					position_information *pos = new position_information((yylsp[-3]).first_line, (yylsp[-3]).first_column);
					(yyval.elsif) = new ast_elsif(pos, (yyvsp[-2].expression), (yyvsp[0].statement_list));
	                	                	
                }
#line 2222 "parser.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 694 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
					(yyval.statement_list) = (yyvsp[0].statement_list);
                }
#line 2231 "parser.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 699 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	//TODO:fråga olle
                	(yyval.statement_list) = NULL;
                }
#line 2241 "parser.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 708 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
					(yyval.expression_list) = (yyvsp[0].expression_list);
                }
#line 2250 "parser.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 713 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	// TODO: fråga.
                	(yyval.expression_list) = NULL;
                }
#line 2260 "parser.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 722 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
					position_information *pos = new position_information((yylsp[0]).first_line, (yylsp[0]).first_column);
					(yyval.expression_list) = new ast_expr_list(pos, (yyvsp[0].expression));
                }
#line 2270 "parser.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 728 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
                	                	(yyval.expression_list) = new ast_expr_list(pos, (yyvsp[0].expression), (yyvsp[-2].expression_list));
                }
#line 2280 "parser.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 737 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
					(yyval.expression) = (yyvsp[0].expression);
                }
#line 2289 "parser.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 742 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
                	(yyval.expression) = new ast_equal(pos, (yyvsp[-2].expression), (yyvsp[0].expression));
                }
#line 2299 "parser.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 748 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
                	(yyval.expression) = new ast_notequal(pos, (yyvsp[-2].expression), (yyvsp[0].expression));
                }
#line 2309 "parser.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 754 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
                	(yyval.expression) = new ast_lessthan(pos, (yyvsp[-2].expression), (yyvsp[0].expression));
                }
#line 2319 "parser.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 760 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
                	(yyval.expression) = new ast_greaterthan(pos, (yyvsp[-2].expression), (yyvsp[0].expression));
                }
#line 2329 "parser.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 769 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
					(yyval.expression) = (yyvsp[0].expression);
                }
#line 2338 "parser.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 774 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	//position_information *pos = new position_information(@1.first_line, @1.first_column);
                	//fatal("Unary plus not allowed."); // TODO
			(yyval.expression) = (yyvsp[0].expression);
                }
#line 2349 "parser.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 781 "parser.y" /* yacc.c:1646  */
    {
                	position_information *pos = new position_information((yylsp[-1]).first_line, (yylsp[-1]).first_column);
                	(yyval.expression) = new ast_uminus(pos, (yyvsp[0].expression));
                }
#line 2358 "parser.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 786 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
					(yyval.expression) = new ast_or(pos, (yyvsp[-2].expression), (yyvsp[0].expression));
                }
#line 2368 "parser.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 792 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
                	(yyval.expression) = new ast_add(pos, (yyvsp[-2].expression), (yyvsp[0].expression));
                }
#line 2378 "parser.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 798 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
                	(yyval.expression) = new ast_sub(pos, (yyvsp[-2].expression), (yyvsp[0].expression));
                }
#line 2388 "parser.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 807 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
					(yyval.expression) = (yyvsp[0].expression);
                }
#line 2397 "parser.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 812 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
                	(yyval.expression) = new ast_and(pos, (yyvsp[-2].expression), (yyvsp[0].expression));
                }
#line 2407 "parser.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 818 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
                	                	(yyval.expression) = new ast_mult(pos, (yyvsp[-2].expression), (yyvsp[0].expression));
                }
#line 2417 "parser.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 824 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
                	                	(yyval.expression) = new ast_divide(pos, (yyvsp[-2].expression), (yyvsp[0].expression));
                }
#line 2427 "parser.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 830 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
                	                	(yyval.expression) = new ast_idiv(pos, (yyvsp[-2].expression), (yyvsp[0].expression));
                }
#line 2437 "parser.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 836 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-2]).first_line, (yylsp[-2]).first_column);
                	                	(yyval.expression) = new ast_mod(pos, (yyvsp[-2].expression), (yyvsp[0].expression));
                }
#line 2447 "parser.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 845 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.expression) = (yyvsp[0].expression);
                }
#line 2455 "parser.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 849 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.expression) = (yyvsp[0].function_call);
                }
#line 2463 "parser.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 853 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.expression) = (yyvsp[0].integer);
                }
#line 2471 "parser.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 857 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.expression) = (yyvsp[0].real);
                }
#line 2479 "parser.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 861 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	position_information *pos = new position_information((yylsp[-1]).first_line, (yylsp[-1]).first_column);
                	(yyval.expression) = new ast_not(pos, (yyvsp[0].expression));//TODO: Dunno whats going on here...
                }
#line 2489 "parser.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 867 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */
                	(yyval.expression) = (yyvsp[-1].expression);
                }
#line 2498 "parser.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 872 "parser.y" /* yacc.c:1646  */
    {
			yyerror("Missing right parenthesis.");
		}
#line 2506 "parser.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 879 "parser.y" /* yacc.c:1646  */
    {
                    /* Your code here */

					position_information *pos = new position_information((yylsp[-3]).first_line, (yylsp[-3]).first_column);
					(yyval.function_call) = new ast_functioncall(pos, (yyvsp[-3].id), (yyvsp[-1].expression_list));
                }
#line 2517 "parser.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 890 "parser.y" /* yacc.c:1646  */
    {
                    position_information *pos =
                        new position_information((yylsp[0]).first_line,
                                                 (yylsp[0]).first_column);

                    // We need to pass on the value AND the position here.
                    (yyval.integer) = new ast_integer(pos,
                                         (yyvsp[0].ival));
                }
#line 2531 "parser.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 903 "parser.y" /* yacc.c:1646  */
    {
                    position_information *pos =
                        new position_information((yylsp[0]).first_line,
                                                 (yylsp[0]).first_column);

                    // We create a new real constant.
                    (yyval.real) = new ast_real(pos,
                                      (yyvsp[0].rval));
                }
#line 2545 "parser.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 916 "parser.y" /* yacc.c:1646  */
    {
                    // Make sure this id is really declared as a type.
                    // debug() << "type_id -> id: "
                    //       << sym_tab->get_symbol($1->sym_p) << endl;
                    if(sym_tab->get_symbol_tag((yyvsp[0].id)->sym_p) != SYM_NAMETYPE) {
                        type_error((yyvsp[0].id)->pos) << "not declared "
                                            << "as type: "
                                            << yytext << endl << flush;
                    }
                    (yyval.id) = (yyvsp[0].id);
                }
#line 2561 "parser.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 931 "parser.y" /* yacc.c:1646  */
    {
                    // Make sure this id is really declared as a constant.
                    // debug() << "const_id -> id: " << $1->sym_p << endl;
                    if(sym_tab->get_symbol_tag((yyvsp[0].id)->sym_p) != SYM_CONST) {
                        type_error((yyvsp[0].id)->pos) << "not declared "
                                            << "as constant: "
                                            << yytext << flush;
                    }
                    (yyval.id) = (yyvsp[0].id);
                }
#line 2576 "parser.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 945 "parser.y" /* yacc.c:1646  */
    {
                    // Make sure this id is really declared as an lvariable.
                    // debug() << "lvar_id -> id: " << $1->sym_p << endl;
                    if (sym_tab->get_symbol_tag((yyvsp[0].id)->sym_p) != SYM_VAR &&
                       sym_tab->get_symbol_tag((yyvsp[0].id)->sym_p) != SYM_PARAM) {
                        type_error((yyvsp[0].id)->pos) << "not declared "
                                            << "as variable or parameter: "
                                            << yytext << endl << flush;
                    }
                    (yyval.id) = (yyvsp[0].id);
                }
#line 2592 "parser.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 958 "parser.y" /* yacc.c:1646  */
    {
                    // Make sure this id is really declared as an rvariable.
                    // debug() << "rvar_id -> id: " << $1->sym_p << endl;
                    if (sym_tab->get_symbol_tag((yyvsp[0].id)->sym_p) != SYM_VAR &&
                       sym_tab->get_symbol_tag((yyvsp[0].id)->sym_p) != SYM_PARAM &&
                       sym_tab->get_symbol_tag((yyvsp[0].id)->sym_p) != SYM_CONST) {
                        type_error((yyvsp[0].id)->pos) << "not declared "
                                            << "as variable, parameter or "
                                            << "constant: "
                                            << yytext << endl << flush;
                    }
                    (yyval.id) = (yyvsp[0].id);
                }
#line 2610 "parser.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 975 "parser.y" /* yacc.c:1646  */
    {
                    // Make sure this id is really declared as a procedure.
                    // debug() << "proc_id -> id: " << $1->sym_p << endl;
                    if (sym_tab->get_symbol_tag((yyvsp[0].id)->sym_p) != SYM_PROC) {
                        type_error((yyvsp[0].id)->pos) << "not declared "
                                            << "as procedure: "
                                            << yytext << endl << flush;
                    }
                    (yyval.id) = (yyvsp[0].id);
                }
#line 2625 "parser.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 989 "parser.y" /* yacc.c:1646  */
    {
                    // Make sure this id is really declared as a function.
                    // debug() << "func_id -> id: " << $1->sym_p << endl;
                    if (sym_tab->get_symbol_tag((yyvsp[0].id)->sym_p) != SYM_FUNC) {
                        type_error((yyvsp[0].id)->pos) << "not declared "
                                            << "as function: "
                                            << yytext << endl << flush;
                    }

                    (yyval.id) = (yyvsp[0].id);
                }
#line 2641 "parser.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 1004 "parser.y" /* yacc.c:1646  */
    {
                    // Make sure this id is really declared as an array.
                    // debug() << "array_id -> id: " << $1->sym_p << endl;
                    if (sym_tab->get_symbol_tag((yyvsp[0].id)->sym_p) != SYM_ARRAY) {
                        type_error((yyvsp[0].id)->pos) << "not declared "
                                            << "as array: "
                                            << yytext << endl << flush;
                    }
                    (yyval.id) = (yyvsp[0].id);
                }
#line 2656 "parser.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 1018 "parser.y" /* yacc.c:1646  */
    {
                    sym_index sym_p;    // Used to find previous use of symbol.
                    position_information *pos =
                        new position_information((yylsp[0]).first_line,
                                                 (yylsp[0]).first_column);

                    // Make sure the symbol was declared before it is used.
                    sym_p = sym_tab->lookup_symbol((yyvsp[0].pool_p));


                    // debug() << "id -> T_IDENT: " << sym_p << " "
                    //            << sym_tab->pool_lookup($1) << endl;
                    if (sym_p == NULL_SYM) {
                        type_error(pos) << "not declared: "
                                        << yytext << endl << flush;
                    }
                    // Create a new ast_id node with pos, symptr.
                    (yyval.id) = new ast_id(pos,
                                    sym_p);
                    (yyval.id)->type = sym_tab->get_symbol_type(sym_p);
                }
#line 2682 "parser.cc" /* yacc.c:1646  */
    break;


#line 2686 "parser.cc" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 1042 "parser.y" /* yacc.c:1906  */

