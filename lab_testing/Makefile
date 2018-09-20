main: main.o pig.o
      g++ -o main main.o pig.o

pig.o: pig.h pig.cpp #pig.o is dependent on pig.cpp and pig.h
       g++ -c pig.cpp

tests: pigs.o tests.o
       g++ -o tests pig.o tests.o
       
tests.o: tests.cpp #tests.o is dependent on tests.cpp
         g++ -c tests.cpp
         
main.o: main.cpp pig.h
        g++ -c main.cpp
        
clean:
        rm -f pig.o tests.o main.o
