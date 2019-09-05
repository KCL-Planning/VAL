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
#line 17 "pddl+.yacc" /* yacc.c:339  */

/*
Error reporting:
Intention is to provide error token on most bracket expressions,
so synchronisation can occur on next CLOSE_BRAC.
Hence error should be generated for innermost expression containing error.
Expressions which cause errors return a NULL values, and parser
always attempts to carry on.
This won't behave so well if CLOSE_BRAC is missing.

Naming conventions:
Generally, the names should be similar to the PDDL2.1 spec.
During development, they have also been based on older PDDL specs,
older PDDL+ and TIM parsers, and this shows in places.

All the names of fields in the semantic value type begin with t_
Corresponding categories in the grammar begin with c_
Corresponding classes have no prefix.

PDDL grammar       yacc grammar      type of corresponding semantic val.

thing+             c_things          thing_list
(thing+)           c_thing_list      thing_list

*/

#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <ctype.h>

// This is now copied locally to avoid relying on installation
// of flex++.

//#include "FlexLexer.h"
//#include <FlexLexer.h>

#include "ptree.h"
#include "parse_error.h"

#define YYDEBUG 1

int yyerror(char *);

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", ((char *)msgid))
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) ((char *) msgid)
# endif
#endif

extern int yylex();

using namespace VAL;


#line 128 "pddl+.cpp" /* yacc.c:339  */

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
    OPEN_BRAC = 258,
    CLOSE_BRAC = 259,
    MODULES = 260,
    OPEN_SQ = 261,
    CLOSE_SQ = 262,
    DOT = 263,
    CLASSES = 264,
    CLASS = 265,
    DEFINE = 266,
    PDDLDOMAIN = 267,
    REQS = 268,
    EQUALITY = 269,
    STRIPS = 270,
    ADL = 271,
    NEGATIVE_PRECONDITIONS = 272,
    TYPING = 273,
    DISJUNCTIVE_PRECONDS = 274,
    EXT_PRECS = 275,
    UNIV_PRECS = 276,
    QUANT_PRECS = 277,
    COND_EFFS = 278,
    FLUENTS = 279,
    OBJECTFLUENTS = 280,
    NUMERICFLUENTS = 281,
    ACTIONCOSTS = 282,
    TIME = 283,
    DURATIVE_ACTIONS = 284,
    DURATION_INEQUALITIES = 285,
    CONTINUOUS_EFFECTS = 286,
    DERIVED_PREDICATES = 287,
    TIMED_INITIAL_LITERALS = 288,
    PREFERENCES = 289,
    CONSTRAINTS = 290,
    ACTION = 291,
    PROCESS = 292,
    EVENT = 293,
    DURATIVE_ACTION = 294,
    DERIVED = 295,
    CONSTANTS = 296,
    PREDS = 297,
    FUNCTIONS = 298,
    TYPES = 299,
    ARGS = 300,
    PRE = 301,
    CONDITION = 302,
    PREFERENCE = 303,
    START_PRE = 304,
    END_PRE = 305,
    EFFECTS = 306,
    INITIAL_EFFECT = 307,
    FINAL_EFFECT = 308,
    INVARIANT = 309,
    DURATION = 310,
    AT_START = 311,
    AT_END = 312,
    OVER_ALL = 313,
    AND = 314,
    OR = 315,
    EXISTS = 316,
    FORALL = 317,
    IMPLY = 318,
    NOT = 319,
    WHEN = 320,
    WHENEVER = 321,
    EITHER = 322,
    PROBLEM = 323,
    FORDOMAIN = 324,
    INITIALLY = 325,
    OBJECTS = 326,
    GOALS = 327,
    EQ = 328,
    LENGTH = 329,
    SERIAL = 330,
    PARALLEL = 331,
    METRIC = 332,
    MINIMIZE = 333,
    MAXIMIZE = 334,
    HASHT = 335,
    DURATION_VAR = 336,
    TOTAL_TIME = 337,
    INCREASE = 338,
    DECREASE = 339,
    SCALE_UP = 340,
    SCALE_DOWN = 341,
    ASSIGN = 342,
    GREATER = 343,
    GREATEQ = 344,
    LESS = 345,
    LESSEQ = 346,
    Q = 347,
    COLON = 348,
    NUMBER = 349,
    ALWAYS = 350,
    SOMETIME = 351,
    WITHIN = 352,
    ATMOSTONCE = 353,
    SOMETIMEAFTER = 354,
    SOMETIMEBEFORE = 355,
    ALWAYSWITHIN = 356,
    HOLDDURING = 357,
    HOLDAFTER = 358,
    ISVIOLATED = 359,
    AFTER = 360,
    BOGUS = 361,
    CONTROL = 362,
    SUPPLYDEMAND = 363,
    SUPPLYDEMAND_REQ = 364,
    NAMETAG = 365,
    NAME = 366,
    FUNCTION_SYMBOL = 367,
    INTVAL = 368,
    FLOATVAL = 369,
    AT_TIME = 370,
    HYPHEN = 371,
    PLUS = 372,
    MUL = 373,
    DIV = 374,
    UMINUS = 375
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 79 "pddl+.yacc" /* yacc.c:355  */

    parse_category* t_parse_category;

    effect_lists* t_effect_lists;
    effect* t_effect;
    simple_effect* t_simple_effect;
    cond_effect*   t_cond_effect;
    forall_effect* t_forall_effect;
    timed_effect* t_timed_effect;
	supplied_effect* t_supplied_effect;

    quantifier t_quantifier;
    metric_spec*  t_metric;
    optimization t_optimization;

    symbol* t_symbol;
    var_symbol*   t_var_symbol;
    pddl_type*    t_type;
    pred_symbol*  t_pred_symbol;
    func_symbol*  t_func_symbol;
    const_symbol* t_const_symbol;
    class_symbol* t_class;

    parameter_symbol_list* t_parameter_symbol_list;
    var_symbol_list* t_var_symbol_list;
    const_symbol_list* t_const_symbol_list;
    pddl_type_list* t_type_list;

    proposition* t_proposition;
    pred_decl* t_pred_decl;
    pred_decl_list* t_pred_decl_list;
    func_decl* t_func_decl;
    func_decl_list* t_func_decl_list;

    goal* t_goal;
    con_goal * t_con_goal;
    goal_list* t_goal_list;

    func_term* t_func_term;
    assignment* t_assignment;
    expression* t_expression;
    num_expression* t_num_expression;
    assign_op t_assign_op;
    comparison_op t_comparison_op;

    structure_def* t_structure_def;
    structure_store* t_structure_store;

    action* t_action_def;
    event* t_event_def;
    process* t_process_def;
    durative_action* t_durative_action_def;
    derivation_rule* t_derivation_rule;

    problem* t_problem;
    length_spec* t_length_spec;

    domain* t_domain;

    pddl_req_flag t_pddl_req_flag;

    plan* t_plan;
    plan_step* t_step;

    int ival;
    double fval;

    char* cp;
    int t_dummy;

    var_symbol_table * vtab;

  class_def * t_class_def;
  //  classes_list* t_classes;


#line 363 "pddl+.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 380 "pddl+.cpp" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1015

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  134
/* YYNRULES -- Number of rules.  */
#define YYNRULES  365
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  845

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   375

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   262,   262,   263,   264,   268,   274,   281,   282,   283,
     284,   286,   288,   290,   291,   294,   298,   301,   303,   305,
     306,   310,   317,   324,   325,   330,   332,   337,   339,   347,
     355,   357,   365,   370,   372,   376,   378,   385,   385,   388,
     401,   410,   419,   426,   432,   439,   441,   447,   456,   466,
     471,   472,   476,   477,   485,   492,   501,   507,   509,   511,
     518,   524,   528,   532,   536,   541,   548,   553,   555,   559,
     561,   565,   578,   580,   582,   584,   587,   591,   597,   599,
     605,   611,   612,   614,   616,   625,   626,   627,   628,   629,
     633,   634,   638,   640,   642,   649,   650,   651,   653,   657,
     659,   667,   669,   677,   682,   687,   690,   697,   698,   703,
     705,   707,   711,   715,   721,   725,   729,   735,   737,   745,
     750,   756,   757,   761,   762,   766,   768,   770,   777,   778,
     779,   781,   786,   788,   790,   792,   794,   799,   805,   811,
     816,   817,   821,   822,   824,   825,   826,   830,   832,   834,
     836,   841,   843,   846,   849,   855,   856,   857,   865,   869,
     872,   876,   881,   888,   893,   898,   903,   908,   910,   912,
     914,   916,   921,   923,   925,   927,   929,   931,   932,   933,
     937,   939,   941,   947,   948,   951,   954,   956,   959,   976,
     978,   980,   986,   987,   988,   989,   990,  1002,  1009,  1011,
    1015,  1016,  1020,  1022,  1024,  1026,  1030,  1035,  1037,  1039,
    1041,  1048,  1050,  1055,  1057,  1061,  1066,  1068,  1073,  1075,
    1078,  1080,  1082,  1084,  1086,  1088,  1090,  1092,  1094,  1096,
    1098,  1100,  1107,  1109,  1114,  1116,  1120,  1122,  1125,  1128,
    1131,  1134,  1140,  1142,  1147,  1149,  1159,  1166,  1173,  1178,
    1183,  1188,  1190,  1197,  1199,  1206,  1208,  1215,  1217,  1224,
    1225,  1229,  1230,  1231,  1232,  1233,  1234,  1237,  1246,  1252,
    1261,  1272,  1279,  1290,  1296,  1306,  1312,  1314,  1317,  1335,
    1342,  1344,  1346,  1350,  1352,  1357,  1360,  1364,  1366,  1368,
    1370,  1375,  1380,  1385,  1386,  1388,  1389,  1391,  1393,  1394,
    1395,  1396,  1397,  1399,  1402,  1405,  1406,  1407,  1409,  1418,
    1421,  1424,  1426,  1428,  1430,  1432,  1434,  1435,  1441,  1445,
    1450,  1462,  1469,  1470,  1471,  1472,  1473,  1475,  1477,  1478,
    1481,  1484,  1487,  1490,  1494,  1496,  1503,  1506,  1510,  1517,
    1518,  1523,  1524,  1525,  1526,  1527,  1529,  1533,  1534,  1535,
    1536,  1540,  1541,  1546,  1547,  1553,  1556,  1558,  1561,  1565,
    1569,  1575,  1579,  1585,  1593,  1594
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OPEN_BRAC", "CLOSE_BRAC", "MODULES",
  "OPEN_SQ", "CLOSE_SQ", "DOT", "CLASSES", "CLASS", "DEFINE", "PDDLDOMAIN",
  "REQS", "EQUALITY", "STRIPS", "ADL", "NEGATIVE_PRECONDITIONS", "TYPING",
  "DISJUNCTIVE_PRECONDS", "EXT_PRECS", "UNIV_PRECS", "QUANT_PRECS",
  "COND_EFFS", "FLUENTS", "OBJECTFLUENTS", "NUMERICFLUENTS", "ACTIONCOSTS",
  "TIME", "DURATIVE_ACTIONS", "DURATION_INEQUALITIES",
  "CONTINUOUS_EFFECTS", "DERIVED_PREDICATES", "TIMED_INITIAL_LITERALS",
  "PREFERENCES", "CONSTRAINTS", "ACTION", "PROCESS", "EVENT",
  "DURATIVE_ACTION", "DERIVED", "CONSTANTS", "PREDS", "FUNCTIONS", "TYPES",
  "ARGS", "PRE", "CONDITION", "PREFERENCE", "START_PRE", "END_PRE",
  "EFFECTS", "INITIAL_EFFECT", "FINAL_EFFECT", "INVARIANT", "DURATION",
  "AT_START", "AT_END", "OVER_ALL", "AND", "OR", "EXISTS", "FORALL",
  "IMPLY", "NOT", "WHEN", "WHENEVER", "EITHER", "PROBLEM", "FORDOMAIN",
  "INITIALLY", "OBJECTS", "GOALS", "EQ", "LENGTH", "SERIAL", "PARALLEL",
  "METRIC", "MINIMIZE", "MAXIMIZE", "HASHT", "DURATION_VAR", "TOTAL_TIME",
  "INCREASE", "DECREASE", "SCALE_UP", "SCALE_DOWN", "ASSIGN", "GREATER",
  "GREATEQ", "LESS", "LESSEQ", "Q", "COLON", "NUMBER", "ALWAYS",
  "SOMETIME", "WITHIN", "ATMOSTONCE", "SOMETIMEAFTER", "SOMETIMEBEFORE",
  "ALWAYSWITHIN", "HOLDDURING", "HOLDAFTER", "ISVIOLATED", "AFTER",
  "BOGUS", "CONTROL", "SUPPLYDEMAND", "SUPPLYDEMAND_REQ", "NAMETAG",
  "NAME", "FUNCTION_SYMBOL", "INTVAL", "FLOATVAL", "AT_TIME", "HYPHEN",
  "PLUS", "MUL", "DIV", "UMINUS", "$accept", "mystartsymbol", "c_domain",
  "c_preamble", "c_domain_name", "c_new_class", "c_class", "c_classes",
  "c_class_seq", "c_domain_require_def", "c_reqs", "c_pred_decls",
  "c_pred_decl", "c_new_pred_symbol", "c_pred_symbol",
  "c_init_pred_symbol", "c_func_decls", "c_func_decl", "c_ntype",
  "c_new_func_symbol", "c_typed_var_list", "c_control_params_list",
  "c_var_symbol_list", "c_typed_consts", "c_const_symbols",
  "c_new_const_symbols", "c_typed_types", "c_parameter_symbols",
  "c_declaration_var_symbol", "c_var_symbol", "c_const_symbol",
  "c_new_const_symbol", "c_either_type", "c_new_primitive_type",
  "c_primitive_type", "c_new_primitive_types", "c_primitive_types",
  "c_init_els", "c_supply_demand", "c_demand", "c_timed_initial_literal",
  "c_effects", "c_effect", "c_a_effect", "c_p_effect", "c_p_effects",
  "c_conj_effect", "c_da_effect", "c_da_effects", "c_timed_effect",
  "c_cts_only_timed_effect", "c_da_cts_only_effect",
  "c_da_cts_only_effects", "c_a_effect_da", "c_p_effect_da",
  "c_p_effects_da", "c_f_assign_da", "c_proc_effect", "c_proc_effects",
  "c_f_exp_da", "c_binary_expr_da", "c_duration_constraint", "c_d_op",
  "c_d_value", "c_duration_constraints", "c_neg_simple_effect",
  "c_pos_simple_effect", "c_init_neg_simple_effect",
  "c_init_pos_simple_effect", "c_forall_effect", "c_cond_effect",
  "c_assignment", "c_f_exp", "c_f_exp_t", "c_number", "c_f_head",
  "c_ground_f_head", "c_comparison_op", "c_pre_goal_descriptor",
  "c_pref_con_goal", "c_pref_goal", "c_pref_con_goal_list",
  "c_pref_goal_descriptor", "c_constraint_goal_list", "c_constraint_goal",
  "c_name_or_goal_descriptor", "c_goal_descriptor",
  "c_pre_goal_descriptor_list", "c_goal_list", "c_forall", "c_exists",
  "c_proposition", "c_derived_proposition", "c_init_proposition",
  "c_predicates", "c_functions_def", "c_constraints_def",
  "c_constraints_probdef", "c_structure_defs", "c_structure_def",
  "c_class_def", "c_rule_head", "c_derivation_rule", "c_action_def",
  "c_event_def", "c_process_def", "c_control", "c_durative_action_def",
  "c_da_def_body", "c_da_gd", "c_da_gds", "c_timed_gd", "c_args_head",
  "c_require_key", "c_domain_constants", "c_type_names", "c_problem",
  "c_problem_body", "c_objects", "c_initial_state", "c_goals",
  "c_goal_spec", "c_metric_spec", "c_length_spec", "c_optimization",
  "c_ground_f_exp", "c_binary_ground_f_exp", "c_binary_ground_f_pexps",
  "c_binary_ground_f_mexps", "c_plan", "c_step_t_d", "c_step_d", "c_step",
  "c_float", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375
};
# endif

#define YYPACT_NINF -725

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-725)))

#define YYTABLE_NINF -85

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      87,    56,   104,    81,  -725,  -725,    32,    85,    63,    63,
    -725,    37,  -725,  -725,  -725,  -725,   178,   108,    14,    70,
      32,    32,    94,   164,   205,   100,    49,  -725,   812,   210,
     218,   218,   218,   218,   218,   292,  -725,  -725,  -725,  -725,
    -725,  -725,  -725,   218,   218,  -725,   223,    94,   277,  -725,
     294,  -725,   297,   195,   206,   439,   304,    51,    55,    58,
      59,  -725,   217,   361,   396,  -725,   320,  -725,  -725,  -725,
    -725,  -725,  -725,   331,  -725,  -725,  -725,  -725,  -725,  -725,
    -725,   343,  -725,   195,   379,  -725,   409,   392,   550,   413,
     656,   416,   429,   404,   433,   404,   437,   404,   443,   404,
    -725,   447,   378,   217,   485,    60,   496,   500,   502,   309,
     512,   -32,   -31,   505,   444,  -725,  -725,   479,   522,  -725,
    -725,  -725,  -725,  -725,  -725,  -725,  -725,  -725,  -725,  -725,
    -725,  -725,  -725,  -725,  -725,  -725,  -725,  -725,  -725,  -725,
    -725,  -725,  -725,  -725,  -725,  -725,  -725,  -725,   505,   526,
    -725,   505,   505,   281,   505,   505,   505,   281,   281,   281,
      33,   438,   528,  -725,  -725,  -725,   537,  -725,   560,  -725,
     583,  -725,   587,  -725,    50,  -725,  -725,   549,  -725,   511,
    -725,  -725,  -725,    68,  -725,  -725,  -725,  -725,    50,  -725,
    -725,  -725,   511,   708,   592,  -725,   503,  -725,   620,   402,
    -725,   633,   643,  -725,  -725,   505,   650,   505,   505,   505,
     281,   505,  -725,    33,  -725,   505,   511,   511,   511,   511,
     511,   593,  -725,   217,   217,  -725,   562,   683,   577,   694,
    -725,   511,  -725,  -725,   699,   505,   505,  -725,   505,   505,
     114,  -725,  -725,  -725,  -725,  -725,    73,   709,   711,  -725,
     707,  -725,  -725,  -725,  -725,  -725,   712,  -725,   713,   724,
     505,   505,   726,   727,   729,   740,   742,   743,   744,   745,
    -725,  -725,  -725,  -725,   511,  -725,    50,  -725,   756,  -725,
    -725,  -725,  -725,   426,   435,   505,   758,   118,   226,   652,
    -725,    73,  -725,  -725,   511,   511,   761,  -725,  -725,  -725,
     769,   771,  -725,  -725,  -725,   526,   730,   732,   733,   682,
      82,  -725,   511,   511,   674,  -725,  -725,  -725,   788,  -725,
    -725,   684,  -725,   785,  -725,    73,    73,    73,    73,   786,
    -725,   802,   803,   804,   467,   761,   761,   805,   761,   761,
     761,   761,   761,  -725,  -725,   806,   810,   505,   505,   811,
     760,  -725,  -725,  -725,  -725,   722,  -725,  -725,  -725,  -725,
     176,   224,   110,    73,    73,    73,   705,  -725,   505,   505,
     373,  -725,   217,  -725,   420,   141,   810,  -725,  -725,  -725,
    -725,  -725,  -725,  -725,  -725,  -725,   325,   767,  -725,  -725,
     772,   773,   -61,   823,  -725,  -725,  -725,  -725,   824,   831,
     832,   833,  -725,   834,   837,   853,   624,   857,  -725,   474,
     863,   714,   755,   865,  -725,  -725,     7,   866,  -725,    67,
     539,   868,   869,   870,   869,   871,   762,   334,  -725,  -725,
    -725,  -725,  -725,   248,  -725,  -725,  -725,    98,   873,   874,
    -725,   419,  -725,  -725,  -725,  -725,  -725,  -725,  -725,    79,
     875,  -725,   393,  -725,  -725,  -725,  -725,   876,  -725,   505,
     877,  -725,  -725,  -725,   543,   511,   417,   878,  -725,  -725,
    -725,  -725,  -725,  -725,   238,   879,   880,  -725,   780,   882,
     883,  -725,  -725,  -725,  -725,   795,   249,  -725,   526,   884,
    -725,   558,  -725,   511,   886,    27,   779,  -725,  -725,  -725,
    -725,   778,  -725,   888,   782,  -725,  -725,     7,     7,     7,
       7,   890,  -725,   891,  -725,  -725,  -725,   892,   407,   894,
     505,   895,  -725,  -725,    27,    27,  -725,  -725,   -61,   245,
     245,   589,   818,  -725,   897,   898,   899,  -725,  -725,  -725,
     900,   791,   901,   520,   281,   505,   630,   255,   902,  -725,
     903,   261,   269,     7,     7,     7,     7,  -725,  -725,   810,
     904,   718,   905,   907,  -725,  -725,  -725,   907,   907,  -725,
     -31,   908,   907,   511,   639,    30,    30,  -725,   819,   821,
    -725,  -725,    73,   582,  -725,  -725,   532,  -725,  -725,  -725,
    -725,   911,  -725,   912,    43,  -725,  -725,  -725,  -725,  -725,
    -725,  -725,     7,  -725,     7,  -725,  -725,   913,   834,  -725,
    -725,    27,    27,    27,    27,    27,  -725,  -725,  -725,  -725,
    -725,   914,   915,  -725,  -725,   797,  -725,   916,   917,   841,
     842,   920,  -725,   102,   505,   505,   505,  -725,   921,   923,
     923,  -725,   897,   505,    27,    27,   924,   640,   925,  -725,
     213,  -725,   927,   281,  -725,  -725,  -725,   642,    73,    73,
      73,    73,    73,  -725,   869,    19,  -725,  -725,    73,    73,
    -725,   928,   929,   930,   931,   932,   659,  -725,   434,   933,
    -725,  -725,  -725,  -725,   934,   661,   898,   936,   120,   120,
     511,   105,   873,   937,  -725,   621,   938,   927,   701,  -725,
    -725,  -725,  -725,   939,   940,   941,   942,   943,   944,    73,
     848,   945,   946,   947,  -725,  -725,  -725,  -725,  -725,  -725,
    -725,    27,    27,    27,    27,    27,  -725,  -725,  -725,  -725,
     948,   362,  -725,   949,   440,   950,   951,   952,   526,   953,
     663,   511,  -725,   954,  -725,  -725,  -725,  -725,  -725,  -725,
     955,   956,   957,   958,  -725,   675,   212,   212,   212,   212,
     212,  -725,   959,  -725,   505,    27,    27,   961,  -725,    19,
    -725,  -725,   898,   962,  -725,  -725,   963,  -725,  -725,  -725,
    -725,  -725,   747,  -725,  -725,  -725,  -725,   509,   -54,   964,
    -725,  -725,  -725,   965,   966,   967,   968,  -725,   686,   936,
      30,    30,   511,   180,   969,  -725,   911,   212,   212,   212,
     212,  -725,  -725,  -725,  -725,  -725,  -725,  -725,  -725,  -725,
     970,   971,   972,   973,  -725,   974,   212,   212,   212,   212,
    -725,  -725,  -725,   936,  -725,   975,   976,   977,   978,   979,
    -725,  -725,  -725,  -725,  -725
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     358,     0,     0,     0,     2,     3,     4,     0,   358,   358,
       1,     0,   365,   364,   355,   360,   362,     0,     0,     0,
     357,   356,    51,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,    14,   260,   266,   265,   261,
     262,   263,   264,     0,     0,    62,     0,    51,     0,   359,
       0,   321,     0,    20,     0,     0,     0,     0,     0,     0,
       0,   268,    53,     0,     0,    68,     0,     5,    13,     7,
      10,    11,    12,     0,   259,     9,     8,   363,    50,   361,
      15,     0,    16,    20,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,     0,    49,    53,     0,     0,     0,    26,     0,     0,
       0,    56,     0,     0,     0,    19,    18,     0,     0,    22,
      21,   307,   293,   294,   308,   296,   295,   297,   298,   299,
     309,   300,   301,   305,   306,   304,   303,   302,   310,   311,
     312,   313,   314,   315,   316,   317,    23,   256,     0,     0,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   255,   271,   292,     0,   275,     0,   273,
       0,   279,     0,   318,     0,    52,   252,     0,    29,    46,
     251,    25,   254,     0,   253,    33,   319,    65,     0,    67,
      30,    31,    46,     0,     0,   234,     0,   267,     0,     0,
     217,     0,     0,   183,   184,     0,     0,     0,     0,     0,
       0,     0,   233,     0,   232,     0,    46,    46,    46,    46,
      46,     0,    66,    53,    53,    28,     0,     0,    42,     0,
      39,    46,    68,    68,     0,     0,     0,   247,     0,     0,
     196,   192,   193,   194,   195,    59,     0,     0,     0,   269,
       0,   220,   218,   216,   221,   222,     0,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    48,    47,    60,    46,    27,     0,    36,     0,    55,
      54,   249,   245,     0,     0,     0,     0,     0,     0,     0,
     187,     0,   177,   179,    46,    46,   329,   223,   225,   226,
       0,     0,   229,   230,   231,     0,     0,     0,     0,   277,
       0,    45,    46,    46,    38,   236,   244,   237,     0,   235,
     248,     0,    57,    59,    59,     0,     0,     0,     0,     0,
     178,     0,     0,     0,     0,   329,   329,     0,   329,   329,
     329,   329,   329,   227,   228,     0,     0,     0,     0,     0,
       0,    64,    69,    41,    40,     0,    35,   238,    61,    58,
       0,     0,     0,     0,     0,     0,     0,   241,     0,     0,
       0,    76,    53,   332,     0,     0,     0,   322,   326,   320,
     323,   324,   325,   327,   328,   219,     0,     0,   197,   215,
       0,     0,    44,     0,    37,   186,   185,   172,     0,     0,
       0,     0,    59,     0,     0,     0,     0,     0,   206,     0,
       0,     0,     0,     0,   339,   340,     0,     0,   201,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   282,   174,
     173,   175,   176,     0,   239,   240,   258,     0,     0,     0,
     257,     0,   331,    75,    74,    73,    72,   164,   330,     0,
       0,   335,     0,   344,   191,   343,   342,     0,   333,     0,
       0,   200,   243,   215,     0,    46,     0,     0,    85,    87,
      86,    89,    88,   162,     0,     0,     0,   276,     0,     0,
       0,   160,   157,   156,   155,     0,     0,   188,     0,     0,
     212,     0,   206,    46,     0,     0,     0,    32,    76,    59,
     337,     0,   338,     0,     0,    59,    59,     0,     0,     0,
       0,     0,   334,     0,   213,   198,   242,     0,     0,     0,
       0,     0,   270,   141,     0,     0,   274,   272,    44,     0,
       0,     0,     0,   278,     0,     0,     0,   202,   204,   211,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,   341,   214,     0,
       0,     0,     0,    84,    91,    92,    93,    84,    84,    94,
       0,     0,    84,    46,     0,     0,     0,    43,     0,     0,
     151,   159,     0,     0,   281,   283,     0,   280,   105,   106,
     203,     0,   163,     0,     0,    80,   250,   336,   345,   190,
     189,   348,   351,   347,   353,   349,   350,     0,     0,   100,
      98,     0,     0,     0,     0,     0,    99,    81,    83,    82,
     161,     0,     0,   139,   140,     0,   182,     0,     0,     0,
       0,     0,   158,     0,     0,     0,     0,   286,     0,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,    71,
       0,    77,     0,     0,   352,   354,   199,     0,     0,     0,
       0,     0,     0,   166,     0,     0,   137,   138,     0,     0,
     152,     0,     0,     0,     0,     0,     0,   113,     0,     0,
     124,   127,   125,   126,     0,     0,     0,     0,     0,     0,
      46,     0,     0,     0,   205,     0,     0,     0,     0,    90,
      95,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   291,   287,   288,   289,   284,   285,
     131,     0,     0,     0,     0,     0,   109,   110,   101,   107,
       0,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    79,     0,   168,   169,   170,   171,   167,   165,
       0,     0,     0,     0,   290,     0,     0,     0,     0,     0,
       0,   103,     0,   122,     0,     0,     0,     0,   104,     0,
     111,   112,     0,     0,   207,   209,     0,    78,   180,   181,
     153,   154,     0,   123,   130,   128,   129,     0,     0,     0,
     142,   144,   145,     0,     0,     0,     0,   116,     0,     0,
       0,     0,    46,     0,     0,   208,     0,     0,     0,     0,
       0,   143,   146,   133,   134,   135,   136,   132,   117,   121,
       0,     0,     0,     0,   102,     0,     0,     0,     0,     0,
     119,   114,   115,     0,   210,     0,     0,     0,     0,     0,
     148,   147,   149,   150,   118
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -725,  -725,  -725,   579,  -725,  -725,   887,  -725,   849,   504,
    -725,   858,  -725,  -725,   872,  -725,  -725,  -725,  -725,  -725,
    -154,   457,  -262,  -195,   960,   885,   459,  -307,  -725,  -725,
     263,  -725,  -169,  -725,  -184,  -725,  -725,   488,  -725,  -725,
    -725,  -141,  -410,  -411,  -725,  -725,  -725,  -482,  -725,  -725,
    -725,  -724,  -725,   347,  -725,  -725,   234,   418,  -725,  -158,
    -725,   460,   166,    41,  -725,  -401,  -390,  -725,  -725,  -413,
    -409,  -510,  -174,  -525,  -152,  -477,  -725,  -725,  -352,  -362,
     184,   301,  -725,  -725,   -56,   781,  -111,  -725,   759,   -87,
    -725,  -337,  -725,   506,  -725,   910,  -725,  -725,  -725,   980,
    -725,  -725,  -725,  -725,  -725,  -725,  -725,  -725,  -725,  -622,
    -725,  -555,   280,  -725,  -725,  -725,  -725,   524,  -725,  -725,
    -725,  -725,  -725,  -725,  -725,  -313,  -725,   395,   394,   692,
    -725,   981,  -725,   983
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    29,    19,    83,   329,    30,    84,    31,
      88,   106,   107,   179,   245,   499,   109,   185,   356,   231,
     227,   425,   228,   101,    46,   102,   110,   287,   274,   359,
     322,   103,   223,   189,   224,   111,   310,   409,   443,   651,
     444,   562,   467,   563,   564,   657,   468,   587,   685,   588,
     732,   733,   798,   679,   680,   755,   681,   475,   574,   789,
     790,   428,   485,   631,   531,   565,   566,   445,   446,   567,
     568,   569,   632,   627,   292,   293,   456,   246,   387,   490,
     648,   491,   388,   199,   345,   213,   389,   464,   283,   521,
     248,   195,   113,   447,    32,    33,    34,   336,    35,    36,
      37,    66,    38,    39,    40,    41,   350,    42,   486,   584,
     676,   585,   166,   146,    43,    44,     5,   337,   338,   339,
     376,   340,   341,   342,   416,   602,   511,   603,   605,     6,
      14,    15,    16,    17
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,   205,   194,   162,   233,   209,   210,   211,   407,   471,
     452,   471,   311,   472,   476,   472,   360,   361,   544,   232,
     686,   469,   288,   469,   417,   589,    25,   811,   271,   272,
     543,   226,   470,   625,   470,    11,   193,   198,   234,   653,
     201,   202,   190,   206,   207,   208,   650,   575,   576,   214,
      51,   628,    92,   221,   719,   -46,    94,   812,   261,    96,
      98,   177,   265,   266,   267,   268,   269,     7,   462,   229,
     193,    27,   291,    28,   819,   820,   288,   278,   672,   187,
     191,    10,    26,   500,   188,   473,   351,   473,    18,   453,
       1,     2,   313,   200,   256,   433,   258,   259,   260,   709,
     262,    90,   214,   457,   264,   650,   247,   312,    90,   839,
     626,   289,   516,   288,   397,     2,   713,   331,   -30,   454,
     203,   204,   320,   734,   282,   282,   352,   285,   286,   539,
     426,   290,   203,   204,   658,   659,   660,   661,   662,   290,
     332,   333,   413,   253,   212,    12,    13,   702,    22,   300,
     301,   362,   363,   364,   365,   501,   203,   204,   353,   354,
      52,   222,    93,   735,   736,   289,    95,   688,   689,    97,
      99,   178,   316,   316,   318,   589,   589,   410,   459,   230,
     395,   473,   571,   288,    23,   290,   203,   204,   398,   399,
     400,   401,   547,   222,   553,   554,   555,   556,   551,   552,
     626,    24,   289,   729,   730,    45,   -30,   607,    11,   488,
     321,    50,   289,   671,    67,   787,   738,     8,     9,   414,
     415,    28,   290,   203,   204,   -30,   473,    77,   396,    45,
     473,   473,   290,   203,   204,   473,   390,   391,   682,   682,
     601,   696,   604,   606,   756,   757,   758,   759,   760,   683,
     683,   471,   487,   533,   708,   472,   700,   403,   404,   596,
     751,   633,   589,   469,   455,   599,   426,   701,   321,   634,
     635,   636,   289,   600,   470,   821,   822,    12,    13,   792,
     792,   792,   792,   792,    79,    47,   743,    45,   800,   801,
     804,   604,   290,   203,   204,    73,   534,   523,    80,   421,
     535,    81,   473,   473,   788,    89,    82,    90,   460,   463,
      47,   517,   183,   184,   408,   473,   321,    85,   482,   439,
     473,   524,   525,   112,   290,   203,   204,   473,   100,   418,
     792,   792,   792,   792,   483,    45,   484,   323,   324,   540,
     321,    54,   325,   326,   327,   328,   114,   321,   513,   792,
     792,   792,   792,   321,   785,   455,   455,   455,   455,    45,
     473,   321,   104,   762,   105,   786,    45,    57,    58,    59,
      60,    61,    45,   419,   405,   168,   406,   170,   539,   172,
      45,   489,   492,   116,   420,   236,   237,   150,   238,   239,
     479,   480,   593,   481,   203,   204,   119,   108,   240,   -34,
     -34,   455,   455,   455,   455,    90,   252,   482,   560,   572,
     561,   -84,   117,   241,   242,   243,   244,   147,   473,   622,
     163,   763,   617,   483,   150,   484,   618,   619,   764,   193,
     315,   621,   536,   164,   594,   408,   191,   167,   193,   317,
      87,   169,   652,   -24,   -24,   765,   766,   171,   608,   165,
     455,   173,   455,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   503,   518,   441,   442,   150,
      55,   519,   520,   494,   703,   704,   705,   706,   707,   176,
     190,   710,   495,   720,   174,   411,   412,   504,   519,   646,
     180,   697,   370,   105,   505,   506,   182,   190,   193,   507,
     508,   509,   510,   196,   703,   704,   186,   721,   722,   723,
     724,   725,    64,   673,   674,   675,   197,   496,   191,    90,
     497,   216,   687,   638,   498,   750,   737,   371,   372,   373,
     217,   374,   386,   461,   375,   191,   386,   515,   -24,   215,
     -24,   323,   324,   225,   120,   121,   325,   326,   769,   328,
     693,   406,   538,   218,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   219,   776,   639,   640,
     220,   641,   427,   580,   150,   803,   249,   642,   643,   793,
     794,   795,   796,   226,   791,   791,   791,   791,   791,    68,
      69,    70,    71,    72,   250,   644,   645,   613,   614,   615,
     323,   324,    75,    76,   251,   807,   808,   809,   810,   400,
     633,   323,   324,   441,   595,   739,   492,   254,   634,   635,
     636,   637,   474,   623,   767,   698,   699,   255,   823,   826,
     827,   828,   829,   799,   257,   791,   791,   791,   791,   144,
     270,   145,   583,   718,   586,   728,   406,   775,   835,   836,
     837,   838,   437,   273,   791,   791,   791,   791,   782,   783,
     610,   148,   773,   438,   408,   519,   150,   275,   691,   731,
     818,   279,   280,   276,   190,   578,   579,   148,   277,   692,
      20,    21,   150,   281,   611,   612,   613,   614,   615,   711,
     712,   296,   294,   148,   295,   149,   297,   298,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   299,   160,
     302,   303,   191,   304,   161,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   305,   160,   306,   307,   308,   309,
     161,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     314,   160,   319,   330,   334,   519,   161,   235,   236,   237,
     150,   238,   239,   343,   190,   344,   346,   610,   347,   348,
     150,   240,   519,   520,   611,   612,   613,   614,   615,   349,
     355,   190,   357,   -17,   366,   358,   241,   242,   243,   244,
     335,   611,   612,   613,   614,   615,   367,   368,   369,   379,
     385,   519,   191,   386,   392,   393,   394,   402,   422,   191,
     190,    53,    54,   423,   424,    55,   427,   449,   429,   191,
     721,   722,   723,   724,   725,   430,   431,   432,   434,   335,
     335,   435,   335,   335,   335,   335,   335,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,   436,   191,   377,
     378,   440,   380,   381,   382,   383,   384,   448,   450,   451,
     458,   465,   466,   474,   528,   477,   406,   493,   478,   502,
     512,   514,   522,   526,   527,   529,   530,   532,   537,   541,
     545,   548,   549,   550,   557,   558,   559,   570,   573,   582,
     583,   586,   497,   590,   591,   592,   597,   598,   609,   616,
     561,   629,   620,   630,   647,   665,   649,   656,   663,   664,
     666,   667,   668,   669,   670,   677,   678,   690,   751,   694,
     695,   650,   115,   714,   715,   716,   717,   726,   727,   731,
     741,    86,   742,   744,   745,   746,   747,   748,   749,   752,
     753,   754,   761,   768,   770,   771,   772,   774,   777,   778,
     779,   780,   781,   797,   802,   181,   805,   806,   813,   814,
     815,   816,   817,   824,   830,   831,   832,   833,   834,   840,
     841,   842,   843,   844,   192,   577,   546,   684,   175,   784,
     825,   581,   624,   740,   263,   284,   118,   654,   655,     0,
     542,     0,     0,     0,     0,    49,    48,    78,     0,     0,
       0,     0,     0,     0,     0,    74
};

static const yytype_int16 yycheck[] =
{
      56,   153,   113,    90,   188,   157,   158,   159,   370,   422,
       3,   424,   274,   422,   424,   424,   323,   324,   495,   188,
     642,   422,     3,   424,   376,   535,    12,    81,   223,   224,
       3,    92,   422,     3,   424,     3,     3,   148,   192,   594,
     151,   152,    73,   154,   155,   156,     3,   524,   525,   160,
       1,   576,     1,     3,   676,   116,     1,   111,   210,     1,
       1,     1,   216,   217,   218,   219,   220,    11,   420,     1,
       3,     1,   246,     3,   798,   799,     3,   231,   633,   111,
     111,     0,    68,     4,   116,   422,     4,   424,     3,    82,
       3,    28,   276,   149,   205,   402,   207,   208,   209,    80,
     211,     3,   213,   416,   215,     3,   193,   276,     3,   833,
      80,    92,   464,     3,     4,    28,   671,   291,     4,   112,
     113,   114,     4,     3,   235,   236,   310,   238,   239,   491,
     392,   112,   113,   114,   611,   612,   613,   614,   615,   112,
     294,   295,     1,   199,   111,   113,   114,   657,   111,   260,
     261,   325,   326,   327,   328,    76,   113,   114,   312,   313,
     111,   111,   111,   688,   689,    92,   111,   644,   645,   111,
     111,   111,   283,   284,   285,   685,   686,   372,   111,   111,
       4,   518,   519,     3,     6,   112,   113,   114,   362,   363,
     364,   365,   499,   111,   507,   508,   509,   510,   505,   506,
      80,    93,    92,   685,   686,   111,    92,   559,     3,   111,
      92,   111,    92,   111,     4,     3,   111,   113,   114,    78,
      79,     3,   112,   113,   114,   111,   563,     4,     4,   111,
     567,   568,   112,   113,   114,   572,   347,   348,   639,   640,
     553,   652,   555,   556,   721,   722,   723,   724,   725,   639,
     640,   664,     4,     4,   664,   664,   657,   368,   369,     4,
      80,    48,   772,   664,   416,     4,   528,   657,    92,    56,
      57,    58,    92,     4,   664,   800,   801,   113,   114,   756,
     757,   758,   759,   760,     7,    22,   697,   111,   765,   766,
     772,   604,   112,   113,   114,     3,    47,    59,     4,   386,
      51,     4,   639,   640,    92,     1,   111,     3,   419,   420,
      47,   465,     3,     4,   370,   652,    92,   111,    73,   406,
     657,    83,    84,     3,   112,   113,   114,   664,   111,     4,
     807,   808,   809,   810,    89,   111,    91,   111,   112,   493,
      92,    10,   116,   117,   118,   119,     3,    92,   459,   826,
     827,   828,   829,    92,   755,   507,   508,   509,   510,   111,
     697,    92,     1,     1,     3,   755,   111,    36,    37,    38,
      39,    40,   111,    48,     1,    95,     3,    97,   740,    99,
     111,   437,   438,     4,    59,    60,    61,    62,    63,    64,
      56,    57,   544,    59,   113,   114,     4,     1,    73,     3,
       4,   553,   554,   555,   556,     3,     4,    73,     1,   520,
       3,     4,     3,    88,    89,    90,    91,     4,   755,   573,
       4,    59,   563,    89,    62,    91,   567,   568,    66,     3,
       4,   572,   488,     4,   545,   491,   111,     4,     3,     4,
       1,     4,   594,     4,     5,    83,    84,     4,   559,    45,
     602,     4,   604,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    82,    59,     3,     4,    62,
      13,    64,    65,    64,   658,   659,   660,   661,   662,     4,
      73,   665,    73,    59,   116,    75,    76,   104,    64,   586,
       4,   653,    35,     3,   111,   112,     4,    73,     3,   116,
     117,   118,   119,    69,   688,   689,     4,    83,    84,    85,
      86,    87,    43,   634,   635,   636,     4,   108,   111,     3,
     111,     3,   643,     1,   115,   709,   690,    70,    71,    72,
       3,    74,     3,     4,    77,   111,     3,     4,   109,   111,
     111,   111,   112,     4,     4,     5,   116,   117,   118,   119,
     647,     3,     4,     3,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,     3,   741,    56,    57,
       3,    59,     3,     4,    62,   769,     4,    65,    66,   757,
     758,   759,   760,    92,   756,   757,   758,   759,   760,    30,
      31,    32,    33,    34,   111,    83,    84,    85,    86,    87,
     111,   112,    43,    44,     4,   116,   117,   118,   119,   803,
      48,   111,   112,     3,     4,   691,   692,     4,    56,    57,
      58,    59,     3,     4,   731,     3,     4,     4,   802,   807,
     808,   809,   810,   764,     4,   807,   808,   809,   810,   109,
      67,   111,     3,     4,     3,     4,     3,     4,   826,   827,
     828,   829,    48,   111,   826,   827,   828,   829,     3,     4,
      59,    57,   738,    59,   740,    64,    62,     4,    48,     3,
       4,   232,   233,   116,    73,   529,   530,    57,     4,    59,
       8,     9,    62,     4,    83,    84,    85,    86,    87,   668,
     669,     4,     3,    57,     3,    59,     4,     4,    62,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     4,   105,
       4,     4,   111,     4,   110,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     4,   105,     4,     4,     4,     4,
     110,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       4,   105,     4,   111,     3,    64,   110,    59,    60,    61,
      62,    63,    64,     4,    73,     4,    46,    59,    46,    46,
      62,    73,    64,    65,    83,    84,    85,    86,    87,   107,
     116,    73,     4,     8,     8,   111,    88,    89,    90,    91,
     296,    83,    84,    85,    86,    87,     4,     4,     4,     4,
       4,    64,   111,     3,     3,    55,    94,   112,    51,   111,
      73,     9,    10,    51,    51,    13,     3,   113,     4,   111,
      83,    84,    85,    86,    87,     4,     4,     4,     4,   335,
     336,     4,   338,   339,   340,   341,   342,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,     4,   111,   335,
     336,     4,   338,   339,   340,   341,   342,     4,   113,     4,
       4,     3,     3,     3,    94,     4,     3,     3,   116,     4,
       4,     4,     4,     4,     4,     3,     3,    92,     4,     3,
     111,   113,     4,   111,     4,     4,     4,     3,     3,    81,
       3,     3,   111,     4,     4,     4,     4,     4,     4,     4,
       3,    92,     4,    92,     3,   118,     4,     4,     4,     4,
       4,     4,    81,    81,     4,     4,     3,     3,    80,     4,
       3,     3,    83,     4,     4,     4,     4,     4,     4,     3,
       3,    54,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     3,   107,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,   112,   528,   498,   640,   103,   755,
     806,   531,   574,   692,   213,   236,    86,   602,   604,    -1,
     494,    -1,    -1,    -1,    -1,    24,    23,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,   122,   123,   237,   250,    11,   113,   114,
       0,     3,   113,   114,   251,   252,   253,   254,     3,   125,
     250,   250,   111,     6,    93,    12,    68,     1,     3,   124,
     128,   130,   215,   216,   217,   219,   220,   221,   223,   224,
     225,   226,   228,   235,   236,   111,   145,   151,   254,   252,
     111,     1,   111,     9,    10,    13,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,   222,     4,   124,   124,
     124,   124,   124,     3,   220,   124,   124,     4,   145,     7,
       4,     4,   111,   126,   129,   111,   127,     1,   131,     1,
       3,   205,     1,   111,     1,   111,     1,   111,     1,   111,
     111,   144,   146,   152,     1,     3,   132,   133,     1,   137,
     147,   156,     3,   213,     3,   129,     4,     3,   216,     4,
       4,     5,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,   109,   111,   234,     4,    57,    59,
      62,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     105,   110,   210,     4,     4,    45,   233,     4,   233,     4,
     233,     4,   233,     4,   116,   146,     4,     1,   111,   134,
       4,   132,     4,     3,     4,   138,     4,   111,   116,   154,
      73,   111,   135,     3,   207,   212,    69,     4,   207,   204,
     205,   207,   207,   113,   114,   195,   207,   207,   207,   195,
     195,   195,   111,   206,   207,   111,     3,     3,     3,     3,
       3,     3,   111,   153,   155,     4,    92,   141,   143,     1,
     111,   140,   153,   155,   141,    59,    60,    61,    63,    64,
      73,    88,    89,    90,    91,   135,   198,   210,   211,     4,
     111,     4,     4,   205,     4,     4,   207,     4,   207,   207,
     207,   195,   207,   206,   207,   141,   141,   141,   141,   141,
      67,   144,   144,   111,   149,     4,   116,     4,   141,   147,
     147,     4,   207,   209,   209,   207,   207,   148,     3,    92,
     112,   193,   195,   196,     3,     3,     4,     4,     4,     4,
     207,   207,     4,     4,     4,     4,     4,     4,     4,     4,
     157,   143,   153,   155,     4,     4,   207,     4,   207,     4,
       4,    92,   151,   111,   112,   116,   117,   118,   119,   127,
     111,   193,   141,   141,     3,   130,   218,   238,   239,   240,
     242,   243,   244,     4,     4,   205,    46,    46,    46,   107,
     227,     4,   155,   141,   141,   116,   139,     4,   111,   150,
     148,   148,   193,   193,   193,   193,     8,     4,     4,     4,
      35,    70,    71,    72,    74,    77,   241,   238,   238,     4,
     238,   238,   238,   238,   238,     4,     3,   199,   203,   207,
     207,   207,     3,    55,    94,     4,     4,     4,   193,   193,
     193,   193,   112,   207,   207,     1,     3,   200,   205,   158,
     144,    75,    76,     1,    78,    79,   245,   199,     4,    48,
      59,   210,    51,    51,    51,   142,   143,     3,   182,     4,
       4,     4,     4,   148,     4,     4,     4,    48,    59,   210,
       4,     3,     4,   159,   161,   188,   189,   214,     4,   113,
     113,     4,     3,    82,   112,   195,   197,   246,     4,   111,
     207,     4,   199,   207,   208,     3,     3,   163,   167,   186,
     187,   190,   191,   212,     3,   178,   163,     4,   116,    56,
      57,    59,    73,    89,    91,   183,   229,     4,   111,   205,
     200,   202,   205,     3,    64,    73,   108,   111,   115,   136,
       4,    76,     4,    82,   104,   111,   112,   116,   117,   118,
     119,   247,     4,   207,     4,     4,   199,   141,    59,    64,
      65,   210,     4,    59,    83,    84,     4,     4,    94,     3,
       3,   185,    92,     4,    47,    51,   205,     4,     4,   200,
     141,     3,   214,     3,   196,   111,   158,   148,   113,     4,
     111,   148,   148,   246,   246,   246,   246,     4,     4,     4,
       1,     3,   162,   164,   165,   186,   187,   190,   191,   192,
       3,   212,   207,     3,   179,   196,   196,   142,   183,   183,
       4,   182,    81,     3,   230,   232,     3,   168,   170,   192,
       4,     4,     4,   195,   207,     4,     4,     4,     4,     4,
       4,   246,   246,   248,   246,   249,   246,   199,   207,     4,
      59,    83,    84,    85,    86,    87,     4,   162,   162,   162,
       4,   162,   141,     4,   178,     3,    80,   194,   194,    92,
      92,   184,   193,    48,    56,    57,    58,    59,     1,    56,
      57,    59,    65,    66,    83,    84,   210,     3,   201,     4,
       3,   160,   195,   232,   248,   249,     4,   166,   196,   196,
     196,   196,   196,     4,     4,   118,     4,     4,    81,    81,
       4,   111,   232,   207,   207,   207,   231,     4,     3,   174,
     175,   177,   186,   187,   174,   169,   230,   207,   196,   196,
       3,    48,    59,   210,     4,     3,   164,   195,     3,     4,
     186,   187,   192,   193,   193,   193,   193,   193,   163,    80,
     193,   184,   184,   232,     4,     4,     4,     4,     4,   230,
      59,    83,    84,    85,    86,    87,     4,     4,     4,   168,
     168,     3,   171,   172,     3,   194,   194,   141,   111,   205,
     202,     3,     4,   164,     4,     4,     4,     4,     4,     4,
     193,    80,     4,     4,     4,   176,   196,   196,   196,   196,
     196,     4,     1,    59,    66,    83,    84,   210,     4,   118,
       4,     4,     4,   205,     4,     4,   141,     4,     4,     4,
       4,     4,     3,     4,   177,   186,   187,     3,    92,   180,
     181,   195,   196,   180,   180,   180,   180,     4,   173,   207,
     196,   196,     3,   193,   168,     4,     4,   116,   117,   118,
     119,    81,   111,     4,     4,     4,     4,     4,     4,   172,
     172,   194,   194,   141,     4,   201,   180,   180,   180,   180,
       4,     4,     4,     4,     4,   180,   180,   180,   180,   172,
       4,     4,     4,     4,     4
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   121,   122,   122,   122,   123,   123,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   126,   127,   128,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     135,   135,   136,   137,   137,   138,   138,   139,   139,   140,
     141,   141,   141,   142,   142,   143,   143,   144,   144,   144,
     145,   145,   146,   146,   147,   147,   147,   148,   148,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   156,   157,
     157,   158,   158,   158,   158,   158,   158,   159,   160,   160,
     161,   162,   162,   162,   162,   163,   163,   163,   163,   163,
     164,   164,   165,   165,   165,   166,   166,   166,   166,   167,
     167,   168,   168,   168,   168,   168,   168,   169,   169,   170,
     170,   170,   170,   170,   171,   171,   171,   172,   172,   172,
     172,   173,   173,   174,   174,   175,   175,   175,   176,   176,
     176,   176,   177,   177,   177,   177,   177,   178,   178,   178,
     179,   179,   180,   180,   180,   180,   180,   181,   181,   181,
     181,   182,   182,   182,   182,   183,   183,   183,   184,   185,
     185,   186,   187,   188,   189,   190,   191,   192,   192,   192,
     192,   192,   193,   193,   193,   193,   193,   193,   193,   193,
     194,   194,   194,   195,   195,   196,   196,   196,   196,   197,
     197,   197,   198,   198,   198,   198,   198,   199,   199,   199,
     199,   199,   200,   200,   200,   200,   200,   201,   201,   201,
     201,   202,   202,   203,   203,   203,   204,   204,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   206,   206,   207,   207,   207,   207,   207,   207,
     207,   207,   208,   208,   209,   209,   210,   211,   212,   213,
     214,   215,   215,   216,   216,   217,   217,   218,   218,   219,
     219,   220,   220,   220,   220,   220,   220,   221,   222,   223,
     224,   224,   225,   225,   226,   226,   227,   227,   228,   228,
     229,   229,   229,   230,   230,   231,   231,   232,   232,   232,
     232,   232,   233,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   235,   236,
     237,   237,   238,   238,   238,   238,   238,   238,   238,   238,
     239,   240,   241,   242,   243,   243,   244,   244,   244,   245,
     245,   246,   246,   246,   246,   246,   246,   247,   247,   247,
     247,   248,   248,   249,   249,   250,   250,   250,   250,   251,
     251,   252,   252,   253,   254,   254
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     5,     4,     2,     2,     2,
       2,     2,     2,     2,     1,     4,     1,     1,     4,     2,
       0,     4,     4,     2,     0,     2,     1,     4,     3,     1,
       1,     1,     1,     2,     0,     5,     3,     2,     0,     1,
       4,     4,     1,     4,     0,     3,     0,     4,     4,     1,
       2,     0,     2,     0,     4,     4,     1,     2,     3,     0,
       1,     1,     1,     1,     4,     1,     1,     2,     0,     2,
       0,     6,     2,     2,     2,     2,     0,     5,     4,     3,
       4,     2,     2,     2,     0,     1,     1,     1,     1,     1,
       4,     1,     1,     1,     1,     2,     2,     2,     0,     4,
       4,     4,     7,     5,     5,     1,     1,     2,     0,     4,
       4,     5,     5,     3,     5,     5,     3,     4,     7,     5,
       1,     2,     0,     4,     1,     1,     1,     1,     2,     2,
       2,     0,     5,     5,     5,     5,     5,     5,     5,     4,
       2,     0,     1,     2,     1,     1,     2,     5,     5,     5,
       5,     4,     6,     9,     9,     1,     1,     1,     1,     2,
       0,     4,     1,     4,     1,     7,     5,     5,     5,     5,
       5,     5,     4,     5,     5,     5,     5,     1,     2,     1,
       5,     5,     1,     1,     1,     4,     4,     1,     6,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     7,
       3,     2,     4,     5,     4,     7,     1,     4,     5,     4,
       7,     2,     1,     4,     5,     1,     2,     1,     4,     7,
       4,     4,     4,     5,     4,     5,     5,     6,     6,     5,
       5,     5,     1,     1,     1,     4,     4,     4,     5,     7,
       7,     5,     2,     1,     2,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     2,
       1,     1,     1,     1,     1,     1,     1,     5,     1,     5,
      12,     4,    12,     4,    12,     4,     4,     0,    12,     4,
       3,     3,     0,     1,     4,     2,     0,     4,     4,     4,
       5,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
      12,     5,     2,     2,     2,     2,     2,     2,     2,     0,
       4,     4,     1,     4,     5,     4,     7,     5,     5,     1,
       1,     3,     1,     1,     1,     4,     3,     3,     3,     3,
       3,     1,     2,     1,     2,     2,     3,     3,     0,     3,
       1,     4,     1,     4,     1,     1
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
#line 262 "pddl+.yacc" /* yacc.c:1646  */
    {top_thing= (yyvsp[0].t_domain); current_analysis->the_domain= (yyvsp[0].t_domain);}
#line 2115 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 263 "pddl+.yacc" /* yacc.c:1646  */
    {top_thing= (yyvsp[0].t_problem); current_analysis->the_problem= (yyvsp[0].t_problem);}
#line 2121 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 264 "pddl+.yacc" /* yacc.c:1646  */
    {top_thing= (yyvsp[0].t_plan); }
#line 2127 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 269 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[-1].t_domain); (yyval.t_domain)->name= (yyvsp[-2].cp);delete [] (yyvsp[-2].cp);
	if (types_used && !types_defined) {
		yyerrok; log_error(E_FATAL,"Syntax error in domain - no :types section, but types used in definitions.");
	}
	}
#line 2137 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 275 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_domain)=static_cast<domain*>(NULL);
       	log_error(E_FATAL,"Syntax error in domain"); }
#line 2144 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 281 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain); (yyval.t_domain)->req= (yyvsp[-1].t_pddl_req_flag);}
#line 2150 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 282 "pddl+.yacc" /* yacc.c:1646  */
    {types_defined = true; (yyval.t_domain)= (yyvsp[0].t_domain); (yyval.t_domain)->types= (yyvsp[-1].t_type_list);}
#line 2156 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 283 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain); (yyval.t_domain)->constants= (yyvsp[-1].t_const_symbol_list);}
#line 2162 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 284 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain);
                                       (yyval.t_domain)->predicates= (yyvsp[-1].t_pred_decl_list); }
#line 2169 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 286 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain);
                                       (yyval.t_domain)->functions= (yyvsp[-1].t_func_decl_list); }
#line 2176 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 288 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain);
   				       (yyval.t_domain)->constraints = (yyvsp[-1].t_con_goal);}
#line 2183 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 290 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain) = (yyvsp[0].t_domain);}
#line 2189 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 291 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain)= new domain((yyvsp[0].t_structure_store)); }
#line 2195 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 294 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.cp)=(yyvsp[-1].cp);}
#line 2201 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 298 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_class)=current_analysis->classes_tab.new_symbol_put((yyvsp[0].cp));
       delete [] (yyvsp[0].cp); }
#line 2208 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 301 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_class) = current_analysis->classes_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2214 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 303 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_dummy) = 0;}
#line 2220 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 305 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_dummy) = 0;}
#line 2226 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 306 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_dummy) = 0;}
#line 2232 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 311 "pddl+.yacc" /* yacc.c:1646  */
    {
	// Stash in analysis object --- we need to refer to it during parse
	//   but domain object is not created yet,
	current_analysis->req |= (yyvsp[-1].t_pddl_req_flag);
	(yyval.t_pddl_req_flag)=(yyvsp[-1].t_pddl_req_flag);
    }
#line 2243 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 318 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
       log_error(E_FATAL,"Syntax error in requirements declaration.");
       (yyval.t_pddl_req_flag)= 0; }
#line 2251 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 324 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_pddl_req_flag)= (yyvsp[-1].t_pddl_req_flag) | (yyvsp[0].t_pddl_req_flag); }
#line 2257 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 325 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_pddl_req_flag)= 0; }
#line 2263 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 331 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pred_decl_list)=(yyvsp[0].t_pred_decl_list); (yyval.t_pred_decl_list)->push_front((yyvsp[-1].t_pred_decl));}
#line 2269 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 333 "pddl+.yacc" /* yacc.c:1646  */
    {  (yyval.t_pred_decl_list)=new pred_decl_list;
           (yyval.t_pred_decl_list)->push_front((yyvsp[0].t_pred_decl)); }
#line 2276 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 338 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pred_decl)= new pred_decl((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_var_symbol_list),current_analysis->var_tab_stack.pop());}
#line 2282 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 340 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
        // hope someone makes this error someday
        log_error(E_FATAL,"Syntax error in predicate declaration.");
	(yyval.t_pred_decl)= static_cast<pred_decl*>(NULL); }
#line 2291 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 348 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.new_symbol_put((yyvsp[0].cp));
           current_analysis->var_tab_stack.push(
           				current_analysis->buildPredTab());
           delete [] (yyvsp[0].cp); }
#line 2300 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 355 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_ref("=");
	      requires(E_EQUALITY); }
#line 2307 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 357 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2313 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 365 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2319 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 371 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_func_decl_list)=(yyvsp[-1].t_func_decl_list); (yyval.t_func_decl_list)->push_back((yyvsp[0].t_func_decl));}
#line 2325 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 372 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_decl_list)=new func_decl_list; }
#line 2331 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 377 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_func_decl)= new func_decl((yyvsp[-3].t_func_symbol),(yyvsp[-2].t_var_symbol_list),current_analysis->var_tab_stack.pop());}
#line 2337 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 379 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in functor declaration.");
	 (yyval.t_func_decl)= NULL; }
#line 2345 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 385 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_dummy) = (int) NULL;}
#line 2351 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 385 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_dummy)= (int) NULL;}
#line 2357 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 389 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_symbol)=current_analysis->func_tab.new_symbol_put((yyvsp[0].cp));
           current_analysis->var_tab_stack.push(
           		current_analysis->buildFuncTab());
           delete [] (yyvsp[0].cp); }
#line 2366 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 402 "pddl+.yacc" /* yacc.c:1646  */
    {
      (yyval.t_var_symbol_list)= (yyvsp[-3].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_types((yyvsp[-1].t_type));           /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[0].t_var_symbol_list));   /* Join lists */
      delete (yyvsp[0].t_var_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   }
#line 2379 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 411 "pddl+.yacc" /* yacc.c:1646  */
    {
      (yyval.t_var_symbol_list)= (yyvsp[-3].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_either_types((yyvsp[-1].t_type_list));    /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[0].t_var_symbol_list));   /* Join lists */
      delete (yyvsp[0].t_var_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   }
#line 2392 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 420 "pddl+.yacc" /* yacc.c:1646  */
    {
       (yyval.t_var_symbol_list)= (yyvsp[0].t_var_symbol_list);
   }
#line 2400 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 427 "pddl+.yacc" /* yacc.c:1646  */
    {
      (yyval.t_var_symbol_list)= (yyvsp[-3].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_types(0);           /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[0].t_var_symbol_list));   /* Join lists */
      delete (yyvsp[0].t_var_symbol_list);                   /* Delete (now empty) list */
   }
#line 2411 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 432 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_var_symbol_list) = new var_symbol_list;}
#line 2417 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 440 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_var_symbol_list)=(yyvsp[0].t_var_symbol_list); (yyvsp[0].t_var_symbol_list)->push_front((yyvsp[-1].t_var_symbol)); }
#line 2423 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 441 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_var_symbol_list)= new var_symbol_list; }
#line 2429 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 448 "pddl+.yacc" /* yacc.c:1646  */
    {
      (yyval.t_const_symbol_list)= (yyvsp[-3].t_const_symbol_list);
      (yyvsp[-3].t_const_symbol_list)->set_types((yyvsp[-1].t_type));           /* Set types for constants */
      (yyvsp[-3].t_const_symbol_list)->splice((yyvsp[-3].t_const_symbol_list)->end(),*(yyvsp[0].t_const_symbol_list)); /* Join lists */
      delete (yyvsp[0].t_const_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   }
#line 2442 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 457 "pddl+.yacc" /* yacc.c:1646  */
    {
      (yyval.t_const_symbol_list)= (yyvsp[-3].t_const_symbol_list);
      (yyvsp[-3].t_const_symbol_list)->set_either_types((yyvsp[-1].t_type_list));
      (yyvsp[-3].t_const_symbol_list)->splice((yyvsp[-3].t_const_symbol_list)->end(),*(yyvsp[0].t_const_symbol_list));
      delete (yyvsp[0].t_const_symbol_list);
      requires(E_TYPING);
      types_used = true;
   }
#line 2455 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 466 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)= (yyvsp[0].t_const_symbol_list);}
#line 2461 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 471 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=(yyvsp[0].t_const_symbol_list); (yyvsp[0].t_const_symbol_list)->push_front((yyvsp[-1].t_const_symbol));}
#line 2467 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 472 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=new const_symbol_list;}
#line 2473 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 476 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=(yyvsp[0].t_const_symbol_list); (yyvsp[0].t_const_symbol_list)->push_front((yyvsp[-1].t_const_symbol));}
#line 2479 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 477 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=new const_symbol_list;}
#line 2485 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 486 "pddl+.yacc" /* yacc.c:1646  */
    {
       (yyval.t_type_list)= (yyvsp[-3].t_type_list);
       (yyval.t_type_list)->set_types((yyvsp[-1].t_type));           /* Set types for constants */
       (yyval.t_type_list)->splice((yyval.t_type_list)->end(),*(yyvsp[0].t_type_list)); /* Join lists */
       delete (yyvsp[0].t_type_list);                   /* Delete (now empty) list */
   }
#line 2496 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 493 "pddl+.yacc" /* yacc.c:1646  */
    {
   // This parse needs to be excluded, we think (DPL&MF: 6/9/01)
       (yyval.t_type_list)= (yyvsp[-3].t_type_list);
       (yyval.t_type_list)->set_either_types((yyvsp[-1].t_type_list));
       (yyval.t_type_list)->splice((yyvsp[-3].t_type_list)->end(),*(yyvsp[0].t_type_list));
       delete (yyvsp[0].t_type_list);
   }
#line 2508 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 502 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_type_list)= (yyvsp[0].t_type_list); }
#line 2514 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 508 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_parameter_symbol_list)=(yyvsp[-1].t_parameter_symbol_list); (yyval.t_parameter_symbol_list)->push_back((yyvsp[0].t_const_symbol)); }
#line 2520 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 510 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_parameter_symbol_list)=(yyvsp[-2].t_parameter_symbol_list); (yyval.t_parameter_symbol_list)->push_back((yyvsp[0].t_var_symbol)); }
#line 2526 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 511 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_parameter_symbol_list)= new parameter_symbol_list;}
#line 2532 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 518 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_var_symbol)= current_analysis->var_tab_stack.top()->symbol_put((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2538 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 524 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_var_symbol)= current_analysis->var_tab_stack.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2544 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 528 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_const_symbol)= current_analysis->const_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2550 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 532 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_const_symbol)= current_analysis->const_tab.new_symbol_put((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2556 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 537 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_type_list)= (yyvsp[-1].t_type_list); }
#line 2562 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 542 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_type)= current_analysis->pddl_type_tab.symbol_ref((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2568 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 549 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_type)= current_analysis->pddl_type_tab.symbol_ref((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2574 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 554 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_type_list)= (yyvsp[-1].t_type_list); (yyval.t_type_list)->push_back((yyvsp[0].t_type));}
#line 2580 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 555 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_type_list)= new pddl_type_list;}
#line 2586 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 560 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_type_list)= (yyvsp[-1].t_type_list); (yyval.t_type_list)->push_back((yyvsp[0].t_type));}
#line 2592 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 561 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_type_list)= new pddl_type_list;}
#line 2598 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 566 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-5].t_effect_lists);
	  (yyval.t_effect_lists)->assign_effects.push_back(new assignment((yyvsp[-2].t_func_term),E_ASSIGN,(yyvsp[-1].t_num_expression)));
          if((yyvsp[-2].t_func_term)->getFunction()->getName()=="total-cost")
          {
          	requires(E_ACTIONCOSTS);
          	// Should also check that $5 is 0...
		  }
          else
          {
          	requires(E_NFLUENTS);
          }
	}
#line 2615 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 579 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[0].t_simple_effect)); }
#line 2621 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 581 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[0].t_simple_effect)); }
#line 2627 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 583 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[0].t_timed_effect)); }
#line 2633 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 585 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists) = (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->supplied_effects.push_back((yyvsp[0].t_supplied_effect)); }
#line 2639 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 587 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;}
#line 2645 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 592 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_supplied_effect) = (yyvsp[0].t_supplied_effect); (yyvsp[0].t_supplied_effect)->sup = (yyvsp[-1].t_goal); (yyvsp[0].t_supplied_effect)->name = current_analysis->op_tab.symbol_put((yyvsp[-2].cp));
	delete [] (yyvsp[-2].cp); requires(E_SUPPLYDEMAND);}
#line 2652 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 598 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_supplied_effect) = new supplied_effect(0,(yyvsp[-3].t_goal),(yyvsp[-2].t_num_expression)->double_value(),(yyvsp[-1].t_effect_lists)); delete (yyvsp[-2].t_num_expression);}
#line 2658 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 600 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_supplied_effect) = new supplied_effect(0,0,(yyvsp[-2].t_num_expression)->double_value(),(yyvsp[-1].t_effect_lists)); delete (yyvsp[-2].t_num_expression);}
#line 2664 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 606 "pddl+.yacc" /* yacc.c:1646  */
    { requires(E_TIMED_INITIAL_LITERALS);
   		(yyval.t_timed_effect)=new timed_initial_literal((yyvsp[-1].t_effect_lists),(yyvsp[-2].fval));}
#line 2671 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 611 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=(yyvsp[0].t_effect_lists); (yyval.t_effect_lists)->append_effects((yyvsp[-1].t_effect_lists)); delete (yyvsp[-1].t_effect_lists);}
#line 2677 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 612 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=(yyvsp[0].t_effect_lists); (yyval.t_effect_lists)->cond_effects.push_front((yyvsp[-1].t_cond_effect));
                                      requires(E_COND_EFFS);}
#line 2684 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 614 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=(yyvsp[0].t_effect_lists); (yyval.t_effect_lists)->forall_effects.push_front((yyvsp[-1].t_forall_effect));
                                      requires(E_COND_EFFS);}
#line 2691 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 616 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists(); }
#line 2697 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 625 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[0].t_effect_lists);}
#line 2703 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 626 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2709 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 627 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2715 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 628 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->cond_effects.push_front((yyvsp[0].t_cond_effect));}
#line 2721 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 629 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->forall_effects.push_front((yyvsp[0].t_forall_effect));}
#line 2727 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 633 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists);}
#line 2733 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 634 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[0].t_effect_lists);}
#line 2739 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 639 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2745 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 641 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2751 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 643 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[0].t_assignment));
         requires(E_NFLUENTS);}
#line 2758 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 649 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[0].t_simple_effect));}
#line 2764 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 650 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[0].t_simple_effect));}
#line 2770 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 651 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->assign_effects.push_back((yyvsp[0].t_assignment));
                                     requires(E_NFLUENTS); }
#line 2777 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 653 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 2783 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 658 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); }
#line 2789 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 660 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_effect_lists)=NULL;
	 log_error(E_FATAL,"Syntax error in (and ...)");
	}
#line 2797 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 668 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); }
#line 2803 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 673 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
          (yyval.t_effect_lists)->forall_effects.push_back(
	       new forall_effect((yyvsp[-1].t_effect_lists), (yyvsp[-3].t_var_symbol_list), current_analysis->var_tab_stack.pop()));
          requires(E_COND_EFFS);}
#line 2812 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 678 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_effects.push_back(
	       new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)));
          requires(E_COND_EFFS); }
#line 2821 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 683 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_assign_effects.push_back(
	       new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)));
          requires(E_COND_EFFS); }
#line 2830 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 688 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=new effect_lists;
          (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[0].t_timed_effect)); }
#line 2837 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 691 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[0].t_assignment));
          requires(E_NFLUENTS); }
#line 2845 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 697 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyvsp[-1].t_effect_lists)->append_effects((yyvsp[0].t_effect_lists)); delete (yyvsp[0].t_effect_lists); }
#line 2851 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 698 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 2857 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 704 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect((yyvsp[-1].t_effect_lists),E_AT_START);}
#line 2863 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 706 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect((yyvsp[-1].t_effect_lists),E_AT_END);}
#line 2869 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 708 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression))); }
#line 2877 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 712 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression))); }
#line 2885 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 716 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_timed_effect)=NULL;
	log_error(E_FATAL,"Syntax error in timed effect"); }
#line 2892 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 722 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression))); }
#line 2900 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 726 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression))); }
#line 2908 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 730 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_timed_effect)=NULL;
	log_error(E_FATAL,"Syntax error in conditional continuous effect"); }
#line 2915 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 736 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); }
#line 2921 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 741 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
          (yyval.t_effect_lists)->forall_effects.push_back(
	       new forall_effect((yyvsp[-1].t_effect_lists), (yyvsp[-3].t_var_symbol_list), current_analysis->var_tab_stack.pop()));
          requires(E_COND_EFFS);}
#line 2930 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 746 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_assign_effects.push_back(
	       new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)));
          requires(E_COND_EFFS); }
#line 2939 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 751 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=new effect_lists;
          (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[0].t_timed_effect)); }
#line 2946 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 756 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyvsp[-1].t_effect_lists)->append_effects((yyvsp[0].t_effect_lists)); delete (yyvsp[0].t_effect_lists); }
#line 2952 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 757 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 2958 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 761 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists);}
#line 2964 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 762 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[0].t_effect_lists);}
#line 2970 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 767 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2976 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 769 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2982 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 771 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[0].t_assignment));
         requires(E_NFLUENTS);}
#line 2989 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 777 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[0].t_simple_effect));}
#line 2995 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 778 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[0].t_simple_effect));}
#line 3001 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 779 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->assign_effects.push_back((yyvsp[0].t_assignment));
                                     requires(E_NFLUENTS); }
#line 3008 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 781 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 3014 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 787 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_ASSIGN,(yyvsp[-1].t_expression)); }
#line 3020 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 789 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression)); }
#line 3026 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 791 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression)); }
#line 3032 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 793 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_UP,(yyvsp[-1].t_expression)); }
#line 3038 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 795 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_DOWN,(yyvsp[-1].t_expression)); }
#line 3044 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 800 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists;
         timed_effect * te = new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_effect_lists)->timed_effects.push_front(te);
         te->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression))); }
#line 3054 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 806 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists;
         timed_effect * te = new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_effect_lists)->timed_effects.push_front(te);
         te->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression))); }
#line 3064 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 812 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists) = (yyvsp[-1].t_effect_lists);}
#line 3070 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 816 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyvsp[-1].t_effect_lists)->append_effects((yyvsp[0].t_effect_lists)); delete (yyvsp[0].t_effect_lists); }
#line 3076 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 817 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 3082 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 821 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[0].t_expression);}
#line 3088 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 822 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression)= new special_val_expr(E_DURATION_VAR);
                    requires( E_DURATION_INEQUALITIES );}
#line 3095 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 824 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)=(yyvsp[0].t_num_expression); }
#line 3101 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 825 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= (yyvsp[0].t_func_term); }
#line 3107 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 826 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression) = current_analysis->getControlParam((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 3113 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 831 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new plus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3119 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 833 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new minus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3125 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 835 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3131 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 837 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new div_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3137 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 842 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal)= new conj_goal((yyvsp[-1].t_goal_list)); }
#line 3143 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 844 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal)= new timed_goal(new comparison((yyvsp[-4].t_comparison_op),
        			new special_val_expr(E_DURATION_VAR),(yyvsp[-1].t_expression)),E_AT_START); }
#line 3150 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 847 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal) = new timed_goal(new comparison((yyvsp[-5].t_comparison_op),
					new special_val_expr(E_DURATION_VAR),(yyvsp[-2].t_expression)),E_AT_START);}
#line 3157 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 850 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal) = new timed_goal(new comparison((yyvsp[-5].t_comparison_op),
					new special_val_expr(E_DURATION_VAR),(yyvsp[-2].t_expression)),E_AT_END);}
#line 3164 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 855 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_comparison_op)= E_LESSEQ; requires(E_DURATION_INEQUALITIES);}
#line 3170 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 856 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_comparison_op)= E_GREATEQ; requires(E_DURATION_INEQUALITIES);}
#line 3176 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 857 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_comparison_op)= E_EQUALS; }
#line 3182 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 865 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[0].t_expression); }
#line 3188 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 870 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[0].t_goal)); }
#line 3194 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 872 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal_list)= new goal_list; }
#line 3200 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 877 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[-1].t_proposition)); }
#line 3206 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 882 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[0].t_proposition)); }
#line 3212 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 889 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[-1].t_proposition)); }
#line 3218 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 894 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[0].t_proposition)); }
#line 3224 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 899 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_forall_effect)= new forall_effect((yyvsp[-1].t_effect_lists), (yyvsp[-3].t_var_symbol_list), current_analysis->var_tab_stack.pop());}
#line 3230 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 904 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_cond_effect)= new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)); }
#line 3236 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 909 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_ASSIGN,(yyvsp[-1].t_expression)); }
#line 3242 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 911 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression)); }
#line 3248 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 913 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression)); }
#line 3254 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 915 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_UP,(yyvsp[-1].t_expression)); }
#line 3260 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 917 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_DOWN,(yyvsp[-1].t_expression)); }
#line 3266 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 922 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new uminus_expression((yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3272 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 924 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new plus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3278 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 926 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new minus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3284 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 928 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3290 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 930 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new div_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3296 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 931 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)=(yyvsp[0].t_num_expression); }
#line 3302 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 932 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression) = current_analysis->getControlParam((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 3308 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 933 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= (yyvsp[0].t_func_term); requires(E_NFLUENTS); }
#line 3314 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 938 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression(new special_val_expr(E_HASHT),(yyvsp[-1].t_expression)); }
#line 3320 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 940 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression((yyvsp[-2].t_expression), new special_val_expr(E_HASHT)); }
#line 3326 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 942 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new special_val_expr(E_HASHT); }
#line 3332 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 947 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_num_expression)=new int_expression((yyvsp[0].ival));   }
#line 3338 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 948 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_num_expression)=new float_expression((yyvsp[0].fval)); }
#line 3344 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 952 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3350 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 955 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3356 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 957 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[0].cp)),
                            new parameter_symbol_list); delete [] (yyvsp[0].cp);}
#line 3363 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 960 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_term) = new class_func_term( (yyvsp[-4].t_class), current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp);}
#line 3369 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 977 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3375 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 979 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3381 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 981 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[0].cp)),
                            new parameter_symbol_list); delete [] (yyvsp[0].cp);}
#line 3388 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 986 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_GREATER; }
#line 3394 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 987 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_GREATEQ; }
#line 3400 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 988 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_LESS; }
#line 3406 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 989 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_LESSEQ; }
#line 3412 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 990 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_EQUALS; }
#line 3418 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1003 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= (yyvsp[0].t_goal);}
#line 3424 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1010 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal) = new conj_goal((yyvsp[-1].t_goal_list));}
#line 3430 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1013 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());
        requires(E_UNIV_PRECS);}
#line 3437 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1015 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal) = new conj_goal(new goal_list);}
#line 3443 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1016 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal) = new conj_goal(new goal_list);}
#line 3449 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1021 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new preference((yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3455 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1023 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new preference((yyvsp[-2].cp),(yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3461 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1025 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new conj_goal((yyvsp[-1].t_goal_list));}
#line 3467 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1028 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal)= new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_con_goal),current_analysis->var_tab_stack.pop());
                requires(E_UNIV_PRECS);}
#line 3474 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1031 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = (yyvsp[0].t_con_goal);}
#line 3480 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1036 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new preference((yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3486 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1038 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new preference((yyvsp[-2].cp),(yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3492 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1040 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new conj_goal((yyvsp[-1].t_goal_list));}
#line 3498 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1043 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal)= new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_con_goal),current_analysis->var_tab_stack.pop());
                requires(E_UNIV_PRECS);}
#line 3505 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1049 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list)=(yyvsp[-1].t_goal_list); if((yyvsp[0].t_con_goal)) {(yyvsp[-1].t_goal_list)->push_back((yyvsp[0].t_con_goal));};}
#line 3511 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1051 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list)= new goal_list; if((yyvsp[0].t_con_goal)) {(yyval.t_goal_list)->push_back((yyvsp[0].t_con_goal));};}
#line 3517 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1056 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new preference((yyvsp[-1].t_goal)); requires(E_PREFERENCES);}
#line 3523 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1058 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new preference((yyvsp[-2].cp),(yyvsp[-1].t_goal)); requires(E_PREFERENCES);}
#line 3529 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1062 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)=(yyvsp[0].t_goal);}
#line 3535 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1067 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list) = (yyvsp[-1].t_goal_list); if((yyvsp[0].t_con_goal)) {(yyval.t_goal_list)->push_back((yyvsp[0].t_con_goal));}; }
#line 3541 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1069 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list) = new goal_list; if((yyvsp[0].t_con_goal)) {(yyval.t_goal_list)->push_back((yyvsp[0].t_con_goal));}}
#line 3547 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1074 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal)= new conj_goal((yyvsp[-1].t_goal_list));}
#line 3553 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1076 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_con_goal),current_analysis->var_tab_stack.pop());
        requires(E_UNIV_PRECS);}
#line 3560 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1079 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_ATEND,(yyvsp[-1].t_goal));}
#line 3566 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1081 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_ALWAYS,(yyvsp[-1].t_goal));}
#line 3572 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1083 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIME,(yyvsp[-1].t_goal));}
#line 3578 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1085 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_WITHIN,(yyvsp[-1].t_goal),NULL,(yyvsp[-2].t_num_expression)->double_value(),0.0);delete (yyvsp[-2].t_num_expression);}
#line 3584 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1087 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_ATMOSTONCE,(yyvsp[-1].t_goal));}
#line 3590 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1089 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIMEAFTER,(yyvsp[-1].t_goal),(yyvsp[-2].t_goal));}
#line 3596 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1091 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIMEBEFORE,(yyvsp[-1].t_goal),(yyvsp[-2].t_goal));}
#line 3602 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1093 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_ALWAYSWITHIN,(yyvsp[-1].t_goal),(yyvsp[-2].t_goal),(yyvsp[-3].t_num_expression)->double_value(),0.0);delete (yyvsp[-3].t_num_expression);}
#line 3608 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1095 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_HOLDDURING,(yyvsp[-1].t_goal),NULL,(yyvsp[-2].t_num_expression)->double_value(),(yyvsp[-3].t_num_expression)->double_value());delete (yyvsp[-3].t_num_expression);delete (yyvsp[-2].t_num_expression);}
#line 3614 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1097 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_HOLDAFTER,(yyvsp[-1].t_goal),NULL,0.0,(yyvsp[-2].t_num_expression)->double_value());delete (yyvsp[-2].t_num_expression);}
#line 3620 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1099 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_AFTER,(yyvsp[-1].t_goal),(yyvsp[-2].t_goal));}
#line 3626 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1101 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = 0;
		 current_analysis->goalnames[(yyvsp[-2].cp)] = (yyvsp[-1].t_goal);
		 delete [] (yyvsp[-2].cp);}
#line 3634 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1108 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal) = (yyvsp[0].t_goal);}
#line 3640 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1110 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal) = new named_goal(current_analysis->goalnames[(yyvsp[0].cp)]); delete [] (yyvsp[0].cp);}
#line 3646 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1115 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new simple_goal((yyvsp[0].t_proposition),E_POS);}
#line 3652 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1117 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new neg_goal((yyvsp[-1].t_goal));simple_goal * s = dynamic_cast<simple_goal *>((yyvsp[-1].t_goal));
       if(s && s->getProp()->head->getName()=="=") {requires(E_EQUALITY);}
       else{requires(E_NEGATIVE_PRECONDITIONS);};}
#line 3660 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1121 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new conj_goal((yyvsp[-1].t_goal_list));}
#line 3666 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1123 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new disj_goal((yyvsp[-1].t_goal_list));
        requires(E_DISJUNCTIVE_PRECONDS);}
#line 3673 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1126 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new imply_goal((yyvsp[-2].t_goal),(yyvsp[-1].t_goal));
        requires(E_DISJUNCTIVE_PRECONDS);}
#line 3680 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1130 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new qfied_goal((yyvsp[-5].t_quantifier),(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());}
#line 3686 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1133 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new qfied_goal((yyvsp[-5].t_quantifier),(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());}
#line 3692 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1135 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new comparison((yyvsp[-3].t_comparison_op),(yyvsp[-2].t_expression),(yyvsp[-1].t_expression));
        requires(E_NFLUENTS);}
#line 3699 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1141 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyvsp[-1].t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3705 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1143 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list)= new goal_list; (yyval.t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3711 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1148 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyvsp[-1].t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3717 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1150 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list)= new goal_list; (yyval.t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3723 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1160 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_quantifier)=E_FORALL;
        current_analysis->var_tab_stack.push(
        		current_analysis->buildForallTab());}
#line 3731 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1167 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_quantifier)=E_EXISTS;
        current_analysis->var_tab_stack.push(
        	current_analysis->buildExistsTab());}
#line 3739 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1174 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_proposition)=new proposition((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_parameter_symbol_list));}
#line 3745 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1179 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_proposition) = new proposition((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_var_symbol_list));}
#line 3751 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1184 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_proposition)=new proposition((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_parameter_symbol_list));}
#line 3757 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1189 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pred_decl_list)= (yyvsp[-1].t_pred_decl_list);}
#line 3763 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1191 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_pred_decl_list)=NULL;
	 log_error(E_FATAL,"Syntax error in (:predicates ...)");
	}
#line 3771 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1198 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_func_decl_list)= (yyvsp[-1].t_func_decl_list);}
#line 3777 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1200 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_func_decl_list)=NULL;
	 log_error(E_FATAL,"Syntax error in (:functions ...)");
	}
#line 3785 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1207 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = (yyvsp[-1].t_con_goal);}
#line 3791 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1209 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_con_goal)=NULL;
      log_error(E_FATAL,"Syntax error in (:constraints ...)");
      }
#line 3799 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1216 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = (yyvsp[-1].t_con_goal);}
#line 3805 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1218 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_con_goal)=NULL;
      log_error(E_FATAL,"Syntax error in (:constraints ...)");
      }
#line 3813 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1224 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_store)=(yyvsp[-1].t_structure_store); (yyval.t_structure_store)->push_back((yyvsp[0].t_structure_def)); }
#line 3819 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1225 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_store)= new structure_store; (yyval.t_structure_store)->push_back((yyvsp[0].t_structure_def)); }
#line 3825 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1229 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_action_def); }
#line 3831 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1230 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_event_def); requires(E_TIME); }
#line 3837 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1231 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_process_def); requires(E_TIME); }
#line 3843 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1232 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_durative_action_def); requires(E_DURATIVE_ACTIONS); }
#line 3849 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1233 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_derivation_rule); requires(E_DERIVED_PREDICATES);}
#line 3855 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1234 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_def) = (yyvsp[0].t_class_def); requires(E_MODULES);}
#line 3861 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1242 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_class_def) = new class_def((yyvsp[-2].t_class),(yyvsp[-1].t_func_decl_list));}
#line 3867 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1246 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_dummy)= 0;
    	current_analysis->var_tab_stack.push(
    					current_analysis->buildRuleTab());}
#line 3875 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1257 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_derivation_rule) = new derivation_rule((yyvsp[-2].t_proposition),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());}
#line 3881 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1269 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_action_def)= current_analysis->buildAction(current_analysis->op_tab.new_symbol_put((yyvsp[-9].cp)),
			(yyvsp[-6].t_var_symbol_list),(yyvsp[-3].t_goal),(yyvsp[-1].t_effect_lists),
			current_analysis->var_tab_stack.pop()); delete [] (yyvsp[-9].cp); }
#line 3889 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1273 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in action declaration.");
	 (yyval.t_action_def)= NULL; }
#line 3897 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1286 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_event_def)= current_analysis->buildEvent(current_analysis->op_tab.new_symbol_put((yyvsp[-9].cp)),
		   (yyvsp[-6].t_var_symbol_list),(yyvsp[-3].t_goal),(yyvsp[-1].t_effect_lists),
		   current_analysis->var_tab_stack.pop()); delete [] (yyvsp[-9].cp);}
#line 3905 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1291 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in event declaration.");
	 (yyval.t_event_def)= NULL; }
#line 3913 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1303 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_process_def)= current_analysis->buildProcess(current_analysis->op_tab.new_symbol_put((yyvsp[-9].cp)),
		     (yyvsp[-6].t_var_symbol_list),(yyvsp[-3].t_goal),(yyvsp[-1].t_effect_lists),
                     current_analysis->var_tab_stack.pop()); delete [] (yyvsp[-9].cp);}
#line 3921 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1307 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in process declaration.");
	 (yyval.t_process_def)= NULL; }
#line 3929 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1313 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_var_symbol_list) = (yyvsp[-1].t_var_symbol_list); current_analysis->setControlParams((yyval.t_var_symbol_list));}
#line 3935 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1314 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_var_symbol_list) = NULL; current_analysis->setControlParams((yyval.t_var_symbol_list));}
#line 3941 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1325 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_durative_action_def)= (yyvsp[-1].t_durative_action_def);
      (yyval.t_durative_action_def)->name= current_analysis->op_tab.new_symbol_put((yyvsp[-9].cp));
      (yyval.t_durative_action_def)->symtab= current_analysis->var_tab_stack.pop();
      (yyval.t_durative_action_def)->control_parameters = current_analysis->getControlParams();
      (yyval.t_durative_action_def)->parameters= (yyvsp[-6].t_var_symbol_list);
      (yyval.t_durative_action_def)->dur_constraint= (yyvsp[-2].t_goal);
      delete [] (yyvsp[-9].cp);
      delete (yyvsp[-4].t_var_symbol_list);
    }
#line 3955 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1336 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in durative-action declaration.");
	 (yyval.t_durative_action_def)= NULL; }
#line 3963 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1343 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_durative_action_def)=(yyvsp[-2].t_durative_action_def); (yyval.t_durative_action_def)->effects=(yyvsp[0].t_effect_lists);}
#line 3969 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1345 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_durative_action_def)=(yyvsp[-2].t_durative_action_def); (yyval.t_durative_action_def)->precondition=(yyvsp[0].t_goal);}
#line 3975 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1346 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_durative_action_def)= current_analysis->buildDurativeAction();}
#line 3981 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1351 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal)=(yyvsp[0].t_goal); }
#line 3987 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1353 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal)= new conj_goal((yyvsp[-1].t_goal_list)); }
#line 3993 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1358 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[0].t_goal)); }
#line 3999 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1360 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal_list)= new goal_list; }
#line 4005 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1365 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new timed_goal((yyvsp[-1].t_goal),E_AT_START);}
#line 4011 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1367 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new timed_goal((yyvsp[-1].t_goal),E_AT_END);}
#line 4017 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1369 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new timed_goal((yyvsp[-1].t_goal),E_OVER_ALL);}
#line 4023 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1371 "pddl+.yacc" /* yacc.c:1646  */
    {timed_goal * tg = dynamic_cast<timed_goal *>((yyvsp[-1].t_goal));
		(yyval.t_goal) = new timed_goal(new preference((yyvsp[-2].cp),tg->clearGoal()),tg->getTime());
			delete tg;
			requires(E_PREFERENCES);}
#line 4032 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1376 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal) = new preference((yyvsp[-1].t_goal));requires(E_PREFERENCES);}
#line 4038 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1380 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_dummy)= 0; current_analysis->var_tab_stack.push(
    				current_analysis->buildOpTab());}
#line 4045 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1385 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_EQUALITY;}
#line 4051 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1386 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_STRIPS;}
#line 4057 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1388 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_TYPING;}
#line 4063 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1390 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_NEGATIVE_PRECONDITIONS;}
#line 4069 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1392 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_DISJUNCTIVE_PRECONDS;}
#line 4075 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1393 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_EXT_PRECS;}
#line 4081 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1394 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_UNIV_PRECS;}
#line 4087 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1395 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_COND_EFFS;}
#line 4093 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1396 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_NFLUENTS | E_OFLUENTS;}
#line 4099 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1398 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_DURATIVE_ACTIONS;}
#line 4105 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1399 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_TIME |
                      E_NFLUENTS |
                      E_DURATIVE_ACTIONS; }
#line 4113 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1402 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)=E_ACTIONCOSTS | E_NFLUENTS;}
#line 4119 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1405 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)=E_OFLUENTS;}
#line 4125 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1406 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)=E_NFLUENTS;}
#line 4131 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1407 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)=E_MODULES;}
#line 4137 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1409 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_STRIPS |
		      E_TYPING |
		      E_NEGATIVE_PRECONDITIONS |
		      E_DISJUNCTIVE_PRECONDS |
		      E_EQUALITY |
		      E_EXT_PRECS |
		      E_UNIV_PRECS |
		      E_COND_EFFS;}
#line 4150 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1418 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_EXT_PRECS |
		      E_UNIV_PRECS;}
#line 4157 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1422 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_DURATION_INEQUALITIES;}
#line 4163 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1425 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_CONTINUOUS_EFFECTS;}
#line 4169 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1427 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag) = E_DERIVED_PREDICATES;}
#line 4175 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1429 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag) = E_TIMED_INITIAL_LITERALS;}
#line 4181 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1431 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag) = E_PREFERENCES;}
#line 4187 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1433 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag) = E_CONSTRAINTS;}
#line 4193 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1434 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag) = E_SUPPLYDEMAND;}
#line 4199 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1436 "pddl+.yacc" /* yacc.c:1646  */
    {log_error(E_WARNING,"Unrecognised requirements declaration ");
       (yyval.t_pddl_req_flag)= 0; delete [] (yyvsp[0].cp);}
#line 4206 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1442 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=(yyvsp[-1].t_const_symbol_list);}
#line 4212 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1446 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_type_list)=(yyvsp[-1].t_type_list); requires(E_TYPING);}
#line 4218 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1456 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[-1].t_problem); (yyval.t_problem)->name = (yyvsp[-7].cp); (yyval.t_problem)->domain_name = (yyvsp[-3].cp);
		if (types_used && !types_defined) {
			yyerrok; log_error(E_FATAL,"Syntax error in problem file - types used, but no :types section in domain file.");
		}

	}
#line 4229 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1463 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_problem)=NULL;
       	log_error(E_FATAL,"Syntax error in problem definition."); }
#line 4236 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1469 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->req= (yyvsp[-1].t_pddl_req_flag);}
#line 4242 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1470 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->objects= (yyvsp[-1].t_const_symbol_list);}
#line 4248 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1471 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->initial_state= (yyvsp[-1].t_effect_lists);}
#line 4254 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1472 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->the_goal= (yyvsp[-1].t_goal);}
#line 4260 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1474 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->constraints = (yyvsp[-1].t_con_goal);}
#line 4266 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1475 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); if((yyval.t_problem)->metric == 0) {(yyval.t_problem)->metric= (yyvsp[-1].t_metric);}
											else {(yyval.t_problem)->metric->add((yyvsp[-1].t_metric));}}
#line 4273 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1477 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->length= (yyvsp[-1].t_length_spec);}
#line 4279 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1478 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=new problem;}
#line 4285 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1481 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=(yyvsp[-1].t_const_symbol_list);}
#line 4291 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1484 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists);}
#line 4297 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1487 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.vtab) = current_analysis->buildOpTab();}
#line 4303 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1490 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)=(yyvsp[-1].t_goal);delete (yyvsp[-2].vtab);}
#line 4309 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1495 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_metric)= new metric_spec((yyvsp[-2].t_optimization),(yyvsp[-1].t_expression)); }
#line 4315 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1497 "pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
        log_error(E_FATAL,"Syntax error in metric declaration.");
        (yyval.t_metric)= NULL; }
#line 4323 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1504 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_length_spec)= new length_spec(E_BOTH,(yyvsp[-3].ival),(yyvsp[-1].ival));}
#line 4329 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1507 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_length_spec) = new length_spec(E_SERIAL,(yyvsp[-1].ival));}
#line 4335 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1511 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_length_spec) = new length_spec(E_PARALLEL,(yyvsp[-1].ival));}
#line 4341 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1517 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_optimization)= E_MINIMIZE;}
#line 4347 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1518 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_optimization)= E_MAXIMIZE;}
#line 4353 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1523 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[-1].t_expression);}
#line 4359 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1524 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[0].t_func_term);}
#line 4365 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1525 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[0].t_num_expression);}
#line 4371 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1526 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new special_val_expr(E_TOTAL_TIME); }
#line 4377 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1528 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression) = new violation_term((yyvsp[-1].cp));}
#line 4383 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1529 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new special_val_expr(E_TOTAL_TIME); }
#line 4389 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1533 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new plus_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4395 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1534 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new minus_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4401 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1535 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4407 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1536 "pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new div_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4413 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1540 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression) = (yyvsp[0].t_expression);}
#line 4419 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1542 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression) = new plus_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression));}
#line 4425 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1546 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression) = (yyvsp[0].t_expression);}
#line 4431 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1548 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression) = new mul_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression));}
#line 4437 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1554 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_plan)= (yyvsp[-1].t_plan);
         (yyval.t_plan)->push_back((yyvsp[0].t_step)); }
#line 4444 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1557 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_plan) = (yyvsp[0].t_plan);(yyval.t_plan)->insertTime((yyvsp[-1].fval));}
#line 4450 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1559 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_plan) = (yyvsp[0].t_plan);(yyval.t_plan)->insertTime((yyvsp[-1].ival));}
#line 4456 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1561 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_plan)= new plan;}
#line 4462 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1566 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_step)=(yyvsp[0].t_step);
         (yyval.t_step)->start_time_given=1;
         (yyval.t_step)->start_time=(yyvsp[-2].fval);}
#line 4470 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1570 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_step)=(yyvsp[0].t_step);
	 (yyval.t_step)->start_time_given=0;}
#line 4477 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1576 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_step)= (yyvsp[-3].t_step);
	 (yyval.t_step)->duration_given=1;
         (yyval.t_step)->duration= (yyvsp[-1].fval);}
#line 4485 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1580 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_step)= (yyvsp[0].t_step);
         (yyval.t_step)->duration_given=0;}
#line 4492 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1586 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_step)= new plan_step(
              current_analysis->op_tab.symbol_get((yyvsp[-2].cp)),
	      (yyvsp[-1].t_const_symbol_list)); delete [] (yyvsp[-2].cp);
      }
#line 4501 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1593 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.fval)= (yyvsp[0].fval);}
#line 4507 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 1594 "pddl+.yacc" /* yacc.c:1646  */
    {(yyval.fval)= (float) (yyvsp[0].ival);}
#line 4513 "pddl+.cpp" /* yacc.c:1646  */
    break;


#line 4517 "pddl+.cpp" /* yacc.c:1646  */
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
#line 1597 "pddl+.yacc" /* yacc.c:1906  */


#include <cstdio>
#include <iostream>
int line_no= 1;
using std::istream;
#include "pddl+.lex.yy.h"

namespace VAL {
extern yyFlexLexer* yfl;
};


int yyerror(char * s)
{
    return 0;
}

int yylex()
{
    return yfl->yylex();
}
