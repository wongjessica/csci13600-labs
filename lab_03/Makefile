CXXFLAGS=-std=c++11

main: main.o east-storage.o minmax.o compare.o reverse-order.o
	g++ -o main main.o east-storage.o minmax.o compare.o reverse-order.o
	
main.o: main.cpp
	g++ $(CXXFLAGS) -c main.cpp
	
east-storage.o: east-storage.cpp east-storage.h
	g++ $(CXXFLAGS) -c east-storage.cpp
	
minmax.o: minmax.cpp minmax.h
	g++ $(CXXFLAGS) -c minmax.cpp
	
compare.o: compare.cpp compare.h
	g++ $(CXXFLAGS) -c compare.cpp
	
reverse-order.o: reverse-order.cpp reverse-order.h
	g++ $(CXXFLAGS) -c reverse-order.cpp
	
tests: tests.o east-storage.o minmax.o compare.o reverse-order.o
	g++ -o tests tests.o east-storage.o minmax.o compare.o reverse-order.o
	
tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp
	
clean: 
	rm -f main main.o east-storage.o minmax.o compare.o reverse-order.o tests.o tests
