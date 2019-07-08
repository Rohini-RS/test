abc.exe:fact.o big3.o reverse.o main.o
	gcc -o abc.exe fact.o big3.o reverse.o main.o
fact.o:fact.c
	gcc -c fact.c
big3.o:big3.c
	gcc -c big3.c
reverse.o:reverse.c
	gcc -c reverse.c
main.o: main.c
	gcc -c main.c
