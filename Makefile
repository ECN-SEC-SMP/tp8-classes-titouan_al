all: main.out

main.out: main.o Attaque.o Animal.o Loup.o
	g++ -o main.out main.o Attaque.o Animal.o Loup.o

main.o: main.cpp
	g++ -c main.cpp

Attaque.o: Attaque.cpp Attaque.h
	g++ -c Attaque.cpp

Animal.o: Animal.cpp Animal.h
	g++ -c Animal.cpp

Loup.o:	Loup.cpp Loup.h
	g++ -c Loup.cpp 
