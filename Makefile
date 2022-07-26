#Makefile

all: add-nbo

add-nbo: main.o
	g++ -o add-nbo main.o

main.o:
	g++ -c main.c

clean:
	rm -f add-nbo
	rm -f *.o
