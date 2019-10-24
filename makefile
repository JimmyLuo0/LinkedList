all: main.o linkedList.o
	gcc -o program main.o linkedList.o

main.o: main.c header.h
	gcc -c main.c

linkedList.o: linkedList.c header.h
	gcc -c linkedList.c

run:
	./program

clean:
	rm *.o
