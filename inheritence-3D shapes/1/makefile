all : 1.out

1.out : main.o shape.o sphere.o cuboid.o cone.o
	g++ main.o shape.o sphere.o cuboid.o cone.o -o 1.out

main.o: main.cpp shape.h sphere.h cuboid.h cone.h
	g++ -c main.cpp -o main.o

shape.o : shape.cpp shape.h 
	g++ -c shape.cpp -o shape.o

sphere.o : sphere.cpp sphere.o
	g++ -c sphere.cpp -o sphere.o

cuboid.o : cuboid.cpp cuboid.o
	g++ -c cuboid.cpp -o cuboid.o

cone.o : cone.cpp cone.o
	g++ -c cone.cpp -o cone.o