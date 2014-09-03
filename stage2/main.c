/*
	Compilador desenvolvido para a Disciplina Compiladores B por 
		Rodrigo Leite, cartão: 160568
		Felipe Paula, cartão: 181790

*/

#include <stdio.h>
#include <stdlib.h>
#include "hash.h"
#include "y.tab.h"

extern int isRunning();

extern int yyparse();

extern int lineNumber;
extern int getLineNumber();
extern void initMe();

int main( void )
{
	initMe();
	yyparse();
	printTable();
	
	/*yyparse returns 3 in case of an error*/
	return 0;
}

