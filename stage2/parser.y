%{

	#include <stdio.h> 
	#include <stdlib.h>
	#include <string.h>
	#include "hash.h"
	
	void yyerror(char *);
	int yypaser(void);
	int yylex(void);

	extern int getLineNumber();
%}

%start program

%union{ TOKEN *symbol; }

%token 			KW_WORD
%token 			KW_BOOL
%token 			KW_BYTE
%token 			KW_IF
%token 			KW_THEN
%token 			KW_ELSE
%token 			KW_LOOP
%token 			KW_INPUT
%token 			KW_RETURN
%token 			KW_OUTPUT
%token 			OPERATOR_LE
%token 			OPERATOR_GE
%token 			OPERATOR_EQ
%token 			OPERATOR_NE
%token 			OPERATOR_AND
%token 			OPERATOR_OR
%token <symbol>		TK_IDENTIFIER
%token <symbol>		LIT_INTEGER
%token <symbol>		LIT_FALSE
%token <symbol>		LIT_TRUE
%token <symbol>		LIT_CHAR
%token <symbol>		LIT_STRING
%token 			TOKEN_ERROR

%left '<' '>' OPERATOR_LE OPERATOR_GE OPERATOR_EQ OPERATOR_NE
%left '+' '-'
%left '*' '/'
%left OPERATOR_AND OPERATOR_OR


%%

program		: Decl_var program 
			| Decl_fun program 
			| /* empty */
			;

Decl_fun	: Type TK_IDENTIFIER '(' Arg_lst ')' Command ";" 
			;

Type		: KW_WORD
			| KW_BOOL  
			| KW_BYTE
			;
		
		
Literal 	: LIT_INTEGER 
			| LIT_FALSE 
			| LIT_TRUE 
			| LIT_CHAR 
			| LIT_STRING 
			;
	
Decl_var	: Type TK_IDENTIFIER ':' Literal ';' 		 
			| Type '$' TK_IDENTIFIER ':' Literal ';' 	 
			| Type TK_IDENTIFIER '[' LIT_INTEGER ']' ';' 
			| Type TK_IDENTIFIER '[' LIT_INTEGER ']' ':' Literal_lst ';'
			;
		
Literal_lst	: Literal  Literal_lst 
			| Literal
			;
		
Arg_lst		: Type TK_IDENTIFIER Arg_lst_tail 
			| /* empty */
			; 
	
Arg_lst_tail:',' Type TK_IDENTIFIER Arg_lst_tail 
			| /* empty */
			;
	
Op_logical	: OPERATOR_LE 
			| OPERATOR_GE 
			| OPERATOR_EQ 
			| OPERATOR_NE 
			| OPERATOR_AND 
			| OPERATOR_OR 
			| '<' 
			| '>'
			;
	
Op_numerical: '+' 
			| '-' 
			| '*' 
			| '/' 
			;
	 
Exp			: LIT_INTEGER 
			| LIT_TRUE 
			| LIT_FALSE 
			| LIT_CHAR 
			| TK_IDENTIFIER 
			| '$' TK_IDENTIFIER 
			| '&' TK_IDENTIFIER 
			| TK_IDENTIFIER '(' Id ')' 
			| Exp Op_logical Exp 
			| Exp Op_numerical Exp 
			| '(' Exp ')'
			;
	
Id			: TK_IDENTIFIER Id_lst_tail
			| Literal Id_lst_tail
			| /* empty */
			;

Id_lst_tail	: ',' TK_IDENTIFIER Id_lst_tail 
			| ',' Literal Id_lst_tail 
			| /*empty*/
			;
	
Command		: Atr 
			| KW_RETURN Exp 
			| Input 
			| Output 
			| KW_IF '(' Exp ')' KW_THEN Command 
			| KW_IF '(' Exp ')' KW_LOOP Command 
			| KW_IF '(' Exp ')' KW_ELSE Command 
			| Block
			;

Input		: KW_INPUT TK_IDENTIFIER
			;

Output		: KW_OUTPUT Item_lst
			;

Item		: LIT_STRING
			| Exp
			;

Item_lst	: Item Item_lst_tail
			;

Item_lst_tail: ',' Item_lst 
			| /* empty */
			;

Command_lst	: Command ';' Command_lst 
			| /* empty */
			;

Block		: '{' Command_lst '}' 
			| /* empty */
			;

Atr			: TK_IDENTIFIER '=' Exp 
			| TK_IDENTIFIER '[' Exp ']' '=' Exp
			;
     
%%

int yywrap(void) {
    return 1;
}


void yyerror(char *s) {
    fprintf(stderr, "%s in line %d\n", s, getLineNumber());
    exit(3);
}
