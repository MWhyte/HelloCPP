# My First Makefile

all: main.o
	g++ -o runHelloWorld main.o

main.o: main.cpp
	g++ -c main.cpp -I ./

clean:
	rm -rf *.o
	rm -rf runHelloWorld
	rm -rf bin
	rm -rf target