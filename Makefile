all: main.out

main.out: main.o 
	g++ -o main.out main.o 

main.o: main.cpp
	g++ -c main.cpp

Attaque.o: Attaque.cpp Attaque.h
	g++ -c Attaque.cpp
