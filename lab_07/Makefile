CXXFLAGS=-std=c++11

main: main.o indent.o
	g++ -o main main.o indent.o

main.o: main.cpp
	g++ $(CXXFLAGS) -c main.cpp
	
indent.o: indent.cpp indent.h
	g++ $(CXXFLAGS) -c indent.cpp
	
clean:
	rm -f *.o main
