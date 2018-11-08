CXXFLAGS=-std=c++11

main: main.o func.o invert.o invert-half.o box.o frame.o scale.o pixelate.o kernel.o
	g++ -o main main.o func.o invert.o invert-half.o box.o frame.o scale.o pixelate.o kernel.o
	
main.o: main.cpp
	g++ $(CXXFLAGS) -c main.cpp
	
func.o: func.cpp func.h
	g++ $(CXXFLAGS) -c func.cpp
	
invert.o: invert.cpp invert.h func.h
	g++ $(CXXFLAGS) -c invert.cpp
	
invert-half.o: invert-half.cpp invert-half.h func.h
	g++ $(CXXFLAGS) -c invert-half.cpp
	
box.o: box.cpp box.h func.h
	g++ $(CXXFLAGS) -c box.cpp
	
frame.o: frame.cpp frame.h func.h
	g++ $(CXXFLAGS) -c frame.cpp
	
scale.o: scale.cpp scale.h func.h
	g++ $(CXXFLAGS) -c scale.cpp
	
pixelate.o: pixelate.cpp pixelate.h func.h
	g++ $(CXXFLAGS) -c pixelate.cpp
	
kernel.o: kernel.cpp kernel.h func.h
	g++ $(CXXFLAGS) -c kernel.cpp
	
clean:
	rm -f *.o main invert.pgm invert-half.pgm box.pgm frame.pgm scale.pgm pixelate.pgm kernel.pgm
