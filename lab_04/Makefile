CXXFLAGS=-std=c++11

tests: tests.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o redo.o
	g++ -o tests tests.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o redo.o

box.o: box.cpp box.h
	g++ $(CXXFLAGS) -c box.cpp

checkerboard.o: checkerboard.cpp checkerboard.h
  g++ $(CXXFLAGS) -c checkerboard.cpp
  
cross.o: cross.cpp cross.h
  g++ $(CXXFLAGS) -c cross.cpp
  
lower.o: lower.cpp lower.h
  g++ $(CXXFLAGS) -c lower.cpp
  
upper.o: upper.cpp upper.h
  g++ $(CXXFLAGS) -c upper.cpp
  
trapezoid.o: trapezoid.cpp trapezoid.h
  g++ $(CXXFLAGS) -c trapezoid.cpp

checkerboard3x3.o: checkerboard3x3.cpp checkerboard3x3.h
  g++ $(CXXFLAGS) -c checkerboard3x3.cpp

redo.o: redo.cpp redo.h
	g++ $(CXXFLAGS) -c redo.cpp

tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

clean: 
	rm -f main main.o box.o checkerboard.o cross.o upper.o lower.o trapezoid.o checkerboard3x3.o redo.o tests.o test
