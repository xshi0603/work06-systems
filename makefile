all: list.o
	gcc list.o -o list.out

list.o: list.c
	gcc -c list.c

clean:
	rm -f *.o
	rm -f *~

run: all
	./list.out
