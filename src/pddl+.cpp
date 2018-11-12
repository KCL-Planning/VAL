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
#line 17 "src/pddl+.yacc" /* yacc.c:339  */

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


#line 128 "src/pddl+.cpp" /* yacc.c:339  */

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
    BOGUS = 360,
    NAME = 361,
    FUNCTION_SYMBOL = 362,
    INTVAL = 363,
    FLOATVAL = 364,
    AT_TIME = 365,
    HYPHEN = 366,
    PLUS = 367,
    MUL = 368,
    DIV = 369,
    UMINUS = 370
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 79 "src/pddl+.yacc" /* yacc.c:355  */

    parse_category* t_parse_category;

    effect_lists* t_effect_lists;
    effect* t_effect;
    simple_effect* t_simple_effect;
    cond_effect*   t_cond_effect;
    forall_effect* t_forall_effect;
    timed_effect* t_timed_effect;

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


#line 357 "src/pddl+.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 374 "src/pddl+.cpp" /* yacc.c:358  */

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   950

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  116
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  129
/* YYNRULES -- Number of rules.  */
#define YYNRULES  350
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  810

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   370

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
     115
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   260,   260,   261,   262,   266,   272,   279,   280,   281,
     282,   284,   286,   288,   289,   292,   296,   299,   301,   303,
     304,   308,   315,   322,   323,   328,   330,   335,   337,   345,
     353,   355,   363,   368,   370,   374,   376,   383,   383,   386,
     399,   408,   417,   429,   431,   437,   446,   456,   461,   462,
     466,   467,   475,   482,   491,   497,   499,   501,   508,   514,
     518,   522,   526,   531,   538,   543,   545,   549,   551,   555,
     568,   570,   572,   575,   579,   585,   586,   588,   590,   599,
     600,   601,   602,   603,   607,   608,   612,   614,   616,   623,
     624,   625,   627,   631,   633,   641,   643,   651,   656,   661,
     664,   671,   672,   676,   678,   680,   684,   688,   694,   698,
     702,   708,   710,   718,   723,   729,   730,   734,   735,   739,
     741,   743,   750,   751,   752,   754,   759,   761,   763,   765,
     767,   772,   778,   784,   789,   790,   794,   795,   797,   798,
     802,   804,   806,   808,   813,   815,   818,   821,   827,   828,
     829,   837,   841,   844,   848,   853,   860,   865,   870,   875,
     880,   882,   884,   886,   888,   893,   895,   897,   899,   901,
     903,   904,   908,   910,   912,   918,   919,   922,   925,   927,
     930,   947,   949,   951,   957,   958,   959,   960,   961,   973,
     980,   982,   986,   987,   991,   993,   995,   997,  1001,  1006,
    1008,  1010,  1012,  1019,  1021,  1026,  1028,  1032,  1037,  1039,
    1044,  1046,  1049,  1051,  1053,  1055,  1057,  1059,  1061,  1063,
    1065,  1067,  1072,  1074,  1078,  1080,  1083,  1086,  1089,  1092,
    1098,  1100,  1105,  1107,  1117,  1124,  1131,  1136,  1141,  1146,
    1148,  1155,  1157,  1164,  1166,  1173,  1175,  1182,  1183,  1187,
    1188,  1189,  1190,  1191,  1192,  1195,  1204,  1210,  1219,  1230,
    1237,  1248,  1254,  1264,  1270,  1285,  1292,  1294,  1296,  1300,
    1302,  1307,  1310,  1314,  1316,  1318,  1320,  1325,  1330,  1335,
    1336,  1338,  1339,  1341,  1343,  1344,  1345,  1346,  1347,  1349,
    1352,  1355,  1356,  1357,  1359,  1368,  1371,  1374,  1376,  1378,
    1380,  1382,  1384,  1390,  1394,  1399,  1411,  1418,  1419,  1420,
    1421,  1422,  1424,  1426,  1427,  1430,  1433,  1436,  1439,  1443,
    1445,  1452,  1455,  1459,  1466,  1467,  1472,  1473,  1474,  1475,
    1476,  1478,  1482,  1483,  1484,  1485,  1489,  1490,  1495,  1496,
    1502,  1505,  1507,  1510,  1514,  1518,  1524,  1528,  1534,  1542,
    1543
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
  "ALWAYSWITHIN", "HOLDDURING", "HOLDAFTER", "ISVIOLATED", "BOGUS", "NAME",
  "FUNCTION_SYMBOL", "INTVAL", "FLOATVAL", "AT_TIME", "HYPHEN", "PLUS",
  "MUL", "DIV", "UMINUS", "$accept", "mystartsymbol", "c_domain",
  "c_preamble", "c_domain_name", "c_new_class", "c_class", "c_classes",
  "c_class_seq", "c_domain_require_def", "c_reqs", "c_pred_decls",
  "c_pred_decl", "c_new_pred_symbol", "c_pred_symbol",
  "c_init_pred_symbol", "c_func_decls", "c_func_decl", "c_ntype",
  "c_new_func_symbol", "c_typed_var_list", "c_var_symbol_list",
  "c_typed_consts", "c_const_symbols", "c_new_const_symbols",
  "c_typed_types", "c_parameter_symbols", "c_declaration_var_symbol",
  "c_var_symbol", "c_const_symbol", "c_new_const_symbol", "c_either_type",
  "c_new_primitive_type", "c_primitive_type", "c_new_primitive_types",
  "c_primitive_types", "c_init_els", "c_timed_initial_literal",
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
  "c_goal_descriptor", "c_pre_goal_descriptor_list", "c_goal_list",
  "c_forall", "c_exists", "c_proposition", "c_derived_proposition",
  "c_init_proposition", "c_predicates", "c_functions_def",
  "c_constraints_def", "c_constraints_probdef", "c_structure_defs",
  "c_structure_def", "c_class_def", "c_rule_head", "c_derivation_rule",
  "c_action_def", "c_event_def", "c_process_def", "c_durative_action_def",
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
     365,   366,   367,   368,   369,   370
};
# endif

#define YYPACT_NINF -550

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-550)))

#define YYTABLE_NINF -79

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      42,   136,   146,  -550,  -550,    38,  -550,  -550,  -550,    44,
    -550,    43,   -36,    57,   -39,    44,    44,  -550,   -33,  -550,
     247,   106,    17,    80,  -550,   134,   -39,  -550,  -550,   218,
    -550,   122,     8,  -550,   720,   273,   265,   265,   265,   265,
     265,   280,  -550,  -550,  -550,  -550,  -550,  -550,  -550,   265,
     265,  -550,  -550,  -550,   281,  -550,   308,   221,   258,   495,
     302,    70,    73,    79,    85,  -550,   261,   398,   362,  -550,
     329,  -550,  -550,  -550,  -550,  -550,  -550,   702,  -550,  -550,
    -550,  -550,   377,  -550,   221,   403,  -550,   409,   413,   628,
     441,   624,   454,   484,   421,   486,   421,   494,   421,   503,
     421,  -550,   527,   424,   261,   534,    95,   536,   540,   541,
     270,   569,   151,   -14,   572,   510,  -550,  -550,   539,   591,
    -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,   572,   600,
    -550,   572,   572,   266,   572,   572,   572,   266,   266,   266,
     603,  -550,  -550,  -550,   610,  -550,   615,  -550,   631,  -550,
     634,  -550,    23,  -550,  -550,   604,  -550,   523,  -550,  -550,
    -550,   101,  -550,  -550,  -550,  -550,    23,  -550,  -550,  -550,
     523,   508,   623,  -550,   560,  -550,   668,   305,  -550,   670,
     673,  -550,  -550,   572,   678,   572,   572,   572,   266,   572,
     523,   523,   523,   523,   523,   601,  -550,   261,   261,  -550,
     578,   683,   582,   696,  -550,   523,  -550,  -550,   731,   572,
     572,  -550,   572,   572,   192,  -550,  -550,  -550,  -550,  -550,
      75,   740,   741,  -550,   742,  -550,  -550,  -550,  -550,  -550,
     748,  -550,   749,   750,   572,   572,   767,   768,   769,   770,
     773,   780,  -550,  -550,  -550,  -550,   523,  -550,    23,  -550,
     781,  -550,  -550,  -550,  -550,   320,   381,   572,   782,   200,
     365,  -550,    75,  -550,  -550,   523,   523,   784,  -550,  -550,
    -550,   785,   786,  -550,   600,   699,   745,   746,   733,    86,
    -550,   523,   523,   682,  -550,  -550,  -550,   790,  -550,  -550,
     689,  -550,   788,  -550,    75,    75,    75,    75,   789,   794,
     795,   796,   462,   784,   784,   797,   784,   784,   784,   784,
     784,  -550,  -550,   798,   800,   572,   572,   801,  -550,  -550,
    -550,  -550,   711,  -550,  -550,  -550,  -550,   207,   215,    19,
      75,    75,    75,   700,  -550,   572,   572,   407,  -550,   261,
    -550,   344,   209,   800,  -550,  -550,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,   298,   755,  -550,  -550,   757,   758,   485,
    -550,  -550,  -550,  -550,  -550,   806,   807,   808,   809,  -550,
     810,   811,   812,   354,   813,  -550,   418,   814,   712,   713,
     815,  -550,  -550,    62,   818,  -550,    34,   429,   820,   821,
     822,   821,   823,   824,  -550,  -550,  -550,  -550,   736,    37,
    -550,  -550,  -550,  -550,   223,  -550,  -550,  -550,   108,   826,
     827,  -550,   165,  -550,  -550,  -550,  -550,  -550,  -550,   196,
     828,  -550,   498,  -550,  -550,  -550,  -550,   829,  -550,   572,
     830,  -550,  -550,  -550,   431,   523,   341,   831,  -550,  -550,
    -550,  -550,  -550,  -550,    -8,   832,   833,   -12,   -12,   434,
     759,  -550,   835,   836,  -550,   600,   837,  -550,   439,  -550,
     523,   839,    65,  -550,  -550,  -550,  -550,   723,  -550,   840,
     737,  -550,  -550,    62,    62,    62,    62,   841,  -550,   842,
    -550,  -550,  -550,   843,   369,   845,   572,   846,  -550,  -550,
      65,    65,  -550,  -550,   760,   761,  -550,  -550,    75,   191,
    -550,  -550,   408,  -550,  -550,  -550,   847,  -550,  -550,  -550,
     850,   744,   851,   356,   266,   477,   230,   852,  -550,   853,
     241,   242,    62,    62,    62,    62,  -550,  -550,   800,   854,
     605,   855,   857,  -550,  -550,  -550,   857,   857,  -550,   -14,
     858,   857,   523,   483,    45,    45,   783,   787,   859,  -550,
     109,   572,   572,   572,  -550,   861,   863,   863,  -550,   835,
     572,    65,    65,    65,    65,    65,   864,  -550,   866,  -550,
     867,  -550,  -550,  -550,  -550,  -550,  -550,  -550,    62,  -550,
      62,  -550,  -550,   868,   810,  -550,  -550,    65,    65,  -550,
    -550,  -550,  -550,  -550,   869,   870,  -550,  -550,   762,  -550,
     872,   873,    75,    75,  -550,   282,   875,   876,   877,   878,
     879,   502,  -550,   612,   880,  -550,  -550,  -550,  -550,   881,
     561,   836,   883,    52,    52,    75,    75,    75,   523,   489,
     884,  -550,  -550,  -550,  -550,   574,    75,    75,  -550,   821,
      59,  -550,  -550,   885,   886,   887,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,    65,    65,    65,    65,    65,  -550,  -550,
    -550,  -550,   888,   269,  -550,   889,   517,   890,   891,   892,
     893,   894,   895,   896,   897,   110,   826,   899,  -550,   630,
    -550,  -550,  -550,  -550,   900,    75,   799,   901,   902,  -550,
     590,    66,    66,    66,    66,    66,  -550,   903,  -550,   572,
      65,    65,   905,  -550,    59,  -550,  -550,  -550,  -550,  -550,
    -550,  -550,   836,   600,   906,   613,   523,  -550,   907,   908,
    -550,  -550,   664,  -550,  -550,  -550,  -550,   669,   834,   909,
    -550,  -550,  -550,   910,   912,   913,   914,  -550,   622,   883,
      45,    45,   523,   128,   915,   916,  -550,  -550,   917,  -550,
    -550,    66,    66,    66,    66,  -550,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,   918,   919,   920,   921,  -550,  -550,   866,
      66,    66,    66,    66,  -550,  -550,  -550,   883,   922,   923,
     924,   925,   926,   927,  -550,  -550,  -550,  -550,  -550,  -550
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     343,     0,     0,   350,   349,     0,     2,     3,     4,   343,
     345,   347,     0,     0,    49,   343,   343,     1,     0,   340,
       0,     0,     0,     0,    60,     0,    49,   342,   341,     0,
     344,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       0,    14,   248,   254,   253,   249,   250,   251,   252,     0,
       0,   348,    48,   346,     0,   306,     0,    20,     0,     0,
       0,     0,     0,     0,     0,   256,    51,     0,     0,    66,
       0,     5,    13,     7,    10,    11,    12,     0,   247,     9,
       8,    15,     0,    16,    20,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,     0,    47,    51,     0,     0,     0,    26,     0,
       0,     0,    54,     0,     0,     0,    19,    18,     0,     0,
      22,    21,   293,   279,   280,   294,   282,   281,   283,   284,
     285,   295,   286,   287,   291,   292,   290,   289,   288,   296,
     297,   298,   299,   300,   301,   302,    23,   244,     0,     0,
     234,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   243,   259,   278,     0,   263,     0,   261,     0,   265,
       0,   303,     0,    50,   240,     0,    29,    44,   239,    25,
     242,     0,   241,    33,   304,    63,     0,    65,    30,    31,
      44,     0,     0,   222,     0,   255,     0,     0,   209,     0,
       0,   175,   176,     0,     0,     0,     0,     0,     0,     0,
      44,    44,    44,    44,    44,     0,    64,    51,    51,    28,
       0,     0,    42,     0,    39,    44,    66,    66,     0,     0,
       0,   235,     0,     0,   188,   184,   185,   186,   187,    57,
       0,     0,     0,   257,     0,   212,   210,   208,   213,   214,
       0,   216,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    46,    45,    58,    44,    27,     0,    36,
       0,    53,    52,   237,   233,     0,     0,     0,     0,     0,
       0,   179,     0,   170,   171,    44,    44,   314,   215,   217,
     218,     0,     0,   221,     0,     0,     0,     0,     0,     0,
      43,    44,    44,    38,   224,   232,   225,     0,   223,   236,
       0,    55,    57,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   314,   314,     0,   314,   314,   314,   314,
     314,   219,   220,     0,     0,     0,     0,     0,    62,    67,
      41,    40,     0,    35,   226,    59,    56,     0,     0,     0,
       0,     0,     0,     0,   229,     0,     0,     0,    73,    51,
     317,     0,     0,     0,   307,   311,   305,   308,   309,   310,
     312,   313,   211,     0,     0,   189,   207,     0,     0,     0,
     268,    37,   178,   177,   165,     0,     0,     0,     0,    57,
       0,     0,     0,     0,     0,   198,     0,     0,     0,     0,
       0,   324,   325,     0,     0,   193,     0,     0,     0,     0,
       0,     0,     0,     0,   153,   150,   149,   148,     0,     0,
     167,   166,   168,   169,     0,   227,   228,   246,     0,     0,
       0,   245,     0,   316,    72,    71,    70,   157,   315,     0,
       0,   320,     0,   329,   183,   328,   327,     0,   318,     0,
       0,   192,   231,   207,     0,    44,     0,     0,    79,    81,
      80,    83,    82,   155,     0,     0,     0,     0,     0,     0,
       0,   264,     0,     0,   180,     0,     0,   204,     0,   198,
      44,     0,     0,    32,    73,    57,   322,     0,   323,     0,
       0,    57,    57,     0,     0,     0,     0,     0,   319,     0,
     205,   190,   230,     0,     0,     0,     0,     0,   258,   135,
       0,     0,   262,   260,     0,     0,   144,   152,     0,     0,
     267,   269,     0,   266,    99,   100,     0,   194,   196,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   331,     0,
       0,     0,     0,     0,     0,     0,   326,   206,     0,     0,
       0,     0,    78,    85,    86,    87,    78,    78,    88,     0,
       0,    78,    44,     0,     0,     0,     0,     0,     0,   151,
       0,     0,     0,     0,   272,     0,     0,     0,   102,     0,
       0,     0,     0,     0,     0,     0,     0,   195,     0,   156,
       0,    74,   238,   321,   330,   182,   181,   333,   336,   332,
     338,   334,   335,     0,     0,    94,    92,     0,     0,    93,
      75,    77,    76,   154,     0,     0,   133,   134,     0,   174,
       0,     0,     0,     0,   145,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,   118,   121,   119,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,    69,   337,   339,   191,     0,     0,     0,   159,     0,
       0,   131,   132,     0,     0,     0,   277,   273,   274,   275,
     270,   271,   125,     0,     0,     0,     0,     0,   103,   104,
      95,   101,     0,     0,   114,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   197,     0,
      84,    89,    90,    91,     0,     0,     0,     0,     0,   276,
       0,     0,     0,     0,     0,     0,    97,     0,   116,     0,
       0,     0,     0,    98,     0,   161,   105,   162,   106,   163,
     164,   160,     0,     0,     0,     0,    44,   158,     0,     0,
     146,   147,     0,   117,   124,   122,   123,     0,     0,     0,
     136,   138,   139,     0,     0,     0,     0,   110,     0,     0,
       0,     0,    44,     0,     0,     0,   199,   201,     0,   172,
     173,     0,     0,     0,     0,   137,   127,   128,   129,   130,
     126,   111,   115,     0,     0,     0,     0,    96,   200,     0,
       0,     0,     0,     0,   113,   108,   109,     0,     0,     0,
       0,     0,     0,     0,   202,   141,   140,   142,   143,   112
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -550,  -550,  -550,   729,  -550,  -550,   803,  -550,   819,   378,
    -550,   779,  -550,  -550,   825,  -550,  -550,  -550,  -550,  -550,
    -179,   643,  -197,   844,   838,   453,  -259,  -550,  -550,   227,
    -550,    36,  -550,  -158,  -550,  -550,   448,  -550,  -207,  -407,
    -550,  -550,  -550,  -550,  -492,  -550,  -550,  -550,  -528,  -550,
     357,  -550,  -550,   225,   370,  -550,  -289,  -550,   467,   264,
      87,  -550,  -399,  -396,  -550,  -550,  -393,  -392,  -446,  -216,
    -540,  -152,  -395,  -550,  -550,  -349,  -354,   148,   243,  -550,
    -550,   -60,  -112,  -550,   710,   -83,  -550,  -359,  -550,   460,
    -550,   856,  -550,  -550,  -550,   904,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,  -550,  -549,  -550,  -507,   193,  -550,  -550,
    -550,  -550,   226,  -550,  -550,  -550,  -550,  -550,  -550,  -550,
    -339,  -550,   346,   347,   249,  -550,   928,  -550,   930
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    35,    23,    84,   318,    36,    85,    37,
      89,   107,   108,   177,   239,   485,   110,   183,   343,   225,
     221,   222,   102,    25,   103,   111,   279,   266,   346,   311,
     104,   217,   187,   218,   112,   299,   396,   434,   551,   457,
     552,   553,   655,   458,   523,   640,   524,   684,   685,   758,
     634,   635,   710,   636,   465,   563,   749,   750,   380,   418,
     568,   469,   554,   555,   435,   436,   556,   557,   558,   569,
     620,   283,   284,   446,   240,   374,   477,   650,   478,   375,
     197,   333,   376,   454,   275,   507,   242,   193,   114,   437,
      38,    39,    40,   324,    41,    42,    43,    70,    44,    45,
      46,    47,    48,   419,   520,   631,   521,   164,   146,    49,
      50,     7,   325,   326,   327,   363,   328,   329,   330,   403,
     598,   497,   599,   601,     8,     9,    10,    11,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,   203,   192,   394,   466,   207,   208,   209,   160,    55,
     459,   228,   459,   460,   404,   460,   461,   462,   461,   462,
     263,   264,   280,   384,   282,   621,   215,   525,   227,    31,
     641,   257,   258,   259,   260,   261,   196,   191,    17,   199,
     200,   471,   204,   205,   206,     1,   270,    18,   618,    20,
     463,   509,   463,   347,   348,   686,   255,    21,   452,   188,
      22,   415,   280,   627,   447,   442,   319,    24,   533,   747,
       2,    93,     2,    14,    95,   510,   511,   416,   280,   417,
      97,    33,   671,    34,   472,    32,    99,   534,   473,   198,
     338,   250,   189,   252,   253,   254,   175,   256,   349,   350,
     351,   352,   223,   688,   690,   502,   320,   321,   241,    18,
     302,    91,   625,    91,    56,   564,   565,   274,   274,   665,
     277,   278,   340,   341,   529,   619,   281,   201,   202,   216,
     424,   280,   619,   385,   386,   387,   388,   247,    51,   705,
     449,   339,   291,   292,   443,   463,   560,    13,   681,   682,
       3,     4,     3,     4,   542,   543,   544,   545,   748,   281,
     201,   202,   397,   305,   305,   307,   281,   201,   202,   444,
     201,   202,   281,   281,   201,   202,    94,   637,   637,    96,
     638,   638,   281,   201,   202,    98,   643,   644,   645,   646,
     647,   100,   216,   463,   525,   525,   -30,   463,   463,   603,
     486,   176,   463,   597,   309,   600,   602,   224,   739,   703,
     400,   382,   656,   657,   475,   626,   733,   463,   463,   383,
     784,   785,   226,   377,   378,    53,   536,   474,    54,   481,
     782,   783,   540,   541,   592,   281,   201,   202,   482,   570,
     764,    26,    14,   390,   391,   595,   596,   571,   572,   573,
     574,   445,   704,    26,    15,    16,   701,   185,    19,   702,
     459,   600,   186,   460,    27,    28,   461,   462,    34,   803,
     717,   483,   487,   181,   182,   484,   503,    71,   711,   712,
     713,   714,   715,    77,   -30,    81,   525,   401,   402,   166,
     408,   168,   310,   170,   450,   453,   463,   395,   -30,   310,
     463,   530,   405,    90,   301,    91,    24,   310,    91,   246,
     430,   745,    82,    24,   746,   310,   752,   752,   752,   752,
     752,    24,   310,   191,   304,   760,   761,    83,   718,    24,
     570,   150,   113,   310,   310,   719,    24,   499,   571,   572,
     573,   445,   445,   445,   445,   610,   406,    24,    24,   611,
     612,   463,   720,   721,   614,     3,     4,   407,   230,   231,
     150,   232,   233,   109,    86,   -34,   -34,   101,   476,   479,
     549,   234,   550,   -78,   201,   202,   752,   752,   752,   752,
     115,   529,   590,   615,   191,   306,   235,   236,   237,   238,
     445,   445,   445,   445,   561,   752,   752,   752,   752,   105,
     504,   106,   428,   150,   189,   505,   506,   117,   392,   575,
     393,   148,   118,   429,   188,   526,   150,   120,   395,   398,
     399,   432,   433,   753,   754,   755,   756,   687,   689,   691,
     692,   693,   373,   451,   373,   501,   604,   379,   516,   586,
     687,   689,   393,   528,   706,   147,   445,   189,   445,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   161,   628,
     629,   630,   312,   313,   576,   577,   163,   578,   642,   694,
     150,   312,   313,   579,   580,    59,   314,   315,   316,   317,
     432,   591,   790,   791,   792,   793,   464,   616,   162,   738,
     165,   581,   582,   583,   584,   585,    88,   357,   167,   -24,
     -24,   799,   800,   801,   802,   519,   670,   169,   763,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   171,   358,   359,   360,   172,   361,   695,   174,   362,
     178,   412,   413,   106,   414,   180,   148,   387,   696,   364,
     365,   150,   367,   368,   369,   370,   371,   768,   415,   751,
     751,   751,   751,   751,   522,   680,   697,   229,   230,   231,
     150,   232,   233,   184,   416,   191,   417,   699,   700,   194,
     489,   234,    68,   786,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   742,   743,   195,   235,   236,   237,   238,
     722,   -24,   490,    91,   491,   492,   210,   759,   219,   493,
     494,   495,   496,   211,   189,   220,   393,   767,   212,   751,
     751,   751,   751,   312,   313,   683,   781,   243,   314,   315,
     724,   317,   121,   122,   213,   734,   479,   214,   751,   751,
     751,   751,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   606,   323,   244,   150,   262,   505,
     506,   672,   245,   765,   248,   395,   505,   249,   188,   271,
     272,   148,   251,   149,   265,   188,   150,   267,   607,   608,
     583,   584,   585,   268,   505,   673,   674,   675,   676,   677,
     269,   323,   323,   188,   323,   323,   323,   323,   323,   663,
     664,   189,    58,   607,   608,   583,   584,   585,   189,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   505,    57,
      58,   514,   515,    59,   145,   273,   189,   188,    61,    62,
      63,    64,    65,   285,   286,   334,   287,   673,   674,   675,
     676,   677,   288,   289,   290,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    72,    73,    74,    75,    76,
     189,   293,   294,   295,   296,   312,   313,   297,    79,    80,
     771,   772,   773,   774,   298,   303,   308,   322,   337,   331,
     332,   335,   336,   342,   344,   345,   -17,   353,   354,   355,
     356,   366,   372,   373,   379,   381,   409,   389,   410,   411,
     420,   421,   422,   423,   425,   426,   427,   431,   438,   441,
     439,   440,   448,   455,   456,   464,   467,   468,   470,   393,
     480,   537,   488,   498,   500,   508,   512,   513,   519,   522,
     518,   527,   531,   539,   538,   546,   547,   548,   559,   562,
     483,   587,   566,   567,   588,   589,   593,   594,   605,   609,
     550,    87,   613,   624,   622,   632,   633,   648,   623,   649,
      52,   651,   654,   658,   659,   660,   661,   662,   625,   739,
     666,   667,   668,   669,   678,   679,   683,   179,   698,   707,
     708,   709,   716,   723,   725,   726,   727,   728,   729,   730,
     731,   732,   736,   116,   737,   740,   741,   757,   762,   300,
     766,   769,   770,   776,   777,   775,   778,   779,   780,   787,
     788,   789,   794,   795,   796,   797,   804,   805,   806,   807,
     808,   809,   535,   617,   639,   744,   517,   798,   190,   735,
     276,   532,   173,   119,   652,    78,     0,   653,     0,    30,
      29
};

static const yytype_int16 yycheck[] =
{
      60,   153,   114,   357,   411,   157,   158,   159,    91,     1,
     409,   190,   411,   409,   363,   411,   409,   409,   411,   411,
     217,   218,     3,     4,   240,   565,     3,   473,   186,    12,
     579,   210,   211,   212,   213,   214,   148,     3,     0,   151,
     152,     4,   154,   155,   156,     3,   225,     3,     3,     6,
     409,    59,   411,   312,   313,     3,   208,    93,   407,    73,
       3,    73,     3,   570,   403,     3,   282,   106,     3,     3,
      28,     1,    28,   106,     1,    83,    84,    89,     3,    91,
       1,     1,   631,     3,    47,    68,     1,   482,    51,   149,
       4,   203,   106,   205,   206,   207,     1,   209,   314,   315,
     316,   317,     1,   643,   644,   454,   285,   286,   191,     3,
     268,     3,     3,     3,   106,   510,   511,   229,   230,   626,
     232,   233,   301,   302,   478,    80,   107,   108,   109,   106,
     389,     3,    80,   349,   350,   351,   352,   197,     4,    80,
     106,   299,   254,   255,    82,   504,   505,    11,   640,   641,
     108,   109,   108,   109,   493,   494,   495,   496,    92,   107,
     108,   109,   359,   275,   276,   277,   107,   108,   109,   107,
     108,   109,   107,   107,   108,   109,   106,   576,   577,   106,
     576,   577,   107,   108,   109,   106,   581,   582,   583,   584,
     585,   106,   106,   552,   640,   641,     4,   556,   557,   548,
       4,   106,   561,   542,     4,   544,   545,   106,    80,   655,
       1,     4,   607,   608,   106,   106,   106,   576,   577,     4,
     760,   761,   186,   335,   336,     7,   485,     4,   106,    64,
     758,   759,   491,   492,     4,   107,   108,   109,    73,    48,
     732,    14,   106,   355,   356,     4,     4,    56,    57,    58,
      59,   403,   659,    26,   108,   109,   655,   106,     9,   655,
     659,   600,   111,   659,    15,    16,   659,   659,     3,   797,
       1,   106,    76,     3,     4,   110,   455,     4,   673,   674,
     675,   676,   677,     3,    92,     4,   732,    78,    79,    96,
     373,    98,    92,   100,   406,   407,   655,   357,   106,    92,
     659,   480,     4,     1,   268,     3,   106,    92,     3,     4,
     393,   710,     4,   106,   710,    92,   711,   712,   713,   714,
     715,   106,    92,     3,     4,   720,   721,   106,    59,   106,
      48,    62,     3,    92,    92,    66,   106,   449,    56,    57,
      58,   493,   494,   495,   496,   552,    48,   106,   106,   556,
     557,   710,    83,    84,   561,   108,   109,    59,    60,    61,
      62,    63,    64,     1,   106,     3,     4,   106,   428,   429,
       1,    73,     3,     4,   108,   109,   771,   772,   773,   774,
       3,   735,   534,   562,     3,     4,    88,    89,    90,    91,
     542,   543,   544,   545,   506,   790,   791,   792,   793,     1,
      59,     3,    48,    62,   106,    64,    65,     4,     1,     1,
       3,    57,     3,    59,    73,   475,    62,     4,   478,    75,
      76,     3,     4,   712,   713,   714,   715,   643,   644,   645,
     646,   647,     3,     4,     3,     4,   548,     3,     4,   522,
     656,   657,     3,     4,   660,     4,   598,   106,   600,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     4,   571,
     572,   573,   106,   107,    56,    57,    45,    59,   580,   648,
      62,   106,   107,    65,    66,    13,   111,   112,   113,   114,
       3,     4,   771,   772,   773,   774,     3,     4,     4,   705,
       4,    83,    84,    85,    86,    87,     1,    35,     4,     4,
       5,   790,   791,   792,   793,     3,     4,     4,   724,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     4,    70,    71,    72,   111,    74,    48,     4,    77,
       4,    56,    57,     3,    59,     4,    57,   763,    59,   323,
     324,    62,   326,   327,   328,   329,   330,   736,    73,   711,
     712,   713,   714,   715,     3,     4,   649,    59,    60,    61,
      62,    63,    64,     4,    89,     3,    91,     3,     4,    69,
      82,    73,    43,   762,    95,    96,    97,    98,    99,   100,
     101,   102,   103,     3,     4,     4,    88,    89,    90,    91,
     683,   106,   104,     3,   106,   107,     3,   719,     4,   111,
     112,   113,   114,     3,   106,    92,     3,     4,     3,   771,
     772,   773,   774,   106,   107,     3,     4,     4,   111,   112,
     113,   114,     4,     5,     3,   695,   696,     3,   790,   791,
     792,   793,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    59,   287,   106,    62,    67,    64,
      65,    59,     4,   733,     4,   735,    64,     4,    73,   226,
     227,    57,     4,    59,   106,    73,    62,     4,    83,    84,
      85,    86,    87,   111,    64,    83,    84,    85,    86,    87,
       4,   323,   324,    73,   326,   327,   328,   329,   330,   622,
     623,   106,    10,    83,    84,    85,    86,    87,   106,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    64,     9,
      10,   467,   468,    13,   106,     4,   106,    73,    36,    37,
      38,    39,    40,     3,     3,    46,     4,    83,    84,    85,
      86,    87,     4,     4,     4,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    36,    37,    38,    39,    40,
     106,     4,     4,     4,     4,   106,   107,     4,    49,    50,
     111,   112,   113,   114,     4,     4,     4,     3,    55,     4,
       4,    46,    46,   111,     4,   106,     8,     8,     4,     4,
       4,     4,     4,     3,     3,    94,    51,   107,    51,    51,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     108,   108,     4,     3,     3,     3,     3,     3,    92,     3,
       3,   108,     4,     4,     4,     4,     4,     4,     3,     3,
      81,     4,     3,   106,     4,     4,     4,     4,     3,     3,
     106,     4,    92,    92,     4,     4,     4,     4,     4,     4,
       3,    58,     4,     4,    81,     4,     3,     3,    81,     3,
      26,     4,     4,     4,     4,   113,     4,     4,     3,    80,
       4,     4,     4,     4,     4,     4,     3,   108,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     3,    84,     4,     4,     4,     4,     3,   266,
       4,     4,     4,     4,     4,    81,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,   484,   563,   577,   710,   469,   789,   113,   696,
     230,   481,   104,    87,   598,    41,    -1,   600,    -1,    21,
      20
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,   108,   109,   117,   118,   227,   240,   241,
     242,   243,   244,    11,   106,   108,   109,     0,     3,   240,
       6,    93,     3,   120,   106,   139,   145,   240,   240,   244,
     242,    12,    68,     1,     3,   119,   123,   125,   206,   207,
     208,   210,   211,   212,   214,   215,   216,   217,   218,   225,
     226,     4,   139,     7,   106,     1,   106,     9,    10,    13,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
     213,     4,   119,   119,   119,   119,   119,     3,   211,   119,
     119,     4,     4,   106,   121,   124,   106,   122,     1,   126,
       1,     3,   197,     1,   106,     1,   106,     1,   106,     1,
     106,   106,   138,   140,   146,     1,     3,   127,   128,     1,
     132,   141,   150,     3,   204,     3,   124,     4,     3,   207,
       4,     4,     5,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   106,   224,     4,    57,    59,
      62,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     201,     4,     4,    45,   223,     4,   223,     4,   223,     4,
     223,     4,   111,   140,     4,     1,   106,   129,     4,   127,
       4,     3,     4,   133,     4,   106,   111,   148,    73,   106,
     130,     3,   198,   203,    69,     4,   198,   196,   197,   198,
     198,   108,   109,   187,   198,   198,   198,   187,   187,   187,
       3,     3,     3,     3,     3,     3,   106,   147,   149,     4,
      92,   136,   137,     1,   106,   135,   147,   149,   136,    59,
      60,    61,    63,    64,    73,    88,    89,    90,    91,   130,
     190,   201,   202,     4,   106,     4,     4,   197,     4,     4,
     198,     4,   198,   198,   198,   187,   198,   136,   136,   136,
     136,   136,    67,   138,   138,   106,   143,     4,   111,     4,
     136,   141,   141,     4,   198,   200,   200,   198,   198,   142,
       3,   107,   185,   187,   188,     3,     3,     4,     4,     4,
       4,   198,   198,     4,     4,     4,     4,     4,     4,   151,
     137,   147,   149,     4,     4,   198,     4,   198,     4,     4,
      92,   145,   106,   107,   111,   112,   113,   114,   122,   185,
     136,   136,     3,   125,   209,   228,   229,   230,   232,   233,
     234,     4,     4,   197,    46,    46,    46,    55,     4,   149,
     136,   136,   111,   134,     4,   106,   144,   142,   142,   185,
     185,   185,   185,     8,     4,     4,     4,    35,    70,    71,
      72,    74,    77,   231,   228,   228,     4,   228,   228,   228,
     228,   228,     4,     3,   191,   195,   198,   198,   198,     3,
     174,    94,     4,     4,     4,   185,   185,   185,   185,   107,
     198,   198,     1,     3,   192,   197,   152,   138,    75,    76,
       1,    78,    79,   235,   191,     4,    48,    59,   201,    51,
      51,    51,    56,    57,    59,    73,    89,    91,   175,   219,
       4,     4,     4,     4,   142,     4,     4,     4,    48,    59,
     201,     4,     3,     4,   153,   180,   181,   205,     4,   108,
     108,     4,     3,    82,   107,   187,   189,   236,     4,   106,
     198,     4,   191,   198,   199,     3,     3,   155,   159,   178,
     179,   182,   183,   203,     3,   170,   155,     3,     3,   177,
      92,     4,    47,    51,     4,   106,   197,   192,   194,   197,
       3,    64,    73,   106,   110,   131,     4,    76,     4,    82,
     104,   106,   107,   111,   112,   113,   114,   237,     4,   198,
       4,     4,   191,   136,    59,    64,    65,   201,     4,    59,
      83,    84,     4,     4,   175,   175,     4,   174,    81,     3,
     220,   222,     3,   160,   162,   184,   197,     4,     4,   192,
     136,     3,   205,     3,   188,   152,   142,   108,     4,   106,
     142,   142,   236,   236,   236,   236,     4,     4,     4,     1,
       3,   154,   156,   157,   178,   179,   182,   183,   184,     3,
     203,   198,     3,   171,   188,   188,    92,    92,   176,   185,
      48,    56,    57,    58,    59,     1,    56,    57,    59,    65,
      66,    83,    84,    85,    86,    87,   201,     4,     4,     4,
     187,     4,     4,     4,     4,     4,     4,   236,   236,   238,
     236,   239,   236,   191,   198,     4,    59,    83,    84,     4,
     154,   154,   154,     4,   154,   136,     4,   170,     3,    80,
     186,   186,    81,    81,     4,     3,   106,   222,   198,   198,
     198,   221,     4,     3,   166,   167,   169,   178,   179,   166,
     161,   220,   198,   188,   188,   188,   188,   188,     3,     3,
     193,     4,   238,   239,     4,   158,   188,   188,     4,     4,
     113,     4,     4,   176,   176,   222,     4,     4,     4,     4,
       4,   220,    59,    83,    84,    85,    86,    87,     4,     4,
       4,   160,   160,     3,   163,   164,     3,   185,   186,   185,
     186,   185,   185,   185,   136,    48,    59,   201,     4,     3,
       4,   178,   179,   184,   155,    80,   185,     4,     4,     4,
     168,   188,   188,   188,   188,   188,     4,     1,    59,    66,
      83,    84,   201,     4,   113,     4,     4,     4,     4,     4,
       4,     4,     4,   106,   197,   194,     3,     4,   185,    80,
       4,     4,     3,     4,   169,   178,   179,     3,    92,   172,
     173,   187,   188,   172,   172,   172,   172,     4,   165,   198,
     188,   188,     3,   185,   160,   197,     4,     4,   136,     4,
       4,   111,   112,   113,   114,    81,     4,     4,     4,     4,
       4,     4,   164,   164,   186,   186,   136,     4,     4,     4,
     172,   172,   172,   172,     4,     4,     4,     4,   193,   172,
     172,   172,   172,   164,     4,     4,     4,     4,     4,     4
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   116,   117,   117,   117,   118,   118,   119,   119,   119,
     119,   119,   119,   119,   119,   120,   121,   122,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     130,   130,   131,   132,   132,   133,   133,   134,   134,   135,
     136,   136,   136,   137,   137,   138,   138,   138,   139,   139,
     140,   140,   141,   141,   141,   142,   142,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   150,   151,   151,   152,
     152,   152,   152,   152,   153,   154,   154,   154,   154,   155,
     155,   155,   155,   155,   156,   156,   157,   157,   157,   158,
     158,   158,   158,   159,   159,   160,   160,   160,   160,   160,
     160,   161,   161,   162,   162,   162,   162,   162,   163,   163,
     163,   164,   164,   164,   164,   165,   165,   166,   166,   167,
     167,   167,   168,   168,   168,   168,   169,   169,   169,   169,
     169,   170,   170,   170,   171,   171,   172,   172,   172,   172,
     173,   173,   173,   173,   174,   174,   174,   174,   175,   175,
     175,   176,   177,   177,   178,   179,   180,   181,   182,   183,
     184,   184,   184,   184,   184,   185,   185,   185,   185,   185,
     185,   185,   186,   186,   186,   187,   187,   188,   188,   188,
     188,   189,   189,   189,   190,   190,   190,   190,   190,   191,
     191,   191,   191,   191,   192,   192,   192,   192,   192,   193,
     193,   193,   193,   194,   194,   195,   195,   195,   196,   196,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   198,   198,   198,   198,   198,   198,   198,   198,
     199,   199,   200,   200,   201,   202,   203,   204,   205,   206,
     206,   207,   207,   208,   208,   209,   209,   210,   210,   211,
     211,   211,   211,   211,   211,   212,   213,   214,   215,   215,
     216,   216,   217,   217,   218,   218,   219,   219,   219,   220,
     220,   221,   221,   222,   222,   222,   222,   222,   223,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   225,   226,   227,   227,   228,   228,   228,
     228,   228,   228,   228,   228,   229,   230,   231,   232,   233,
     233,   234,   234,   234,   235,   235,   236,   236,   236,   236,
     236,   236,   237,   237,   237,   237,   238,   238,   239,   239,
     240,   240,   240,   240,   241,   241,   242,   242,   243,   244,
     244
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     5,     4,     2,     2,     2,
       2,     2,     2,     2,     1,     4,     1,     1,     4,     2,
       0,     4,     4,     2,     0,     2,     1,     4,     3,     1,
       1,     1,     1,     2,     0,     5,     3,     2,     0,     1,
       4,     4,     1,     3,     0,     4,     4,     1,     2,     0,
       2,     0,     4,     4,     1,     2,     3,     0,     1,     1,
       1,     1,     4,     1,     1,     2,     0,     2,     0,     6,
       2,     2,     2,     0,     4,     2,     2,     2,     0,     1,
       1,     1,     1,     1,     4,     1,     1,     1,     1,     2,
       2,     2,     0,     4,     4,     4,     7,     5,     5,     1,
       1,     2,     0,     4,     4,     5,     5,     3,     5,     5,
       3,     4,     7,     5,     1,     2,     0,     4,     1,     1,
       1,     1,     2,     2,     2,     0,     5,     5,     5,     5,
       5,     5,     5,     4,     2,     0,     1,     2,     1,     1,
       5,     5,     5,     5,     4,     6,     9,     9,     1,     1,
       1,     1,     2,     0,     4,     1,     4,     1,     7,     5,
       5,     5,     5,     5,     5,     4,     5,     5,     5,     5,
       1,     1,     5,     5,     1,     1,     1,     4,     4,     1,
       6,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     7,     3,     2,     4,     5,     4,     7,     1,     4,
       5,     4,     7,     2,     1,     4,     5,     1,     2,     1,
       4,     7,     4,     4,     4,     5,     4,     5,     5,     6,
       6,     5,     1,     4,     4,     4,     5,     7,     7,     5,
       2,     1,     2,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     2,     1,     1,
       1,     1,     1,     1,     1,     5,     1,     5,    12,     4,
      12,     4,    12,     4,    11,     4,     3,     3,     0,     1,
       4,     2,     0,     4,     4,     4,     5,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,    12,     5,     2,     2,     2,
       2,     2,     2,     2,     0,     4,     4,     1,     4,     5,
       4,     7,     5,     5,     1,     1,     3,     1,     1,     1,
       4,     3,     3,     3,     3,     3,     1,     2,     1,     2,
       2,     3,     3,     0,     3,     1,     4,     1,     4,     1,
       1
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
#line 260 "src/pddl+.yacc" /* yacc.c:1646  */
    {top_thing= (yyvsp[0].t_domain); current_analysis->the_domain= (yyvsp[0].t_domain);}
#line 2076 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 261 "src/pddl+.yacc" /* yacc.c:1646  */
    {top_thing= (yyvsp[0].t_problem); current_analysis->the_problem= (yyvsp[0].t_problem);}
#line 2082 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 262 "src/pddl+.yacc" /* yacc.c:1646  */
    {top_thing= (yyvsp[0].t_plan); }
#line 2088 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 267 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[-1].t_domain); (yyval.t_domain)->name= (yyvsp[-2].cp);delete [] (yyvsp[-2].cp);
	if (types_used && !types_defined) {
		yyerrok; log_error(E_FATAL,"Syntax error in domain - no :types section, but types used in definitions.");
	}
	}
#line 2098 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 273 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_domain)=static_cast<domain*>(NULL);
       	log_error(E_FATAL,"Syntax error in domain"); }
#line 2105 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 279 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain); (yyval.t_domain)->req= (yyvsp[-1].t_pddl_req_flag);}
#line 2111 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 280 "src/pddl+.yacc" /* yacc.c:1646  */
    {types_defined = true; (yyval.t_domain)= (yyvsp[0].t_domain); (yyval.t_domain)->types= (yyvsp[-1].t_type_list);}
#line 2117 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 281 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain); (yyval.t_domain)->constants= (yyvsp[-1].t_const_symbol_list);}
#line 2123 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 282 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain);
                                       (yyval.t_domain)->predicates= (yyvsp[-1].t_pred_decl_list); }
#line 2130 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 284 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain);
                                       (yyval.t_domain)->functions= (yyvsp[-1].t_func_decl_list); }
#line 2137 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 286 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain);
   				       (yyval.t_domain)->constraints = (yyvsp[-1].t_con_goal);}
#line 2144 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 288 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain) = (yyvsp[0].t_domain);}
#line 2150 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 289 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_domain)= new domain((yyvsp[0].t_structure_store)); }
#line 2156 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 292 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.cp)=(yyvsp[-1].cp);}
#line 2162 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 296 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_class)=current_analysis->classes_tab.new_symbol_put((yyvsp[0].cp));
       delete [] (yyvsp[0].cp); }
#line 2169 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 299 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_class) = current_analysis->classes_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2175 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 301 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_dummy) = 0;}
#line 2181 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 303 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_dummy) = 0;}
#line 2187 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 304 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_dummy) = 0;}
#line 2193 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 309 "src/pddl+.yacc" /* yacc.c:1646  */
    {
	// Stash in analysis object --- we need to refer to it during parse
	//   but domain object is not created yet,
	current_analysis->req |= (yyvsp[-1].t_pddl_req_flag);
	(yyval.t_pddl_req_flag)=(yyvsp[-1].t_pddl_req_flag);
    }
#line 2204 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 316 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
       log_error(E_FATAL,"Syntax error in requirements declaration.");
       (yyval.t_pddl_req_flag)= 0; }
#line 2212 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 322 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_pddl_req_flag)= (yyvsp[-1].t_pddl_req_flag) | (yyvsp[0].t_pddl_req_flag); }
#line 2218 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 323 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_pddl_req_flag)= 0; }
#line 2224 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 329 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pred_decl_list)=(yyvsp[0].t_pred_decl_list); (yyval.t_pred_decl_list)->push_front((yyvsp[-1].t_pred_decl));}
#line 2230 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 331 "src/pddl+.yacc" /* yacc.c:1646  */
    {  (yyval.t_pred_decl_list)=new pred_decl_list;
           (yyval.t_pred_decl_list)->push_front((yyvsp[0].t_pred_decl)); }
#line 2237 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 336 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pred_decl)= new pred_decl((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_var_symbol_list),current_analysis->var_tab_stack.pop());}
#line 2243 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 338 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
        // hope someone makes this error someday
        log_error(E_FATAL,"Syntax error in predicate declaration.");
	(yyval.t_pred_decl)= static_cast<pred_decl*>(NULL); }
#line 2252 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 346 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.new_symbol_put((yyvsp[0].cp));
           current_analysis->var_tab_stack.push(
           				current_analysis->buildPredTab());
           delete [] (yyvsp[0].cp); }
#line 2261 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 353 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_ref("=");
	      requires(E_EQUALITY); }
#line 2268 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 355 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2274 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 363 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2280 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 369 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_func_decl_list)=(yyvsp[-1].t_func_decl_list); (yyval.t_func_decl_list)->push_back((yyvsp[0].t_func_decl));}
#line 2286 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 370 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_decl_list)=new func_decl_list; }
#line 2292 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 375 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_func_decl)= new func_decl((yyvsp[-3].t_func_symbol),(yyvsp[-2].t_var_symbol_list),current_analysis->var_tab_stack.pop());}
#line 2298 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 377 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in functor declaration.");
	 (yyval.t_func_decl)= (int) NULL; }
#line 2306 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 383 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_dummy) = (int) NULL;}
#line 2312 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 383 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_dummy)= (int) NULL;}
#line 2318 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 387 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_symbol)=current_analysis->func_tab.new_symbol_put((yyvsp[0].cp));
           current_analysis->var_tab_stack.push(
           		current_analysis->buildFuncTab());
           delete [] (yyvsp[0].cp); }
#line 2327 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 400 "src/pddl+.yacc" /* yacc.c:1646  */
    {
      (yyval.t_var_symbol_list)= (yyvsp[-3].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_types((yyvsp[-1].t_type));           /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[0].t_var_symbol_list));   /* Join lists */
      delete (yyvsp[0].t_var_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   }
#line 2340 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 409 "src/pddl+.yacc" /* yacc.c:1646  */
    {
      (yyval.t_var_symbol_list)= (yyvsp[-3].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_either_types((yyvsp[-1].t_type_list));    /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[0].t_var_symbol_list));   /* Join lists */
      delete (yyvsp[0].t_var_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   }
#line 2353 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 418 "src/pddl+.yacc" /* yacc.c:1646  */
    {
       (yyval.t_var_symbol_list)= (yyvsp[0].t_var_symbol_list);
   }
#line 2361 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 430 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_var_symbol_list)=(yyvsp[0].t_var_symbol_list); (yyvsp[0].t_var_symbol_list)->push_front((yyvsp[-1].t_var_symbol)); }
#line 2367 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 431 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_var_symbol_list)= new var_symbol_list; }
#line 2373 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 438 "src/pddl+.yacc" /* yacc.c:1646  */
    {
      (yyval.t_const_symbol_list)= (yyvsp[-3].t_const_symbol_list);
      (yyvsp[-3].t_const_symbol_list)->set_types((yyvsp[-1].t_type));           /* Set types for constants */
      (yyvsp[-3].t_const_symbol_list)->splice((yyvsp[-3].t_const_symbol_list)->end(),*(yyvsp[0].t_const_symbol_list)); /* Join lists */
      delete (yyvsp[0].t_const_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   }
#line 2386 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 447 "src/pddl+.yacc" /* yacc.c:1646  */
    {
      (yyval.t_const_symbol_list)= (yyvsp[-3].t_const_symbol_list);
      (yyvsp[-3].t_const_symbol_list)->set_either_types((yyvsp[-1].t_type_list));
      (yyvsp[-3].t_const_symbol_list)->splice((yyvsp[-3].t_const_symbol_list)->end(),*(yyvsp[0].t_const_symbol_list));
      delete (yyvsp[0].t_const_symbol_list);
      requires(E_TYPING);
      types_used = true;
   }
#line 2399 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 456 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)= (yyvsp[0].t_const_symbol_list);}
#line 2405 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 461 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=(yyvsp[0].t_const_symbol_list); (yyvsp[0].t_const_symbol_list)->push_front((yyvsp[-1].t_const_symbol));}
#line 2411 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 462 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=new const_symbol_list;}
#line 2417 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 466 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=(yyvsp[0].t_const_symbol_list); (yyvsp[0].t_const_symbol_list)->push_front((yyvsp[-1].t_const_symbol));}
#line 2423 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 467 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=new const_symbol_list;}
#line 2429 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 476 "src/pddl+.yacc" /* yacc.c:1646  */
    {
       (yyval.t_type_list)= (yyvsp[-3].t_type_list);
       (yyval.t_type_list)->set_types((yyvsp[-1].t_type));           /* Set types for constants */
       (yyval.t_type_list)->splice((yyval.t_type_list)->end(),*(yyvsp[0].t_type_list)); /* Join lists */
       delete (yyvsp[0].t_type_list);                   /* Delete (now empty) list */
   }
#line 2440 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 483 "src/pddl+.yacc" /* yacc.c:1646  */
    {
   // This parse needs to be excluded, we think (DPL&MF: 6/9/01)
       (yyval.t_type_list)= (yyvsp[-3].t_type_list);
       (yyval.t_type_list)->set_either_types((yyvsp[-1].t_type_list));
       (yyval.t_type_list)->splice((yyvsp[-3].t_type_list)->end(),*(yyvsp[0].t_type_list));
       delete (yyvsp[0].t_type_list);
   }
#line 2452 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 492 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_type_list)= (yyvsp[0].t_type_list); }
#line 2458 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 498 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_parameter_symbol_list)=(yyvsp[-1].t_parameter_symbol_list); (yyval.t_parameter_symbol_list)->push_back((yyvsp[0].t_const_symbol)); }
#line 2464 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 500 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_parameter_symbol_list)=(yyvsp[-2].t_parameter_symbol_list); (yyval.t_parameter_symbol_list)->push_back((yyvsp[0].t_var_symbol)); }
#line 2470 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 501 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_parameter_symbol_list)= new parameter_symbol_list;}
#line 2476 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 508 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_var_symbol)= current_analysis->var_tab_stack.top()->symbol_put((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2482 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 514 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_var_symbol)= current_analysis->var_tab_stack.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2488 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 518 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_const_symbol)= current_analysis->const_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2494 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 522 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_const_symbol)= current_analysis->const_tab.new_symbol_put((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2500 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 527 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_type_list)= (yyvsp[-1].t_type_list); }
#line 2506 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 532 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_type)= current_analysis->pddl_type_tab.symbol_ref((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2512 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 539 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_type)= current_analysis->pddl_type_tab.symbol_ref((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2518 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 544 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_type_list)= (yyvsp[-1].t_type_list); (yyval.t_type_list)->push_back((yyvsp[0].t_type));}
#line 2524 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 545 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_type_list)= new pddl_type_list;}
#line 2530 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 550 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_type_list)= (yyvsp[-1].t_type_list); (yyval.t_type_list)->push_back((yyvsp[0].t_type));}
#line 2536 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 551 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_type_list)= new pddl_type_list;}
#line 2542 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 556 "src/pddl+.yacc" /* yacc.c:1646  */
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
#line 2559 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 569 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[0].t_simple_effect)); }
#line 2565 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 571 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[0].t_simple_effect)); }
#line 2571 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 573 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[0].t_timed_effect)); }
#line 2577 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 575 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;}
#line 2583 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 580 "src/pddl+.yacc" /* yacc.c:1646  */
    { requires(E_TIMED_INITIAL_LITERALS);
   		(yyval.t_timed_effect)=new timed_initial_literal((yyvsp[-1].t_effect_lists),(yyvsp[-2].fval));}
#line 2590 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 585 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=(yyvsp[0].t_effect_lists); (yyval.t_effect_lists)->append_effects((yyvsp[-1].t_effect_lists)); delete (yyvsp[-1].t_effect_lists);}
#line 2596 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 586 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=(yyvsp[0].t_effect_lists); (yyval.t_effect_lists)->cond_effects.push_front((yyvsp[-1].t_cond_effect));
                                      requires(E_COND_EFFS);}
#line 2603 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 588 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=(yyvsp[0].t_effect_lists); (yyval.t_effect_lists)->forall_effects.push_front((yyvsp[-1].t_forall_effect));
                                      requires(E_COND_EFFS);}
#line 2610 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 590 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists(); }
#line 2616 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 599 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[0].t_effect_lists);}
#line 2622 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 600 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2628 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 601 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2634 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 602 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->cond_effects.push_front((yyvsp[0].t_cond_effect));}
#line 2640 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 603 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->forall_effects.push_front((yyvsp[0].t_forall_effect));}
#line 2646 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 607 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists);}
#line 2652 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 608 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[0].t_effect_lists);}
#line 2658 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 613 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2664 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 615 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2670 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 617 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[0].t_assignment));
         requires(E_NFLUENTS);}
#line 2677 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 623 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[0].t_simple_effect));}
#line 2683 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 624 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[0].t_simple_effect));}
#line 2689 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 625 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->assign_effects.push_back((yyvsp[0].t_assignment));
                                     requires(E_NFLUENTS); }
#line 2696 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 627 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 2702 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 632 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); }
#line 2708 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 634 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_effect_lists)=NULL;
	 log_error(E_FATAL,"Syntax error in (and ...)");
	}
#line 2716 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 642 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); }
#line 2722 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 647 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
          (yyval.t_effect_lists)->forall_effects.push_back(
	       new forall_effect((yyvsp[-1].t_effect_lists), (yyvsp[-3].t_var_symbol_list), current_analysis->var_tab_stack.pop()));
          requires(E_COND_EFFS);}
#line 2731 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 652 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_effects.push_back(
	       new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)));
          requires(E_COND_EFFS); }
#line 2740 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 657 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_assign_effects.push_back(
	       new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)));
          requires(E_COND_EFFS); }
#line 2749 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 662 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=new effect_lists;
          (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[0].t_timed_effect)); }
#line 2756 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 665 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[0].t_assignment));
          requires(E_NFLUENTS); }
#line 2764 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 671 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyvsp[-1].t_effect_lists)->append_effects((yyvsp[0].t_effect_lists)); delete (yyvsp[0].t_effect_lists); }
#line 2770 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 672 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 2776 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 677 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect((yyvsp[-1].t_effect_lists),E_AT_START);}
#line 2782 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 679 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect((yyvsp[-1].t_effect_lists),E_AT_END);}
#line 2788 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 681 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression))); }
#line 2796 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 685 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression))); }
#line 2804 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 689 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_timed_effect)=NULL;
	log_error(E_FATAL,"Syntax error in timed effect"); }
#line 2811 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 695 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression))); }
#line 2819 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 699 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression))); }
#line 2827 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 703 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_timed_effect)=NULL;
	log_error(E_FATAL,"Syntax error in conditional continuous effect"); }
#line 2834 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 709 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); }
#line 2840 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 714 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
          (yyval.t_effect_lists)->forall_effects.push_back(
	       new forall_effect((yyvsp[-1].t_effect_lists), (yyvsp[-3].t_var_symbol_list), current_analysis->var_tab_stack.pop()));
          requires(E_COND_EFFS);}
#line 2849 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 719 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_assign_effects.push_back(
	       new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)));
          requires(E_COND_EFFS); }
#line 2858 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 724 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=new effect_lists;
          (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[0].t_timed_effect)); }
#line 2865 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 729 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyvsp[-1].t_effect_lists)->append_effects((yyvsp[0].t_effect_lists)); delete (yyvsp[0].t_effect_lists); }
#line 2871 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 730 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 2877 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 734 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists);}
#line 2883 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 735 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[0].t_effect_lists);}
#line 2889 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 740 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2895 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 742 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2901 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 744 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[0].t_assignment));
         requires(E_NFLUENTS);}
#line 2908 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 750 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[0].t_simple_effect));}
#line 2914 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 751 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[0].t_simple_effect));}
#line 2920 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 752 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->assign_effects.push_back((yyvsp[0].t_assignment));
                                     requires(E_NFLUENTS); }
#line 2927 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 754 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 2933 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 760 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_ASSIGN,(yyvsp[-1].t_expression)); }
#line 2939 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 762 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression)); }
#line 2945 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 764 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression)); }
#line 2951 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 766 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_UP,(yyvsp[-1].t_expression)); }
#line 2957 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 768 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_DOWN,(yyvsp[-1].t_expression)); }
#line 2963 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 773 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists;
         timed_effect * te = new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_effect_lists)->timed_effects.push_front(te);
         te->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression))); }
#line 2973 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 779 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists;
         timed_effect * te = new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_effect_lists)->timed_effects.push_front(te);
         te->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression))); }
#line 2983 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 785 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists) = (yyvsp[-1].t_effect_lists);}
#line 2989 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 789 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyvsp[-1].t_effect_lists)->append_effects((yyvsp[0].t_effect_lists)); delete (yyvsp[0].t_effect_lists); }
#line 2995 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 790 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 3001 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 794 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[0].t_expression);}
#line 3007 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 795 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression)= new special_val_expr(E_DURATION_VAR);
                    requires( E_DURATION_INEQUALITIES );}
#line 3014 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 797 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)=(yyvsp[0].t_num_expression); }
#line 3020 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 798 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= (yyvsp[0].t_func_term); }
#line 3026 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 803 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new plus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3032 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 805 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new minus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3038 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 807 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3044 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 809 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new div_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3050 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 814 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal)= new conj_goal((yyvsp[-1].t_goal_list)); }
#line 3056 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 816 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal)= new timed_goal(new comparison((yyvsp[-4].t_comparison_op),
        			new special_val_expr(E_DURATION_VAR),(yyvsp[-1].t_expression)),E_AT_START); }
#line 3063 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 819 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal) = new timed_goal(new comparison((yyvsp[-5].t_comparison_op),
					new special_val_expr(E_DURATION_VAR),(yyvsp[-2].t_expression)),E_AT_START);}
#line 3070 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 822 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal) = new timed_goal(new comparison((yyvsp[-5].t_comparison_op),
					new special_val_expr(E_DURATION_VAR),(yyvsp[-2].t_expression)),E_AT_END);}
#line 3077 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 827 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_comparison_op)= E_LESSEQ; requires(E_DURATION_INEQUALITIES);}
#line 3083 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 828 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_comparison_op)= E_GREATEQ; requires(E_DURATION_INEQUALITIES);}
#line 3089 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 829 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_comparison_op)= E_EQUALS; }
#line 3095 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 837 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[0].t_expression); }
#line 3101 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 842 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[0].t_goal)); }
#line 3107 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 844 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal_list)= new goal_list; }
#line 3113 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 849 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[-1].t_proposition)); }
#line 3119 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 854 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[0].t_proposition)); }
#line 3125 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 861 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[-1].t_proposition)); }
#line 3131 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 866 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[0].t_proposition)); }
#line 3137 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 871 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_forall_effect)= new forall_effect((yyvsp[-1].t_effect_lists), (yyvsp[-3].t_var_symbol_list), current_analysis->var_tab_stack.pop());}
#line 3143 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 876 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_cond_effect)= new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)); }
#line 3149 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 881 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_ASSIGN,(yyvsp[-1].t_expression)); }
#line 3155 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 883 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression)); }
#line 3161 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 885 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression)); }
#line 3167 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 887 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_UP,(yyvsp[-1].t_expression)); }
#line 3173 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 889 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_DOWN,(yyvsp[-1].t_expression)); }
#line 3179 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 894 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new uminus_expression((yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3185 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 896 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new plus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3191 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 898 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new minus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3197 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 900 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3203 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 902 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new div_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3209 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 903 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)=(yyvsp[0].t_num_expression); }
#line 3215 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 904 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= (yyvsp[0].t_func_term); requires(E_NFLUENTS); }
#line 3221 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 909 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression(new special_val_expr(E_HASHT),(yyvsp[-1].t_expression)); }
#line 3227 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 911 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression((yyvsp[-2].t_expression), new special_val_expr(E_HASHT)); }
#line 3233 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 913 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new special_val_expr(E_HASHT); }
#line 3239 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 918 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_num_expression)=new int_expression((yyvsp[0].ival));   }
#line 3245 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 919 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_num_expression)=new float_expression((yyvsp[0].fval)); }
#line 3251 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 923 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3257 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 926 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3263 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 928 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[0].cp)),
                            new parameter_symbol_list); delete [] (yyvsp[0].cp);}
#line 3270 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 931 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_term) = new class_func_term( (yyvsp[-4].t_class), current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp);}
#line 3276 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 948 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3282 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 950 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3288 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 952 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[0].cp)),
                            new parameter_symbol_list); delete [] (yyvsp[0].cp);}
#line 3295 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 957 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_GREATER; }
#line 3301 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 958 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_GREATEQ; }
#line 3307 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 959 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_LESS; }
#line 3313 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 960 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_LESSEQ; }
#line 3319 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 961 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_EQUALS; }
#line 3325 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 974 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= (yyvsp[0].t_goal);}
#line 3331 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 981 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal) = new conj_goal((yyvsp[-1].t_goal_list));}
#line 3337 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 984 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());
        requires(E_UNIV_PRECS);}
#line 3344 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 986 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal) = new conj_goal(new goal_list);}
#line 3350 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 987 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal) = new conj_goal(new goal_list);}
#line 3356 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 992 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new preference((yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3362 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 994 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new preference((yyvsp[-2].cp),(yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3368 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 996 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new conj_goal((yyvsp[-1].t_goal_list));}
#line 3374 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 999 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal)= new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_con_goal),current_analysis->var_tab_stack.pop());
                requires(E_UNIV_PRECS);}
#line 3381 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1002 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = (yyvsp[0].t_con_goal);}
#line 3387 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1007 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new preference((yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3393 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1009 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new preference((yyvsp[-2].cp),(yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3399 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1011 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new conj_goal((yyvsp[-1].t_goal_list));}
#line 3405 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1014 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal)= new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_con_goal),current_analysis->var_tab_stack.pop());
                requires(E_UNIV_PRECS);}
#line 3412 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1020 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyvsp[-1].t_goal_list)->push_back((yyvsp[0].t_con_goal));}
#line 3418 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1022 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list)= new goal_list; (yyval.t_goal_list)->push_back((yyvsp[0].t_con_goal));}
#line 3424 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1027 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new preference((yyvsp[-1].t_goal)); requires(E_PREFERENCES);}
#line 3430 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1029 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new preference((yyvsp[-2].cp),(yyvsp[-1].t_goal)); requires(E_PREFERENCES);}
#line 3436 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1033 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)=(yyvsp[0].t_goal);}
#line 3442 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1038 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list) = (yyvsp[-1].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[0].t_con_goal));}
#line 3448 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1040 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list) = new goal_list; (yyval.t_goal_list)->push_back((yyvsp[0].t_con_goal));}
#line 3454 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1045 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal)= new conj_goal((yyvsp[-1].t_goal_list));}
#line 3460 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1047 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_con_goal),current_analysis->var_tab_stack.pop());
        requires(E_UNIV_PRECS);}
#line 3467 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1050 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_ATEND,(yyvsp[-1].t_goal));}
#line 3473 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1052 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_ALWAYS,(yyvsp[-1].t_goal));}
#line 3479 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1054 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIME,(yyvsp[-1].t_goal));}
#line 3485 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1056 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_WITHIN,(yyvsp[-1].t_goal),NULL,(yyvsp[-2].t_num_expression)->double_value(),0.0);delete (yyvsp[-2].t_num_expression);}
#line 3491 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1058 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_ATMOSTONCE,(yyvsp[-1].t_goal));}
#line 3497 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1060 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIMEAFTER,(yyvsp[-1].t_goal),(yyvsp[-2].t_goal));}
#line 3503 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1062 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIMEBEFORE,(yyvsp[-1].t_goal),(yyvsp[-2].t_goal));}
#line 3509 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1064 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_ALWAYSWITHIN,(yyvsp[-1].t_goal),(yyvsp[-2].t_goal),(yyvsp[-3].t_num_expression)->double_value(),0.0);delete (yyvsp[-3].t_num_expression);}
#line 3515 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1066 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_HOLDDURING,(yyvsp[-1].t_goal),NULL,(yyvsp[-2].t_num_expression)->double_value(),(yyvsp[-3].t_num_expression)->double_value());delete (yyvsp[-3].t_num_expression);delete (yyvsp[-2].t_num_expression);}
#line 3521 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1068 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_HOLDAFTER,(yyvsp[-1].t_goal),NULL,0.0,(yyvsp[-2].t_num_expression)->double_value());delete (yyvsp[-2].t_num_expression);}
#line 3527 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1073 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new simple_goal((yyvsp[0].t_proposition),E_POS);}
#line 3533 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1075 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new neg_goal((yyvsp[-1].t_goal));simple_goal * s = dynamic_cast<simple_goal *>((yyvsp[-1].t_goal));
       if(s && s->getProp()->head->getName()=="=") {requires(E_EQUALITY);}
       else{requires(E_NEGATIVE_PRECONDITIONS);};}
#line 3541 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1079 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new conj_goal((yyvsp[-1].t_goal_list));}
#line 3547 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1081 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new disj_goal((yyvsp[-1].t_goal_list));
        requires(E_DISJUNCTIVE_PRECONDS);}
#line 3554 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1084 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new imply_goal((yyvsp[-2].t_goal),(yyvsp[-1].t_goal));
        requires(E_DISJUNCTIVE_PRECONDS);}
#line 3561 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1088 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new qfied_goal((yyvsp[-5].t_quantifier),(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());}
#line 3567 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1091 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new qfied_goal((yyvsp[-5].t_quantifier),(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());}
#line 3573 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1093 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new comparison((yyvsp[-3].t_comparison_op),(yyvsp[-2].t_expression),(yyvsp[-1].t_expression));
        requires(E_NFLUENTS);}
#line 3580 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1099 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyvsp[-1].t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3586 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1101 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list)= new goal_list; (yyval.t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3592 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1106 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyvsp[-1].t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3598 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1108 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal_list)= new goal_list; (yyval.t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3604 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1118 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_quantifier)=E_FORALL;
        current_analysis->var_tab_stack.push(
        		current_analysis->buildForallTab());}
#line 3612 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1125 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_quantifier)=E_EXISTS;
        current_analysis->var_tab_stack.push(
        	current_analysis->buildExistsTab());}
#line 3620 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1132 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_proposition)=new proposition((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_parameter_symbol_list));}
#line 3626 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1137 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_proposition) = new proposition((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_var_symbol_list));}
#line 3632 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1142 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_proposition)=new proposition((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_parameter_symbol_list));}
#line 3638 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1147 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pred_decl_list)= (yyvsp[-1].t_pred_decl_list);}
#line 3644 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1149 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_pred_decl_list)=NULL;
	 log_error(E_FATAL,"Syntax error in (:predicates ...)");
	}
#line 3652 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1156 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_func_decl_list)= (yyvsp[-1].t_func_decl_list);}
#line 3658 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1158 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_func_decl_list)=NULL;
	 log_error(E_FATAL,"Syntax error in (:functions ...)");
	}
#line 3666 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1165 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = (yyvsp[-1].t_con_goal);}
#line 3672 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1167 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_con_goal)=NULL;
      log_error(E_FATAL,"Syntax error in (:constraints ...)");
      }
#line 3680 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1174 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_con_goal) = (yyvsp[-1].t_con_goal);}
#line 3686 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1176 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_con_goal)=NULL;
      log_error(E_FATAL,"Syntax error in (:constraints ...)");
      }
#line 3694 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1182 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_store)=(yyvsp[-1].t_structure_store); (yyval.t_structure_store)->push_back((yyvsp[0].t_structure_def)); }
#line 3700 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1183 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_store)= new structure_store; (yyval.t_structure_store)->push_back((yyvsp[0].t_structure_def)); }
#line 3706 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1187 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_action_def); }
#line 3712 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1188 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_event_def); requires(E_TIME); }
#line 3718 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1189 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_process_def); requires(E_TIME); }
#line 3724 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1190 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_durative_action_def); requires(E_DURATIVE_ACTIONS); }
#line 3730 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1191 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_derivation_rule); requires(E_DERIVED_PREDICATES);}
#line 3736 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1192 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_structure_def) = (yyvsp[0].t_class_def); requires(E_MODULES);}
#line 3742 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1200 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_class_def) = new class_def((yyvsp[-2].t_class),(yyvsp[-1].t_func_decl_list));}
#line 3748 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1204 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_dummy)= 0;
    	current_analysis->var_tab_stack.push(
    					current_analysis->buildRuleTab());}
#line 3756 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1215 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_derivation_rule) = new derivation_rule((yyvsp[-2].t_proposition),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());}
#line 3762 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1227 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_action_def)= current_analysis->buildAction(current_analysis->op_tab.new_symbol_put((yyvsp[-9].cp)),
			(yyvsp[-6].t_var_symbol_list),(yyvsp[-3].t_goal),(yyvsp[-1].t_effect_lists),
			current_analysis->var_tab_stack.pop()); delete [] (yyvsp[-9].cp); }
#line 3770 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1231 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in action declaration.");
	 (yyval.t_action_def)= NULL; }
#line 3778 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1244 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_event_def)= current_analysis->buildEvent(current_analysis->op_tab.new_symbol_put((yyvsp[-9].cp)),
		   (yyvsp[-6].t_var_symbol_list),(yyvsp[-3].t_goal),(yyvsp[-1].t_effect_lists),
		   current_analysis->var_tab_stack.pop()); delete [] (yyvsp[-9].cp);}
#line 3786 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1249 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in event declaration.");
	 (yyval.t_event_def)= NULL; }
#line 3794 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1261 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_process_def)= current_analysis->buildProcess(current_analysis->op_tab.new_symbol_put((yyvsp[-9].cp)),
		     (yyvsp[-6].t_var_symbol_list),(yyvsp[-3].t_goal),(yyvsp[-1].t_effect_lists),
                     current_analysis->var_tab_stack.pop()); delete [] (yyvsp[-9].cp);}
#line 3802 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1265 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in process declaration.");
	 (yyval.t_process_def)= NULL; }
#line 3810 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1277 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_durative_action_def)= (yyvsp[-1].t_durative_action_def);
      (yyval.t_durative_action_def)->name= current_analysis->op_tab.new_symbol_put((yyvsp[-8].cp));
      (yyval.t_durative_action_def)->symtab= current_analysis->var_tab_stack.pop();
      (yyval.t_durative_action_def)->parameters= (yyvsp[-5].t_var_symbol_list);
      (yyval.t_durative_action_def)->dur_constraint= (yyvsp[-2].t_goal);
      delete [] (yyvsp[-8].cp);
    }
#line 3822 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1286 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in durative-action declaration.");
	 (yyval.t_durative_action_def)= NULL; }
#line 3830 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1293 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_durative_action_def)=(yyvsp[-2].t_durative_action_def); (yyval.t_durative_action_def)->effects=(yyvsp[0].t_effect_lists);}
#line 3836 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1295 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_durative_action_def)=(yyvsp[-2].t_durative_action_def); (yyval.t_durative_action_def)->precondition=(yyvsp[0].t_goal);}
#line 3842 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1296 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_durative_action_def)= current_analysis->buildDurativeAction();}
#line 3848 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1301 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal)=(yyvsp[0].t_goal); }
#line 3854 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1303 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal)= new conj_goal((yyvsp[-1].t_goal_list)); }
#line 3860 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1308 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[0].t_goal)); }
#line 3866 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1310 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_goal_list)= new goal_list; }
#line 3872 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1315 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new timed_goal((yyvsp[-1].t_goal),E_AT_START);}
#line 3878 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1317 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new timed_goal((yyvsp[-1].t_goal),E_AT_END);}
#line 3884 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1319 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)= new timed_goal((yyvsp[-1].t_goal),E_OVER_ALL);}
#line 3890 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1321 "src/pddl+.yacc" /* yacc.c:1646  */
    {timed_goal * tg = dynamic_cast<timed_goal *>((yyvsp[-1].t_goal));
		(yyval.t_goal) = new timed_goal(new preference((yyvsp[-2].cp),tg->clearGoal()),tg->getTime());
			delete tg;
			requires(E_PREFERENCES);}
#line 3899 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1326 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal) = new preference((yyvsp[-1].t_goal));requires(E_PREFERENCES);}
#line 3905 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1330 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_dummy)= 0; current_analysis->var_tab_stack.push(
    				current_analysis->buildOpTab());}
#line 3912 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1335 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_EQUALITY;}
#line 3918 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1336 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_STRIPS;}
#line 3924 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1338 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_TYPING;}
#line 3930 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1340 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_NEGATIVE_PRECONDITIONS;}
#line 3936 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1342 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_DISJUNCTIVE_PRECONDS;}
#line 3942 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1343 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_EXT_PRECS;}
#line 3948 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1344 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_UNIV_PRECS;}
#line 3954 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1345 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_COND_EFFS;}
#line 3960 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1346 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_NFLUENTS | E_OFLUENTS;}
#line 3966 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1348 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_DURATIVE_ACTIONS;}
#line 3972 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1349 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_TIME |
                      E_NFLUENTS |
                      E_DURATIVE_ACTIONS; }
#line 3980 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1352 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)=E_ACTIONCOSTS | E_NFLUENTS;}
#line 3986 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1355 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)=E_OFLUENTS;}
#line 3992 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1356 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)=E_NFLUENTS;}
#line 3998 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1357 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)=E_MODULES;}
#line 4004 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1359 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_STRIPS |
		      E_TYPING |
		      E_NEGATIVE_PRECONDITIONS |
		      E_DISJUNCTIVE_PRECONDS |
		      E_EQUALITY |
		      E_EXT_PRECS |
		      E_UNIV_PRECS |
		      E_COND_EFFS;}
#line 4017 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1368 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_EXT_PRECS |
		      E_UNIV_PRECS;}
#line 4024 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1372 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_DURATION_INEQUALITIES;}
#line 4030 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1375 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_CONTINUOUS_EFFECTS;}
#line 4036 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1377 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag) = E_DERIVED_PREDICATES;}
#line 4042 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1379 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag) = E_TIMED_INITIAL_LITERALS;}
#line 4048 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1381 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag) = E_PREFERENCES;}
#line 4054 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1383 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag) = E_CONSTRAINTS;}
#line 4060 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1385 "src/pddl+.yacc" /* yacc.c:1646  */
    {log_error(E_WARNING,"Unrecognised requirements declaration ");
       (yyval.t_pddl_req_flag)= 0; delete [] (yyvsp[0].cp);}
#line 4067 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1391 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=(yyvsp[-1].t_const_symbol_list);}
#line 4073 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1395 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_type_list)=(yyvsp[-1].t_type_list); requires(E_TYPING);}
#line 4079 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1405 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[-1].t_problem); (yyval.t_problem)->name = (yyvsp[-7].cp); (yyval.t_problem)->domain_name = (yyvsp[-3].cp);
		if (types_used && !types_defined) {
			yyerrok; log_error(E_FATAL,"Syntax error in problem file - types used, but no :types section in domain file.");
		}

	}
#line 4090 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1412 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok; (yyval.t_problem)=NULL;
       	log_error(E_FATAL,"Syntax error in problem definition."); }
#line 4097 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1418 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->req= (yyvsp[-1].t_pddl_req_flag);}
#line 4103 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1419 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->objects= (yyvsp[-1].t_const_symbol_list);}
#line 4109 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1420 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->initial_state= (yyvsp[-1].t_effect_lists);}
#line 4115 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1421 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->the_goal= (yyvsp[-1].t_goal);}
#line 4121 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1423 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->constraints = (yyvsp[-1].t_con_goal);}
#line 4127 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1424 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); if((yyval.t_problem)->metric == 0) {(yyval.t_problem)->metric= (yyvsp[-1].t_metric);}
											else {(yyval.t_problem)->metric->add((yyvsp[-1].t_metric));}}
#line 4134 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1426 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->length= (yyvsp[-1].t_length_spec);}
#line 4140 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1427 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_problem)=new problem;}
#line 4146 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1430 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=(yyvsp[-1].t_const_symbol_list);}
#line 4152 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1433 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists);}
#line 4158 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1436 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.vtab) = current_analysis->buildOpTab();}
#line 4164 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1439 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_goal)=(yyvsp[-1].t_goal);delete (yyvsp[-2].vtab);}
#line 4170 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1444 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_metric)= new metric_spec((yyvsp[-2].t_optimization),(yyvsp[-1].t_expression)); }
#line 4176 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1446 "src/pddl+.yacc" /* yacc.c:1646  */
    {yyerrok;
        log_error(E_FATAL,"Syntax error in metric declaration.");
        (yyval.t_metric)= NULL; }
#line 4184 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1453 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_length_spec)= new length_spec(E_BOTH,(yyvsp[-3].ival),(yyvsp[-1].ival));}
#line 4190 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1456 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_length_spec) = new length_spec(E_SERIAL,(yyvsp[-1].ival));}
#line 4196 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1460 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_length_spec) = new length_spec(E_PARALLEL,(yyvsp[-1].ival));}
#line 4202 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1466 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_optimization)= E_MINIMIZE;}
#line 4208 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1467 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_optimization)= E_MAXIMIZE;}
#line 4214 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1472 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[-1].t_expression);}
#line 4220 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1473 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[0].t_func_term);}
#line 4226 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1474 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[0].t_num_expression);}
#line 4232 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1475 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new special_val_expr(E_TOTAL_TIME); }
#line 4238 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1477 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression) = new violation_term((yyvsp[-1].cp));}
#line 4244 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1478 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new special_val_expr(E_TOTAL_TIME); }
#line 4250 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1482 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new plus_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4256 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1483 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new minus_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4262 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1484 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4268 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1485 "src/pddl+.yacc" /* yacc.c:1646  */
    { (yyval.t_expression)= new div_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4274 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1489 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression) = (yyvsp[0].t_expression);}
#line 4280 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1491 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression) = new plus_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression));}
#line 4286 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1495 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression) = (yyvsp[0].t_expression);}
#line 4292 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1497 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_expression) = new mul_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression));}
#line 4298 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1503 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_plan)= (yyvsp[0].t_plan);
         (yyval.t_plan)->push_front((yyvsp[-1].t_step)); }
#line 4305 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1506 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_plan) = (yyvsp[0].t_plan);(yyval.t_plan)->insertTime((yyvsp[-1].fval));}
#line 4311 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1508 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_plan) = (yyvsp[0].t_plan);(yyval.t_plan)->insertTime((yyvsp[-1].ival));}
#line 4317 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1510 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_plan)= new plan;}
#line 4323 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1515 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_step)=(yyvsp[0].t_step);
         (yyval.t_step)->start_time_given=1;
         (yyval.t_step)->start_time=(yyvsp[-2].fval);}
#line 4331 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1519 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_step)=(yyvsp[0].t_step);
	 (yyval.t_step)->start_time_given=0;}
#line 4338 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1525 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_step)= (yyvsp[-3].t_step);
	 (yyval.t_step)->duration_given=1;
         (yyval.t_step)->duration= (yyvsp[-1].fval);}
#line 4346 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1529 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_step)= (yyvsp[0].t_step);
         (yyval.t_step)->duration_given=0;}
#line 4353 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1535 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.t_step)= new plan_step(
              current_analysis->op_tab.symbol_get((yyvsp[-2].cp)),
	      (yyvsp[-1].t_const_symbol_list)); delete [] (yyvsp[-2].cp);
      }
#line 4362 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1542 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.fval)= (yyvsp[0].fval);}
#line 4368 "src/pddl+.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1543 "src/pddl+.yacc" /* yacc.c:1646  */
    {(yyval.fval)= (float) (yyvsp[0].ival);}
#line 4374 "src/pddl+.cpp" /* yacc.c:1646  */
    break;


#line 4378 "src/pddl+.cpp" /* yacc.c:1646  */
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
#line 1546 "src/pddl+.yacc" /* yacc.c:1906  */


#include <cstdio>
#include <iostream>
int line_no= 1;
using std::istream;
#include "lex.yy.cc"

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
