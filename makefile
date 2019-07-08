ABC.exe:big3.o pal.o main.o
	gcc -o abc.exe big3.o pal.o main.o
big3.o:big3.c
	gcc -c big3.c
pal.o:pal.c
	gcc -c pal.c
main.o:main.c
	gcc -c main.c
