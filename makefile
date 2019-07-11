abc.exe:fact.o big3.o reverse.o main.o
	gcc -o abc.exe fact.o big3.o reverse.o main.o
%.o:%.c
	gcc -c -o $@ $<
