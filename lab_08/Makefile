CXXFLAGS=-std=gnu++14

main: lab-images.o
	g++ -o main lab-images.o

lab-images.o: lab-images.cpp
	g++ $(CXXFLAGS) -c lab-images.cpp

ifdef SYSTEMROOT
   RM = del /Q
   FixPath = $(subst /,\,$1)
else
   ifeq ($(shell uname), Linux)
      RM = rm -f
      FixPath = $1
   endif
endif
clean:
	$(RM) lab-images.o
