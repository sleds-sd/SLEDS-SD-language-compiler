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
#line 1 "sintatico.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "module/interfaces.h"
	#include "module/geracode.h"
	#include "module/inferenceC.h"
	#include "module/eventReceive.h"
	#include "module/eventSend.h"
	int yylex();
	int yyerror(char *s);

	FILE *arq;
	FILE *arqMsg;

	int ctrState;
	int aux, auxState, auxTimer, auxRecv, firstRecv;
	int TimerActions, ReceiveActions, LastState;

	//Enumerado de Tipo
	enum TIPOS { tInteiro=1, tReal, tString, tUse, tProgram, tFuncao, tEstado, tEntidade, tExp, Unknown, tEnum, tList};
	
	// Contador para identificar as estruturas das mensagens como TIPOS
	int tMsg = 20;

	char entidade[20];
	char comando[20];
	char firstState[20];
	
	char expressao[100][200]; 	/* Vetor para armazenamento temporario das expressoes */
	char expTimer[50][100]; 	/* Vetor para armazenamento temporario das expressoes do Timer */
	char expReceive[50][100]; 	/* Vetor para armazenamento temporario das expressoes do Receive */
	
	int exprTipos[10];
	int auxTipos;
	int contEnum;

	void eventosNesc();
	void geraArquivoSaida(char nome[20]);

	void INIstartDone(FILE *arq);
	void INIamStop(FILE *arq);
	void INITimer();
	void saveTimer();
	void saveReceive();
	void imprimirExpressao();
	void zerarVetor();
	void openLibrary(char nomeUse[], char nome[]);

	

#line 118 "sintatico.tab.c" /* yacc.c:339  */

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
   by #include "sintatico.tab.h".  */
#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
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
    USE = 258,
    AS = 259,
    PROGRAM = 260,
    STATE = 261,
    EXIT = 262,
    SEND = 263,
    RECV = 264,
    BROADCAST = 265,
    NEXT_STATE = 266,
    DURING = 267,
    CONST = 268,
    RECV_BROADCAST = 269,
    INTEGER = 270,
    REAL = 271,
    STRING = 272,
    LIST = 273,
    MAP = 274,
    BOOLEAN = 275,
    BACK = 276,
    FRONT = 277,
    NEXT = 278,
    SIZE = 279,
    INSERT = 280,
    IF = 281,
    ELSE = 282,
    FOR = 283,
    WHILE = 284,
    IN = 285,
    DUPLO_MAIS = 286,
    DUPLO_MENOS = 287,
    TRUE_LITERAL = 288,
    FALSE_LITERAL = 289,
    POINTER = 290,
    DUPLO_IGUAL = 291,
    DIFERENTE = 292,
    MAIOR_IGUAL = 293,
    MENOR_IGUAL = 294,
    MESSAGE_TYPE = 295,
    MESSAGE = 296,
    IDENTIFIER = 297,
    STR_LITERAL = 298,
    INT_LITERAL = 299,
    REAL_LITERAL = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 52 "sintatico.y" /* yacc.c:355  */

		char* word;
		int number_int;
		double number_real;
	

#line 211 "sintatico.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 228 "sintatico.tab.c" /* yacc.c:358  */

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
#define YYLAST   278

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  295

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      53,    54,    60,    58,    51,    59,    36,    61,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    49,
      40,    55,    39,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    52,     2,     2,     2,     2,
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
      35,    37,    38,    41,    42,    43,    44,    45,    46,    47,
      48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    84,    84,    87,    88,    88,    89,    89,    93,    94,
      95,    95,    96,    96,   100,   102,   101,   106,   107,   108,
     107,   113,   114,   113,   121,   122,   123,   127,   122,   134,
     134,   136,   140,   142,   141,   144,   143,   146,   145,   150,
     151,   153,   152,   160,   161,   162,   162,   163,   164,   168,
     169,   170,   175,   176,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   194,   197,   205,   217,   216,
     225,   224,   233,   234,   233,   237,   237,   239,   243,   243,
     243,   250,   249,   256,   257,   256,   262,   262,   267,   271,
     271,   276,   277,   277,   278,   278,   279,   279,   280,   280,
     281,   281,   282,   283,   284,   284,   284,   285,   286,   287,
     288,   289,   290,   293,   294,   297,   297,   299,   301,   303,
     305,   308,   320,   319,   325,   326,   327,   328,   331,   332,
     333,   334,   335,   336,   339,   340,   340,   341
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "USE", "AS", "PROGRAM", "STATE", "EXIT",
  "SEND", "RECV", "BROADCAST", "NEXT_STATE", "DURING", "CONST",
  "RECV_BROADCAST", "INTEGER", "REAL", "STRING", "LIST", "MAP", "BOOLEAN",
  "BACK", "FRONT", "NEXT", "SIZE", "INSERT", "IF", "ELSE", "FOR", "WHILE",
  "IN", "DUPLO_MAIS", "DUPLO_MENOS", "TRUE_LITERAL", "FALSE_LITERAL",
  "POINTER", "'.'", "DUPLO_IGUAL", "DIFERENTE", "'>'", "'<'",
  "MAIOR_IGUAL", "MENOR_IGUAL", "MESSAGE_TYPE", "MESSAGE", "IDENTIFIER",
  "STR_LITERAL", "INT_LITERAL", "REAL_LITERAL", "';'", "'{'", "','", "'}'",
  "'('", "')'", "'='", "'['", "']'", "'+'", "'-'", "'*'", "'/'", "$accept",
  "inicio", "Use", "$@1", "$@2", "EnumMess", "$@3", "$@4", "Message",
  "$@5", "IdentMsg", "$@6", "$@7", "Program", "$@8", "$@9", "StateDef",
  "$@10", "$@11", "$@12", "State", "$@13", "Const_List", "$@14", "$@15",
  "$@16", "Var_List", "$@17", "Var", "$@18", "Simple_Type", "ActionList",
  "Action", "Next_State", "Broadcast", "Send", "Recv", "$@19", "$@20",
  "During", "$@21", "$@22", "During_Recv", "$@23", "While", "$@24", "$@25",
  "For", "$@26", "If", "$@27", "$@28", "Else", "$@29", "Method_call",
  "Assignment", "$@30", "Exp", "$@31", "$@32", "$@33", "$@34", "$@35",
  "$@36", "$@37", "Incremento", "List_Func", "$@38", "SetMsg", "Entidade",
  "$@39", "ExprMat", "ExprBool", "ExpList", "$@40", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,    46,   291,   292,    62,
      60,   293,   294,   295,   296,   297,   298,   299,   300,    59,
     123,    44,   125,    40,    41,    61,    91,    93,    43,    45,
      42,    47
};
# endif

#define YYPACT_NINF -185

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-185)))

#define YYTABLE_NINF -92

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   -16,    35,    -4,     0,  -185,     5,    19,     9,    45,
    -185,    22,  -185,    -4,    37,  -185,     3,    40,  -185,    46,
      12,  -185,    65,    -4,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,    32,    48,   138,  -185,    -4,    36,    12,    -5,    52,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,     2,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,    65,  -185,    47,
     168,  -185,  -185,   168,   168,   168,  -185,    65,  -185,    67,
    -185,  -185,  -185,    59,    54,  -185,    56,   168,   168,   168,
     168,   168,  -185,  -185,    27,  -185,  -185,  -185,  -185,    55,
      63,    72,    66,    68,    69,    70,    71,  -185,   168,   138,
    -185,  -185,  -185,  -185,   -26,    64,   168,    75,    77,  -185,
    -185,    73,    74,    80,    81,    85,  -185,  -185,  -185,  -185,
    -185,    90,   101,    79,   168,  -185,  -185,  -185,  -185,   168,
     168,   168,  -185,   102,   139,    96,   100,   104,  -185,  -185,
     108,   114,    65,   111,  -185,  -185,  -185,   110,  -185,  -185,
    -185,    23,   160,    65,   101,   118,   119,   120,   125,   121,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,   139,   139,   139,
     128,  -185,  -185,  -185,    65,   133,  -185,   124,   103,   129,
     135,   136,    -2,  -185,   141,  -185,  -185,   158,   151,   159,
     103,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,   -27,   167,   172,   173,   170,  -185,  -185,   169,
     175,   171,   180,   193,  -185,  -185,  -185,  -185,   174,   181,
     182,  -185,   178,   168,   183,   168,   103,   190,   168,   160,
     191,   192,   194,   168,   184,   195,   187,   196,  -185,   188,
    -185,   198,   199,   200,   189,  -185,   201,  -185,  -185,   197,
    -185,   208,   209,   210,   207,     7,   212,   211,   103,   213,
     214,   204,   205,  -185,  -185,  -185,  -185,   206,   103,   215,
     103,   217,  -185,   219,   103,  -185,   218,  -185,   220,   221,
     216,  -185,   222,   223,  -185,  -185,   227,   103,  -185,   103,
    -185,   225,   226,  -185,  -185
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    14,     0,     1,     0,     0,     0,     0,
       8,     0,     6,    14,     0,    10,     0,     0,     2,     0,
       3,     9,    39,    14,    12,    21,     4,     7,    49,    50,
      51,     0,     0,    43,    11,    14,     0,     3,     0,     0,
     102,   103,   128,   131,   132,   133,   129,   130,    94,    96,
      98,   100,   104,   124,   125,   126,   127,    39,    48,     0,
      91,   112,   110,    91,    91,    91,    13,    39,     5,     0,
      15,   113,   114,     0,    92,    44,     0,    91,    91,    91,
      91,    91,    40,    89,    94,   109,   111,   107,   108,     0,
       0,    14,   121,     0,     0,     0,     0,   115,    91,    43,
      95,    97,    99,   101,   134,     0,    91,     0,     0,    16,
     122,     0,     0,     0,     0,     0,    93,    46,   137,   135,
     105,     0,    17,     0,    91,   120,   119,   118,   117,    91,
      91,    91,    90,     0,    32,     0,     0,     0,   136,   106,
       0,     0,    39,     0,   123,   116,    18,     0,    22,    41,
      19,     0,    24,    39,    17,     0,     0,     0,     0,     0,
      42,    20,    37,    33,    35,    25,    23,    32,    32,    32,
       0,    38,    34,    36,    39,     0,    26,     0,    91,     0,
       0,     0,     0,    72,     0,    83,    86,     0,     0,     0,
      91,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      64,    63,     0,     0,     0,     0,     0,    29,    65,     0,
       0,     0,     0,     0,    78,    27,    53,    88,     0,     0,
       0,    31,     0,    91,     0,    91,    91,     0,    91,    24,
       0,     0,     0,    91,     0,     0,     0,     0,    81,     0,
      28,     0,     0,     0,     0,    73,     0,    84,    87,     0,
      79,     0,     0,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,    30,    75,    77,    74,     0,    91,     0,
      91,     0,    68,     0,    91,    70,     0,    82,     0,     0,
       0,    66,     0,     0,    85,    80,     0,    91,    76,    91,
      67,     0,     0,    69,    71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,  -185,   -11,  -185,  -185,     1,  -185,  -185,   153,  -185,
      91,  -185,  -185,  -185,  -185,  -185,    17,  -185,  -185,  -185,
    -185,  -185,   -75,  -185,  -185,  -185,   -54,  -185,   165,  -185,
     231,  -184,  -185,  -185,  -185,  -185,    16,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,  -185,   -31,  -185,   -33,  -185,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,  -123,  -185
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    37,    20,     9,    23,    35,    10,    91,
     134,   150,   154,    18,    36,   152,   159,   170,   177,   229,
     208,   222,   142,   168,   169,   167,    32,   153,    57,    76,
      33,   189,   190,   191,   192,   193,   194,   280,   283,   195,
     209,   255,   266,   274,   196,   228,   259,   197,   249,   198,
     211,   257,   199,   212,   200,   201,   106,   202,    98,    77,
      78,    79,    80,    81,   131,    60,    61,   115,    62,    63,
     124,    64,    65,   105,   130
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      59,   136,    58,    82,    11,   206,   216,   138,   -47,    27,
      28,    29,    30,    89,    21,     1,   180,   -47,   -47,   -47,
     -47,   184,   217,   118,    34,   119,    68,    85,    83,     4,
      86,    87,    88,    71,    72,     5,    66,    73,    74,     6,
       7,     8,   237,   207,   100,   101,   102,   103,   104,    12,
      17,    75,    24,   -45,   -47,    13,   -47,   264,    71,    72,
      15,    16,    73,    74,    14,   116,    59,    19,    58,   155,
     156,   157,    38,   121,   269,    93,    94,    95,    96,    97,
      28,    29,    30,    31,   276,    25,   278,    22,   148,    67,
     282,   104,   171,   172,   173,    26,   137,   104,   139,   160,
      39,    70,    83,   291,    92,   292,    90,    99,   108,   107,
     244,   179,   180,   181,   182,   183,     7,   184,   120,   110,
     175,   111,   112,   113,   114,   122,   135,   125,   126,   185,
     186,   187,   188,   123,   127,   128,    40,    41,   129,   132,
      42,    43,    44,    45,    46,    47,   133,   140,    84,    49,
      50,    51,   141,   143,   144,   -52,    52,   146,   145,   147,
     149,    53,    54,    55,    56,   151,   158,   162,   163,   164,
     165,    40,    41,   166,   178,    42,    43,    44,    45,    46,
      47,   174,   203,    48,    49,    50,    51,   176,   204,   205,
     234,    52,   236,   -91,   210,   239,    53,    54,    55,    56,
     104,    40,    41,   213,   214,    42,    43,    44,    45,    46,
      47,   215,   218,    84,    49,    50,    51,   219,   220,   221,
     224,    52,   223,   227,   225,   230,    53,    54,    55,    56,
     226,   233,   231,   232,   235,   238,   241,   242,   245,   243,
     246,   247,   250,   254,   109,   161,   240,   258,   248,   251,
     252,   253,   256,   260,   261,   262,   263,   267,   272,   273,
     275,   268,   279,   270,   117,   271,   287,   277,   281,    69,
     284,   265,   285,   289,   288,   286,   290,   293,   294
};

static const yytype_uint16 yycheck[] =
{
      33,   124,    33,    57,     4,     7,   190,   130,     6,    20,
      15,    16,    17,    67,    13,     3,     9,    15,    16,    17,
      18,    14,    49,    49,    23,    51,    37,    60,    55,    45,
      63,    64,    65,    31,    32,     0,    35,    35,    36,    43,
      44,    45,   226,    45,    77,    78,    79,    80,    81,    49,
       5,    49,    49,    51,    52,    50,    54,    50,    31,    32,
      51,    52,    35,    36,    45,    98,    99,    45,    99,    46,
      47,    48,    40,   106,   258,    21,    22,    23,    24,    25,
      15,    16,    17,    18,   268,    45,   270,    50,   142,    53,
     274,   124,   167,   168,   169,    49,   129,   130,   131,   153,
      52,    49,    55,   287,    45,   289,    39,    51,    45,    54,
     233,     8,     9,    10,    11,    12,    44,    14,    54,    53,
     174,    53,    53,    53,    53,    50,    47,    54,    54,    26,
      27,    28,    29,    56,    54,    54,    33,    34,    53,    49,
      37,    38,    39,    40,    41,    42,    45,    45,    45,    46,
      47,    48,    13,    57,    54,    52,    53,    49,    54,    45,
      49,    58,    59,    60,    61,    55,     6,    49,    49,    49,
      45,    33,    34,    52,    50,    37,    38,    39,    40,    41,
      42,    53,    53,    45,    46,    47,    48,    54,    53,    53,
     223,    53,   225,    55,    53,   228,    58,    59,    60,    61,
     233,    33,    34,    45,    53,    37,    38,    39,    40,    41,
      42,    52,    45,    45,    46,    47,    48,    45,    45,    49,
      45,    53,    53,    30,    53,    51,    58,    59,    60,    61,
      50,    53,    51,    51,    51,    45,    45,    45,    54,    45,
      45,    54,    54,    54,    91,   154,   229,    50,    52,    51,
      51,    51,    51,    45,    45,    45,    49,    45,    54,    54,
      54,    50,    45,    50,    99,    51,    50,    52,    49,    38,
      52,   255,    52,    50,    52,    54,    49,    52,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    63,    64,    45,     0,    43,    44,    45,    67,
      70,     4,    49,    50,    45,    51,    52,     5,    75,    45,
      66,    67,    50,    68,    49,    45,    49,    64,    15,    16,
      17,    18,    88,    92,    67,    69,    76,    65,    40,    52,
      33,    34,    37,    38,    39,    40,    41,    42,    45,    46,
      47,    48,    53,    58,    59,    60,    61,    90,   117,   119,
     127,   128,   130,   131,   133,   134,    67,    53,    64,    92,
      49,    31,    32,    35,    36,    49,    91,   121,   122,   123,
     124,   125,    88,    55,    45,   119,   119,   119,   119,    88,
      39,    71,    45,    21,    22,    23,    24,    25,   120,    51,
     119,   119,   119,   119,   119,   135,   118,    54,    45,    70,
      53,    53,    53,    53,    53,   129,   119,    90,    49,    51,
      54,   119,    50,    56,   132,    54,    54,    54,    54,    53,
     136,   126,    49,    45,    72,    47,   135,   119,   135,   119,
      45,    13,    84,    57,    54,    54,    49,    45,    88,    49,
      73,    55,    77,    89,    74,    46,    47,    48,     6,    78,
      88,    72,    49,    49,    49,    45,    52,    87,    85,    86,
      79,    84,    84,    84,    53,    88,    54,    80,    50,     8,
       9,    10,    11,    12,    14,    26,    27,    28,    29,    93,
      94,    95,    96,    97,    98,   101,   106,   109,   111,   114,
     116,   117,   119,    53,    53,    53,     7,    45,    82,   102,
      53,   112,   115,    45,    53,    52,    93,    49,    45,    45,
      45,    49,    83,    53,    45,    53,    50,    30,   107,    81,
      51,    51,    51,    53,   119,    51,   119,    93,    45,   119,
      78,    45,    45,    45,   135,    54,    45,    54,    52,   110,
      54,    51,    51,    51,    54,   103,    51,   113,    50,   108,
      45,    45,    45,    49,    50,    98,   104,    45,    50,    93,
      50,    51,    54,    54,   105,    54,    93,    52,    93,    45,
      99,    49,    93,   100,    52,    52,    54,    50,    52,    50,
      49,    93,    93,    52,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    65,    64,    66,    64,    67,    67,
      68,    67,    69,    67,    70,    71,    70,    72,    73,    74,
      72,    76,    77,    75,    78,    79,    80,    81,    78,    83,
      82,    82,    84,    85,    84,    86,    84,    87,    84,    88,
      88,    89,    88,    90,    90,    91,    90,    90,    90,    92,
      92,    92,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    96,    97,    99,    98,
     100,    98,   102,   103,   101,   105,   104,   104,   107,   108,
     106,   110,   109,   112,   113,   111,   115,   114,   116,   118,
     117,   119,   120,   119,   121,   119,   122,   119,   123,   119,
     124,   119,   119,   119,   125,   126,   119,   119,   119,   119,
     119,   119,   119,   127,   127,   129,   128,   128,   128,   128,
     128,   130,   132,   131,   133,   133,   133,   133,   134,   134,
     134,   134,   134,   134,   135,   136,   135,   135
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     0,     7,     0,     5,     1,     3,
       0,     4,     0,     5,     0,     0,     8,     0,     0,     0,
       6,     0,     0,    13,     0,     0,     0,     0,    12,     0,
       6,     2,     0,     0,     7,     0,     7,     0,     7,     0,
       3,     0,    11,     0,     2,     0,     4,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     9,    11,     0,    12,
       0,    12,     0,     0,     7,     0,     4,     1,     0,     0,
       9,     0,     8,     0,     0,     9,     0,     5,     2,     0,
       5,     0,     0,     4,     0,     3,     0,     3,     0,     3,
       0,     3,     1,     1,     0,     0,     6,     2,     2,     2,
       1,     2,     1,     2,     2,     0,     7,     5,     5,     5,
       5,     3,     0,     7,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     2
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
        case 4:
#line 88 "sintatico.y" /* yacc.c:1646  */
    { setId((yyvsp[-3].word), tUse); openLibrary((yyvsp[-3].word),(yyvsp[-1].word)); }
#line 1515 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 89 "sintatico.y" /* yacc.c:1646  */
    { setId((yyvsp[-1].word), tUse); openLibrary((yyvsp[-1].word),(yyvsp[-1].word)); }
#line 1521 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 95 "sintatico.y" /* yacc.c:1646  */
    { setEnum((yyvsp[-1].word)); }
#line 1527 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 96 "sintatico.y" /* yacc.c:1646  */
    { setEnum((yyvsp[-2].word)); }
#line 1533 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 102 "sintatico.y" /* yacc.c:1646  */
    { setId((yyvsp[-4].word), tMsg++); printExpMsg(arqMsg, (yyvsp[-4].word), expressao, aux); aux=0; }
#line 1539 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 107 "sintatico.y" /* yacc.c:1646  */
    {setMessage((yyvsp[-2].word), (yyvsp[-1].word)); }
#line 1545 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 108 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++]," "); }
#line 1551 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 113 "sintatico.y" /* yacc.c:1646  */
    { geraArquivoSaida((yyvsp[0].word)); aux = 0; }
#line 1557 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 114 "sintatico.y" /* yacc.c:1646  */
    {imprimirExpressao();}
#line 1563 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 116 "sintatico.y" /* yacc.c:1646  */
    { printExit(arq); printStates(arq); eventosNesc(); 
		fprintf(arq,"\n}"); printf("\nCódigo em nesC gerado com sucesso!\n");}
#line 1570 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 122 "sintatico.y" /* yacc.c:1646  */
    { storeState((yyvsp[0].word)); sprintf(expressao[aux++],"\n\tvoid state_%s(", (yyvsp[0].word)); }
#line 1576 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 123 "sintatico.y" /* yacc.c:1646  */
    { setState((yyvsp[-4].word), exprTipos); 
					if(strcmp(firstState,"")==0){strcpy(firstState, (yyvsp[-4].word));} 
	 				ctrState++; sprintf(expressao[aux++],"){");
					sprintf(expressao[aux++],"\n\t\tcontrolState = %d;\n", ctrState); }
#line 1585 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 127 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\t}\n");   
	 				if(TimerActions==1){saveTimer(); sprintf(expressao[aux++],"\n}\n");TimerActions=0;} 
					aux = storeExpState(expressao, aux); }
#line 1593 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 134 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\tstate_%s(", (yyvsp[0].word));  }
#line 1599 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 135 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],");\n"); }
#line 1605 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 136 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\tstate_exit();\n"); }
#line 1611 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 142 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\tconst int %s = %d;\n", (yyvsp[-3].word), (yyvsp[-1].number_int)); setId((yyvsp[-3].word), tInteiro); }
#line 1617 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 144 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\tconst double %s = %.2f;\n", (yyvsp[-3].word), (yyvsp[-1].number_real)); setId((yyvsp[-3].word), tReal); }
#line 1623 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 146 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\tconst char %s[20] = sprintf(%s; \"%s\");\n", (yyvsp[-3].word), (yyvsp[-3].word), (yyvsp[-1].word)); setId((yyvsp[-3].word), tString); }
#line 1629 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 153 "sintatico.y" /* yacc.c:1646  */
    {setList((yyvsp[-4].word), exprTipos[auxTipos-1], (yyvsp[-2].number_int)); 
	 	 exprTipos[auxTipos] =  exprTipos[auxTipos] + tList; 
	 	 sprintf(expressao[aux++],"%s[%d];\n", (yyvsp[-4].word), (yyvsp[-2].number_int)); }
#line 1637 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 161 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"%s;\n", (yyvsp[-1].word)); setId((yyvsp[-1].word),  exprTipos[auxTipos-1]); }
#line 1643 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 162 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"%s, ", (yyvsp[0].word));  setId((yyvsp[0].word), exprTipos[auxTipos-1]); }
#line 1649 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 163 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"%s", (yyvsp[0].word));  setId((yyvsp[0].word), exprTipos[auxTipos-1]); }
#line 1655 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 168 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\tint "); exprTipos[auxTipos++] = tInteiro; }
#line 1661 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 169 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\tdouble ");  exprTipos[auxTipos++] = tReal; }
#line 1667 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 170 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\tchar[30] ");  exprTipos[auxTipos++] = tString; }
#line 1673 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 198 "sintatico.y" /* yacc.c:1646  */
    {//setSend($3, getTypeMessage($7), $7);
 //sprintf(expressao[aux++],"\tsend(%s, %s, %s, 0);\n", $3, $7, $5);
sprintf(expressao[aux++],"\tcall AMSend.send(AM_BROADCAST_ADDR, &pkt, sizeof(%s));\n",getTypeMessage((yyvsp[-2].word)));
}
#line 1682 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 206 "sintatico.y" /* yacc.c:1646  */
    {//setSend($3, getTypeMessage($9), $9);
sprintf(expressao[aux++],"auxSend = 0;\n");
 sprintf(expressao[aux++],"\twhile(%s[auxSend]!=0){\n", (yyvsp[-4].word)); 
 sprintf(expressao[aux++],"\t\tcall AMSend.send(%s[auxSend], &pkt, sizeof(%s));\n",(yyvsp[-4].word), getTypeMessage((yyvsp[-2].word)));
 sprintf(expressao[aux++],"\t\tauxSend++;\n");
 sprintf(expressao[aux++],"\t}\n");
}
#line 1694 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 217 "sintatico.y" /* yacc.c:1646  */
    {aux = storeExpState(expressao, aux); ReceiveActions=1;
	if(firstRecv==0) {sprintf(expressao[aux++],"\t\tif(controlState == %d){\n", ctrState); firstRecv++;}
	else sprintf(expressao[aux++],"\t}else if(controlState == %d){\n", ctrState); 
	sprintf(expressao[aux++],"\t\t%s* %s = (%s*)payload;\n", getTypeMessage((yyvsp[-1].word)), (yyvsp[-1].word), getTypeMessage((yyvsp[-1].word)) );}
#line 1703 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 222 "sintatico.y" /* yacc.c:1646  */
    { saveReceive(); }
#line 1709 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 225 "sintatico.y" /* yacc.c:1646  */
    {aux = storeExpState(expressao, aux); ReceiveActions=1;
	if(firstRecv==0) {sprintf(expressao[aux++],"\tif(controlState == %d){\n", ctrState); firstRecv++;}
	else  sprintf(expressao[aux++],"\t} else if(controlState == %d){\n", ctrState);
	sprintf(expressao[aux++],"\t\t%s* %s = (%s*)payload;\n", getTypeMessage((yyvsp[-1].word)), (yyvsp[-1].word), getTypeMessage((yyvsp[-1].word)) ); }
#line 1718 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 230 "sintatico.y" /* yacc.c:1646  */
    {saveReceive(); }
#line 1724 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 233 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\tcall Timer.startOneShot("); TimerActions = 1; }
#line 1730 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 234 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],");");}
#line 1736 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 237 "sintatico.y" /* yacc.c:1646  */
    { aux = storeExpState(expressao, aux); sprintf(expressao[aux++],"\tif(controlState == %d){\n", ctrState); }
#line 1742 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 243 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\twhile( "); }
#line 1748 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 243 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"){\n "); }
#line 1754 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 244 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\t}\n"); }
#line 1760 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 250 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\tfor (int x=0; x < compList.size(%s); x++){\n", (yyvsp[0].word));
		 sprintf(expressao[aux++],"\t\tint %s = %s[x];\n", (yyvsp[-2].word), (yyvsp[0].word)); }
#line 1767 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 253 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\t}\n"); }
#line 1773 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 256 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\tif( "); }
#line 1779 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 257 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++]," ){\n"); }
#line 1785 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 259 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\n\t}\n");}
#line 1791 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 262 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\telse {\n"); }
#line 1797 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 264 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\t}\n"); }
#line 1803 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 267 "sintatico.y" /* yacc.c:1646  */
    {  sprintf(expressao[aux++],";\n"); }
#line 1809 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 271 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++]," = "); }
#line 1815 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 272 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],";\n"); }
#line 1821 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 277 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"%s.", (yyvsp[-1].word)); }
#line 1827 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 278 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"%s", (yyvsp[0].word)); exprTipos[auxTipos++]=getIdentInt((yyvsp[0].word), 0); }
#line 1833 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 279 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"%s", (yyvsp[0].word)); exprTipos[auxTipos++]=tString; }
#line 1839 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 280 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"%d", (yyvsp[0].number_int)); exprTipos[auxTipos++]=tInteiro; }
#line 1845 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 281 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"%f", (yyvsp[0].number_real)); exprTipos[auxTipos++]=tReal; }
#line 1851 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 282 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"TRUE"); }
#line 1857 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 283 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"FALSE"); }
#line 1863 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 284 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"( "); }
#line 1869 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 284 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++]," )"); }
#line 1875 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 293 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"%s++", (yyvsp[-1].word)); }
#line 1881 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 294 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"%s--", (yyvsp[-1].word)); }
#line 1887 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 297 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"\tcall compList.insert(%s, ", (yyvsp[-2].word)); }
#line 1893 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 298 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],")"); setCommand("compList", "size", tInteiro, exprTipos); }
#line 1899 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 300 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"call compList.size(%s)", (yyvsp[-4].word));  setCommand("compList", "size", tInteiro, exprTipos); }
#line 1905 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 302 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"%s[x]", (yyvsp[-4].word)); setCommand("compList", "next", tInteiro, 0); }
#line 1911 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 304 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"%s[%d]", (yyvsp[-4].word), getIdentInt((yyvsp[-4].word), 3)); setCommand("compList", "front", tInteiro, 0);}
#line 1917 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 305 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"%s[0] =", (yyvsp[-4].word)); setCommand((yyvsp[-4].word), "back", tInteiro, 0); }
#line 1923 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 309 "sintatico.y" /* yacc.c:1646  */
    {if(ReceiveActions==0){
		char structMsg[120];
		sprintf(structMsg,"\t%s* %s = (%s*)(call Packet.getPayload(&pkt, sizeof(%s)));\n",getTypeMessage((yyvsp[-2].word)), (yyvsp[-2].word), 			getTypeMessage((yyvsp[-2].word)), getTypeMessage((yyvsp[-2].word))); 
		storeMsgHeader(structMsg);
	}
	
	sprintf(expressao[aux++],"%s->%s", (yyvsp[-2].word), (yyvsp[0].word)); }
#line 1935 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 320 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"call %s.%s(", (yyvsp[-3].word), (yyvsp[-1].word)); zerarVetor(); }
#line 1941 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 321 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++]," )"); setCommand((yyvsp[-6].word), (yyvsp[-4].word), 0, exprTipos); 
	}
#line 1948 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 325 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++]," + "); }
#line 1954 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 326 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++]," - "); }
#line 1960 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 327 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++]," * "); }
#line 1966 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 328 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++]," / "); }
#line 1972 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 331 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++]," == "); }
#line 1978 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 332 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"<="); }
#line 1984 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 333 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],">="); }
#line 1990 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 334 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"!="); }
#line 1996 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 335 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],">"); }
#line 2002 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 336 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],"<"); }
#line 2008 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 340 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],", "); }
#line 2014 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 341 "sintatico.y" /* yacc.c:1646  */
    { sprintf(expressao[aux++],";\n"); }
#line 2020 "sintatico.tab.c" /* yacc.c:1646  */
    break;


#line 2024 "sintatico.tab.c" /* yacc.c:1646  */
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
#line 344 "sintatico.y" /* yacc.c:1906  */

	/* Método que incializa os cabeçalahos dos eventos */
	void eventosNesc(){
		INIboot(arq, firstState);
		
		INITimer();
		printReceive(arq);
		
		INIstartDone(arq);
		//INIamStop(arq);
	}

	/* Método que imprime as expressoes */
	void imprimirExpressao(){
		for(int i=0; i<aux; i++) {
			fprintf(arq,"%s",expressao[i]);
		}
		aux = 0;
	}

	/*Zerar vetores*/
	void zerarVetor(){
		for(int i=0; i<aux; i++){
			exprTipos[i] = 0;
		}
		auxTipos = 0;
	}

	/* Método que armazena as expressoes do Timer */
	void saveTimer(){
		
		while(strcmp(expTimer[auxTimer],"")!=0){
			auxTimer++;
		}
		if(auxTimer==0){
			sprintf(expTimer[auxTimer],"\tif(controlState == %d){\n", ctrState);
		} else{	
			sprintf(expTimer[auxTimer],"\telse if(controlState == %d){\n", ctrState);
		}
		for(int i=0; i<aux; i++) {
			sprintf(expTimer[auxTimer],"%s %s",expTimer[auxTimer], expressao[i]);
			//strcpy(expTimer[auxTimer++],expressao[i]);
		}
		aux = 0;
	}

	/* Método que imprime as expressoes do Timer */
	void INITimer(){
		//printf("aux timer: %d", auxTimer);
		fprintf(arq,"\n//timer fired\nevent void Timer.fired(){\n");
		for(int i=0; i<=auxTimer; i++) {
			fprintf(arq,"%s",expTimer[i]);
		}
		fprintf(arq,"}\n");
	}

	/* Método que armazena as expressoes do Receive */
	void saveReceive(){
		imputReceive(expressao, aux);
		ReceiveActions=0;		
		aux = 0;
	}


	void openLibrary(char nome[35], char nomeUse[35]) {

		FILE *arquivo;

		char endereco[35];
		sprintf(endereco, "./output/%s.nc", nome);
		arquivo = fopen(endereco, "r");

		if(arquivo != NULL){
			setCompName(nome, nomeUse);
			//printf("\nA interface da bilioteca %s já existe.\n", nome);
		} else {
			setCompName(nome, nomeUse);
			//printf("\nCriando arquivo do Componente %s\n", nome);
		}
	}

	void geraArquivoSaida(char nome[20]){
		char nomeArq[20];
		sprintf(nomeArq, "./output/%s.nc", nome);
		arq = fopen(nomeArq,"w");
		initModulo(arq, nome);
		imprimirExpressao();
	}


	int main() {
		
		arqMsg = fopen("./output/Complements.h","w");
		fprintf(arqMsg,"\n#ifndef COMPLEMENTS_H\n#define COMPLEMENTS_H\n");
		fprintf(arqMsg,"\nenum {\n\tAM = 6,\n\tTIMER_PERIOD_MILLI = 150\n};\n");

		yyparse();

		fprintf(arqMsg,"\n#endif");
		gerarInterfaces();

	}

	int yyerror(char *s) {
		printf("Syntax Error on line:\n %s\n", s);
		return 0;
	}
