CXX = g++
CXXFLAGS = -g -pedantic -std=c++0x


main: main.o Torso.o Component.o
	$(CXX) $(CXXFLAGS) -o main main.o Torso.o Component.o

main.o: main.cpp Torso.h Component.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Torso.o: Torso.cpp Torso.h
	$(CXX) $(CXXFLAGS) -c Torso.cpp

Component.o: Component.cpp Component.h
	$(CXX) $(CXXFLAGS) -c Component.cpp

