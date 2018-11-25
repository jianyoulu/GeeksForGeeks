all: MyProgram.exe

MyProgram.exe: main.o array.o
		gcc -o MyProgram.exe main.o array.o

main.o: main.c
		gcc -c main.c

array.o: array.c
		gcc -c array.c

clean:
		rm *.o *.exe