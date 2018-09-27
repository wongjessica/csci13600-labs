CXXFLAGS=-std=c++11

tests: tests.o east-storage.o reverse-order.o compare.o
	g++ -o tests tests.o east-storage.o reverse-order.o compare.o

east-storage.o: east-storage.cpp east-storage.h
	g++ $(CXXFLAGS) -c east-storage.cpp

tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

clean:
	rm -f main.o tests.o 
