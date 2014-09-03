etapa2: hash.o y.tab.o lex.yy.o  main.o
	gcc y.tab.o lex.yy.o hash.o main.o -o etapa2

main.o: main.c
	gcc -c main.c

hash.o: hash.c
	gcc -c hash.c

y.tab.c: parser.y
	yacc -d -v parser.y

y.tab.o: y.tab.c
	gcc -c y.tab.c

lex.yy.c: scanner.l
	lex scanner.l

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

clean:
	rm lex.yy.c y.tab.c y.tab.h *.o	
