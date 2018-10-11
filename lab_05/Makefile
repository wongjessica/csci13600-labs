CXXFLAGS=-std=c++11

main: main.o numbers.o
	g++ -o main main.o numbers.o

main.o: main.cpp
	g++ $(CXXFLAGS) -c main.cpp
	
numbers.o: numbers.cpp numbers.h
	g++ $(CXXFLAGS) -c numbers.cpp
	
tests: tests.o numbers.o
	g++ -o tests tests.o numbers.o
	
tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp
	
clean:
	rm -f *.o main tests
