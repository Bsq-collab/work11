all: work11.o
	gcc -o work11.out work11.o

work11.o: work11.c
	gcc -c work11.c


run: all
	./work11.out

clean:
	rm -f ./work11.out
	rm -f ./work11.o
