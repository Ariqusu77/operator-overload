CXX?=g++
CXXFLAGS+= --std=c++17 -O3 -Wall -Wextra -Iinclude

grafika.o: src/grafika.cpp
	$(CXX) $(CXXFLAGS) -c -o bin/grafika.o src/grafika.cpp
rectangle.o: src/rectangle.cpp grafika.o
	$(CXX) $(CXXFLAGS) -c -o bin/rectangle.o src/rectangle.cpp bin/grafika.o
main.o: src/main.cpp grafika.o rectangle.o
	$(CXX) $(CXXFLAGS) -c -o bin/main.o src/main.cpp bin/grafika.o bin/rectangle.o

overload: grafika.o rectangle.o main.o
	$(CXX) $(CXXFLAGS) bin/main.o bin/grafika.o bin/rectangle.o -o overload.exe 

clean:
	rm bin/*.o 