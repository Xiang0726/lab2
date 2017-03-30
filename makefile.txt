main: main.o lab.o
 g++ -o main main.o lab.o
main.o: main.cpp
 g++ -c main.cpp
hoho.o: lab.h lab.cpp
 g++ -c lab.cpp