CXXFLAGS=-std=c++11
main: main.o methods.o
	g++ -o main main.o methods.o

main.o: main.cpp methods.h
	g++ $(CXXFLAGS) -c main.cpp

methods.o: methods.cpp methods.h
	g++ $(CXXFLAGS) -c methods.cpp

poem: poem.cpp
	g++ -o poem poem.cpp

tests: tests.o methods.o
	g++ -o tests tests.o methods.o

tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

clean:
	rm -f main.o methods.o tests.o main poem tests
