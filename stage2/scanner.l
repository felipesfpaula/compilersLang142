
%{

	#include <string.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include "hash.h"
	#include "y.tab.h"
	
		
	#define SYMBOL_UNDEFINED 0
	#define SYMBOL_LIT_INTEGER 1
	#define SYMBOL_LIT_FLOATING 2
	#define SYMBOL_LIT_TRUE 3
	#define SYMBOL_LIT_FALSE 4
	#define SYMBOL_LIT_CHAR 5 
	#define SYMBOL_LIT_STRING 6
	#define SYMBOL_IDENTIFIER 7



	char* trimQuotes(char *old);
	int getLineNumber();
	void initMe( void );
	int isRunning( void );	

	int running = 1;
	int lineNumber = 0;
	char *value;

%}


%x COMMENT


%%


"word"					{ return KW_WORD; }
"bool"					{ return KW_BOOL; }
"byte"					{ return KW_BYTE; }
"if"					{ return KW_IF; }
"then"					{ return KW_THEN; }
"else"					{ return KW_ELSE; }
"loop"					{ return KW_LOOP; }
"input"					{ return KW_INPUT; }
"output"				{ return KW_OUTPUT; }
"return"				{ return KW_RETURN; }

[,;:()\[\]{}\-\+\*/<>=!&$]              { return yytext[0]; }

"<="					{ return OPERATOR_LE; }
">="					{ return OPERATOR_GE; }
"=="					{ return OPERATOR_EQ; }
"!="					{ return OPERATOR_NE; }
"&&"					{ return OPERATOR_AND; }
"||"					{ return OPERATOR_OR; }

[0-9]+[A-Za-z_]+[A-Za-z_0-9]*			{ yylval.symbol = addToken(yytext, SYMBOL_IDENTIFIER); return TK_IDENTIFIER; }

[0-9]*					{ yylval.symbol = addToken(yytext, 0); return LIT_INTEGER; }
'.'						{ yylval.symbol = addToken( trimQuotes(yytext),SYMBOL_LIT_CHAR ); return LIT_CHAR; }
\"(\\.|[^\\"])*\"		{ yylval.symbol = addToken( trimQuotes(yytext),SYMBOL_LIT_STRING ); return LIT_STRING; }
"TRUE"					{ yylval.symbol = addToken( yytext, SYMBOL_LIT_TRUE); return LIT_TRUE;}
"FALSE"					{ yylval.symbol = addToken( yytext ,SYMBOL_LIT_FALSE); return LIT_FALSE;}
"//".*					{ }
"\n"					{ ++lineNumber; }	
[ \t\r\n\v\f]				{ } 

"/*"					{ BEGIN(COMMENT); }	
<COMMENT>"*/"				{ BEGIN(INITIAL); }
<COMMENT>"\n"				{ ++lineNumber; }
<COMMENT>.				{   }


.					{ return TOKEN_ERROR; }

<<EOF>>					{ running = 0; return 0; }

%%

int isRunning( void )
{
	return running;
}


char *trimQuotes(char *old)
{
	int size = strlen(old) - 2;
	int i,j;
	char *string = (char *) calloc(size, sizeof(char));
	for(i = 1, j = 0; i < strlen(old) - 1; i++, j++)
	    	string[j] = old[i];
	return string;  
}


int getLineNumber( void )
{
	return lineNumber;
}

void initMe( void )
{
	initHashTable();
} 


