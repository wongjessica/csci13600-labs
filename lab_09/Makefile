CXXFLAGS=-std=c++11

main: main.o space3d.o particle.o
	g++ -o main main.o space3d.o particle.o
	
main.o: main.cpp
	g++ $(CXXFLAGS) -c main.cpp
	
poem: poem.o
	g++ -o poem poem.o
	
poem.o: poem.cpp func.h
	g++ $(CXXFLAGS) -c poem.cpp
	
tests: tests.o space3d.o particle.o
	g++ -o tests tests.o space3d.o particle.o
	
tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp
	
space3d.o: space3d.cpp func.h
	g++ $(CXXFLAGS) -c space3d.cpp
	
particle.o: particle.cpp func.h
	g++ $(CXXFLAGS) -c particle.cpp
	
	
clean:
	rm -f main *.o *.exe
