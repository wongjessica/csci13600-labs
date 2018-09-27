CXXFLAGS=-std=c++11

tests: tests.o east-storage.o reverse-order.o compare.o minmax.o
	g++ -o tests tests.o east-storage.o reverse-order.o compare.o minmax.o

east-storage.o: east-storage.cpp east-storage.h
	g++ $(CXXFLAGS) -c east-storage.cpp

minmax.o: minmax.cpp minmax.h
	g++ $(CXXFLAGS) -c minmax.cpp
	
reverse-order.o: reverse-order.cpp reverse-order.h
	g++ $(CXXFLAGS) -c reverse-order.cpp
	
compare.o: compare.cpp compare.h
	g++ $(CXXFLAGS) -c compare.cpp	
	
tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

clean:
	rm -f main.o tests.o 
