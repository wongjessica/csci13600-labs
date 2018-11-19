CXXFLAGS=-std=c++11

main: main.o functions.o
	g++ -o main main.o functions.o

main.o: main.cpp functions.h
	g++ $(CXXFLAGS) -c main.cpp

functions.o: space3d.cpp functions.h
	g++ $(CXXFLAGS) -c space3d.cpp

tests: tests.o functions.o
	g++ -o tests tests.o functions.o

tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

poem: poem.cpp
	g++ -o poem poem.cpp

clean:
	rm -f *.o main tests
