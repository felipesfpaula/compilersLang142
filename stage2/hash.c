#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "hash.h"

TOKEN *tokens;

void initHashTable( void )
{
	int i = 0;
	tokens = (TOKEN*) calloc(SIZE, sizeof(TOKEN));
	for(i = 0; i < SIZE ; i++){
		tokens[i].next = NULL;
	}	
}

TOKEN* addToken( char* token , int type)
{
	unsigned int hashval = 0;
	char *i = token;
	for(; *i != '\0'; i++)
		hashval = *i + (hashval << 5) - hashval;
	
	TOKEN *t = (TOKEN*) calloc(1,sizeof(TOKEN));
	t->string = calloc( strlen(token), sizeof(char) );
	t->type = type;	
	strcpy(t->string, token);
 	t->next = NULL;

	TOKEN *tAux = &tokens[hashval % SIZE];
		
	while(tAux->next != NULL)
	{
	  tAux = tAux->next;
	}
	
	tAux->next = t;
	return &tokens[hashval % SIZE];
}	


void printTable()
{
	int i = 0;
	TOKEN *tokenAux;
	for(i = 0; i < SIZE; i ++)
	{
	    if(tokens[i].next == NULL)
		continue;
	
	    printf("H:%d -> ", i);
	    tokenAux = &tokens[i]; 
	    while(tokenAux != NULL)
	     {
		if(tokenAux->string != NULL)
			printf("%s  [ t: %d ] ", tokenAux->string ,tokenAux->type );
		tokenAux = tokenAux->next;
	     }	
	    printf("\n");
	}
}


void freeTable()
{
	free(tokens);
}
