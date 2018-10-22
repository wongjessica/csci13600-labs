CXXFLAGS=-std=c++11

main: main.o test-ascii.o caesar.o vigenere.o decryption.o helpers.o
	g++ -o main main.o test-ascii.o caesar.o vigenere.o decryption.o helpers.o

main.o: main.cpp
	g++ $(CXXFLAGS) -c main.cpp
	
helpers.o: helpers.cpp helpers.h
	g++ $(CXXFLAGS) -c helpers.cpp
	
test-ascii.o: test-ascii.cpp test-ascii.h
	g++ $(CXXFLAGS) -c test-ascii.cpp
	
caesar.o: caesar.cpp caesar.h
	g++ $(CXXFLAGS) -c caesar.cpp
	
vigenere.o: vigenere.cpp vigenere.h
	g++ $(CXXFLAGS) -c vigenere.cpp
	
decryption.o: decryption.cpp decryption.h
	g++ $(CXXFLAGS) -c decryption.cpp
	
tests: tests.o test-ascii.o caesar.o vigenere.o decryption.o helpers.o
	g++ -o tests tests.o test-ascii.o caesar.o vigenere.o decryption.o helpers.o
	
tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp
	
clean:
	rm -f *.o main tests
