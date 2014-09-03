
#define SIZE 997

typedef struct token
{
	char *string;
	int type;
	struct token *next;
} TOKEN;

void initHashTable( void );
TOKEN* addToken( char* token, int type);
void printTable();
void freeTable();
