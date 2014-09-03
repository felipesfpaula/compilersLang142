#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20120115

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"

	#include <stdio.h> 
	#include <stdlib.h>
	#include <string.h>
	#include "hash.h"
	
	void yyerror(char *);
	int yypaser(void);
	int yylex(void);

	extern int getLineNumber();
#line 17 "parser.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{ TOKEN *symbol; } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 40 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define KW_WORD 257
#define KW_BOOL 258
#define KW_BYTE 259
#define KW_IF 260
#define KW_THEN 261
#define KW_ELSE 262
#define KW_LOOP 263
#define KW_INPUT 264
#define KW_RETURN 265
#define KW_OUTPUT 266
#define OPERATOR_LE 267
#define OPERATOR_GE 268
#define OPERATOR_EQ 269
#define OPERATOR_NE 270
#define OPERATOR_AND 271
#define OPERATOR_OR 272
#define TK_IDENTIFIER 273
#define LIT_INTEGER 274
#define LIT_FALSE 275
#define LIT_TRUE 276
#define LIT_CHAR 277
#define LIT_STRING 278
#define TOKEN_ERROR 279
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    2,    3,    3,    3,    6,    6,    6,
    6,    6,    1,    1,    1,    1,    7,    7,    4,    4,
    8,    8,    9,    9,    9,    9,    9,    9,    9,    9,
   10,   10,   10,   10,   11,   11,   11,   11,   11,   11,
   11,   11,   11,   11,   11,   12,   12,   12,   13,   13,
   13,    5,    5,    5,    5,    5,    5,    5,    5,   15,
   16,   19,   19,   18,   20,   20,   21,   21,   17,   17,
   14,   14,
};
static const short yylen[] = {                            2,
    2,    2,    0,    7,    1,    1,    1,    1,    1,    1,
    1,    1,    5,    6,    6,    8,    2,    1,    3,    0,
    4,    0,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    2,
    2,    4,    3,    3,    3,    2,    2,    0,    3,    3,
    0,    1,    2,    1,    1,    6,    6,    6,    1,    2,
    2,    1,    1,    2,    2,    0,    3,    0,    3,    0,
    3,    6,
};
static const short yydefred[] = {                         0,
    5,    6,    7,    0,    0,    0,    0,    1,    2,    0,
    0,    0,    0,    0,    0,    0,    0,    8,    9,   10,
   11,   12,    0,    0,    0,    0,    0,   13,    0,    0,
    0,   19,    0,    0,    0,    0,    0,    0,    0,   52,
   54,   55,   59,   15,    0,   14,    0,    0,   60,    0,
   35,   37,   36,   38,    0,    0,    0,    0,   62,    0,
   61,    0,    0,    0,    0,    0,    4,    0,    0,    0,
    0,    0,    0,   40,   41,   23,   24,   25,   26,   27,
   28,   29,   30,   31,   32,   33,   34,    0,    0,    0,
   64,    0,    0,    0,   69,   17,   16,   21,    0,    0,
    0,    0,   45,    0,    0,   65,    0,   67,    0,    0,
    0,    0,   46,   47,   42,    0,   56,   58,   57,    0,
    0,    0,   49,   50,
};
static const short yydgoto[] = {                          4,
    5,    6,    7,   17,   65,   68,   69,   32,   88,   89,
   60,  102,  113,   40,   41,   42,   43,   61,   62,   91,
   66,
};
static const short yysindex[] = {                      -167,
    0,    0,    0,    0, -167, -167,  -25,    0,    0,  -19,
 -253, -167, -261, -252,  -20, -230,    4,    0,    0,    0,
    0,    0,   -2,  -32, -261,   19, -122,    0,   44,   23,
 -167,    0,   36, -189,  -30,  -36,  -56, -122,   46,    0,
    0,    0,    0,    0, -261,    0, -178,  -30,    0,   79,
    0,    0,    0,    0,  -30, -153, -150,   17,    0,   17,
    0,   80,  -30,  -30,   66,    1,    0, -261,   68,   19,
  -11, -166,    5,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -30,  -30,  -36,
    0,   11,   17, -122,    0,    0,    0,    0, -162,   84,
   84,   88,    0,   17,   17,    0,   69,    0, -122, -122,
 -122, -160,    0,    0,    0,  -30,    0,    0,    0,   84,
   84,   17,    0,    0,
};
static const short yyrindex[] = {                       131,
    0,    0,    0,    0,  131,  131,    0,    0,    0,    0,
    0,   92,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   93,   76,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -47,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -18,
    0,    0,    0,    0,    0,    0,    0,   77,    0,  -26,
    0,   78,    0,    0,    0,    0,    0,   81,    0,   93,
    0,   98,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   82,  -47,    0,    0,    0,    0,    0,  104,
  104,    0,    0,   -4,   39,    0,    0,    0,   76,   76,
   76,    0,    0,    0,    0,    0,    0,    0,    0,  104,
  104,   87,    0,    0,
};
static const short yygindex[] = {                        64,
    0,    0,   -3,    0,  -24,   -6,   85,   86,    0,    0,
   33,    0,  -27,    0,    0,    0,    0,   57,    0,    0,
   54,
};
#define YYTABLESIZE 289
static const short yytable[] = {                         56,
   38,   57,   39,   55,   64,   56,   23,   57,   16,   55,
   11,   70,   18,   19,   20,   21,   22,   63,   30,   15,
   12,   24,   39,   39,   39,   39,   39,   47,   39,   99,
   86,   84,   63,   85,   63,   87,   43,   25,   13,   43,
   39,   39,   26,   39,   27,  103,   86,   84,   82,   85,
   83,   87,   86,   84,   43,   85,   28,   87,   86,   84,
   29,   85,   31,   87,   82,  101,   83,   58,    8,    9,
   82,   14,   83,  114,   39,   48,   82,   68,   83,   44,
   71,   46,   44,   49,  117,  118,  119,   73,   43,    1,
    2,    3,  123,  124,   70,   92,   93,   44,  109,  110,
  111,   45,   44,  107,   67,  121,  100,   18,   19,   20,
   21,   22,  120,   18,   19,   20,   21,   22,   72,   74,
  104,  105,   75,   90,   94,   95,   97,  112,  115,  116,
    3,   44,   20,   22,   70,   53,   66,   33,   48,   18,
   71,   34,   35,   36,   51,   72,  106,  108,  122,    0,
   37,    0,   96,    0,    0,   98,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   50,   51,   52,   53,
   54,   59,   50,   51,   52,   53,   54,   10,   39,   39,
   39,   39,   39,   39,    0,   76,   77,   78,   79,   80,
   81,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   76,   77,   78,   79,   80,   81,   76,   77,   78,
   79,   80,   81,   76,   77,   78,   79,   80,   81,
};
static const short yycheck[] = {                         36,
  123,   38,   27,   40,   61,   36,   13,   38,   12,   40,
   36,   59,  274,  275,  276,  277,  278,   44,   25,  273,
   40,  274,   41,   42,   43,   44,   45,   31,   47,   41,
   42,   43,   59,   45,   91,   47,   41,   58,   58,   44,
   59,   60,  273,   62,   41,   41,   42,   43,   60,   45,
   62,   47,   42,   43,   59,   45,   59,   47,   42,   43,
   93,   45,   44,   47,   60,   72,   62,   35,    5,    6,
   60,   91,   62,  101,   93,   40,   60,  125,   62,   41,
   48,   59,   44,  273,  109,  110,  111,   55,   93,  257,
  258,  259,  120,  121,  273,   63,   64,   59,  261,  262,
  263,   58,   59,   93,   59,  112,  273,  274,  275,  276,
  277,  278,  273,  274,  275,  276,  277,  278,   40,  273,
   88,   89,  273,   44,   59,  125,   59,   44,   41,   61,
    0,   93,   41,   41,   59,   59,   59,  260,   41,   59,
   59,  264,  265,  266,   41,   59,   90,   94,  116,   -1,
  273,   -1,   68,   -1,   -1,   70,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  273,  274,  275,  276,
  277,  278,  273,  274,  275,  276,  277,  273,  267,  268,
  269,  270,  271,  272,   -1,  267,  268,  269,  270,  271,
  272,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  267,  268,  269,  270,  271,  272,  267,  268,  269,
  270,  271,  272,  267,  268,  269,  270,  271,  272,
};
#define YYFINAL 4
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 279
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"'$'",0,"'&'",0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,
0,0,"':'","';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"KW_WORD","KW_BOOL","KW_BYTE","KW_IF",
"KW_THEN","KW_ELSE","KW_LOOP","KW_INPUT","KW_RETURN","KW_OUTPUT","OPERATOR_LE",
"OPERATOR_GE","OPERATOR_EQ","OPERATOR_NE","OPERATOR_AND","OPERATOR_OR",
"TK_IDENTIFIER","LIT_INTEGER","LIT_FALSE","LIT_TRUE","LIT_CHAR","LIT_STRING",
"TOKEN_ERROR",
};
static const char *yyrule[] = {
"$accept : program",
"program : Decl_var program",
"program : Decl_fun program",
"program :",
"Decl_fun : Type TK_IDENTIFIER '(' Arg_lst ')' Command ';'",
"Type : KW_WORD",
"Type : KW_BOOL",
"Type : KW_BYTE",
"Literal : LIT_INTEGER",
"Literal : LIT_FALSE",
"Literal : LIT_TRUE",
"Literal : LIT_CHAR",
"Literal : LIT_STRING",
"Decl_var : Type TK_IDENTIFIER ':' Literal ';'",
"Decl_var : Type '$' TK_IDENTIFIER ':' Literal ';'",
"Decl_var : Type TK_IDENTIFIER '[' LIT_INTEGER ']' ';'",
"Decl_var : Type TK_IDENTIFIER '[' LIT_INTEGER ']' ':' Literal_lst ';'",
"Literal_lst : Literal Literal_lst",
"Literal_lst : Literal",
"Arg_lst : Type TK_IDENTIFIER Arg_lst_tail",
"Arg_lst :",
"Arg_lst_tail : ',' Type TK_IDENTIFIER Arg_lst_tail",
"Arg_lst_tail :",
"Op_logical : OPERATOR_LE",
"Op_logical : OPERATOR_GE",
"Op_logical : OPERATOR_EQ",
"Op_logical : OPERATOR_NE",
"Op_logical : OPERATOR_AND",
"Op_logical : OPERATOR_OR",
"Op_logical : '<'",
"Op_logical : '>'",
"Op_numerical : '+'",
"Op_numerical : '-'",
"Op_numerical : '*'",
"Op_numerical : '/'",
"Exp : LIT_INTEGER",
"Exp : LIT_TRUE",
"Exp : LIT_FALSE",
"Exp : LIT_CHAR",
"Exp : TK_IDENTIFIER",
"Exp : '$' TK_IDENTIFIER",
"Exp : '&' TK_IDENTIFIER",
"Exp : TK_IDENTIFIER '(' Id ')'",
"Exp : Exp Op_logical Exp",
"Exp : Exp Op_numerical Exp",
"Exp : '(' Exp ')'",
"Id : TK_IDENTIFIER Id_lst_tail",
"Id : Literal Id_lst_tail",
"Id :",
"Id_lst_tail : ',' TK_IDENTIFIER Id_lst_tail",
"Id_lst_tail : ',' Literal Id_lst_tail",
"Id_lst_tail :",
"Command : Atr",
"Command : KW_RETURN Exp",
"Command : Input",
"Command : Output",
"Command : KW_IF '(' Exp ')' KW_THEN Command",
"Command : KW_IF '(' Exp ')' KW_LOOP Command",
"Command : KW_IF '(' Exp ')' KW_ELSE Command",
"Command : Block",
"Input : KW_INPUT TK_IDENTIFIER",
"Output : KW_OUTPUT Item_lst",
"Item : LIT_STRING",
"Item : Exp",
"Item_lst : Item Item_lst_tail",
"Item_lst_tail : ',' Item_lst",
"Item_lst_tail :",
"Command_lst : Command ';' Command_lst",
"Command_lst :",
"Block : '{' Command_lst '}'",
"Block :",
"Atr : TK_IDENTIFIER '=' Exp",
"Atr : TK_IDENTIFIER '[' Exp ']' '=' Exp",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 169 "parser.y"

int yywrap(void) {
    return 1;
}


void yyerror(char *s) {
    fprintf(stderr, "%s in line %d\n", s, getLineNumber());
    exit(3);
}
#line 378 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
