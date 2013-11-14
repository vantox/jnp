CXX=g++
CXXFLAGS= -Wall -O2 -std=c++11

all: final 

final: kontroler.o sejf.o test.o
	$(CXX) $(CXXFLAGS) test.o kontroler.o sejf.o -o test

kontroler.o: kontroler.cc 
	$(CXX) $(CXXFLAGS) kontroler.cc -c -o kontroler.o
	
sejf.o: sejf.cc 
	$(CXX) $(CXXFLAGS) sejf.cc -c -o sejf.o
	
test.o: test.cc 
	$(CXX) $(CXXFLAGS) test.cc -c -o test.o
	
	
clean:
	rm -f *.o

.PHONY: all clean
	
