all: MyProgram.exe

MyProgram.exe: main.o array.o
		gcc -o MyProgram.exe main.o array.o

main.o: main.c
		gcc -g -c main.c

array.o: array.c
		gcc -g -c array.c

clean:
		rm *.o *.exe