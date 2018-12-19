INCDIR= ../include
OBJDIR= /obj

all: 
	gcc -c -Wall main.c
	gcc -c -Wall tape.c
	gcc main.o tape.o -o bfc

clean:
		rm bfc
		rm -rf bfc.dSYM
		rm *.o
