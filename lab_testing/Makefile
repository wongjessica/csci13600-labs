CXXFLAGS=-std=c++11

tests: tests.o pig.o 
	g++ -o tests tests.o pig.o

pig.o: pig.cpp pig.h
	g++ $(CXXFLAGS) -c pig.cpp

tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

clean:
	rm -f main.o pig.o tests.o 
