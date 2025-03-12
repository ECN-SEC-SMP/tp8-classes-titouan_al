all: main.out

main.out: main.o Attaque.o Ours.o Animal.o
	g++ -o main.out main.o Attaque.o Ours.o

main.o: main.cpp
	g++ -c main.cpp

Attaque.o: Attaque.cpp Attaque.h
	g++ -c Attaque.cpp

Animal.o: Animal.cpp Animal.h
	g++ -c Animal.cpp

Ours.o: Ours.cpp Ours.h
	g++ -c Ours.cpp
