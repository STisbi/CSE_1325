CXX = g++
CXXFLAGS = -g -pedantic -std=c++0x


main: main.o Component.o Torso.o Head.o Arm.o Locomotor.o Batteries.o
	$(CXX) $(CXXFLAGS) -o main main.o Component.o Torso.o Head.o Arm.o Locomotor.o Batteries.o

main.o: main.cpp Torso.h Component.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Component.o: Component.cpp Component.h
	$(CXX) $(CXXFLAGS) -c Component.cpp

Torso.o: Torso.cpp Torso.h
	$(CXX) $(CXXFLAGS) -c Torso.cpp

Head.o: Head.cpp Head.h
	$(CXX) $(CXXFLAGS) -c Head.cpp

Arm.o: Arm.cpp Arm.h
	$(CXX) $(CXXFLAGS) -c Arm.cpp

Locomotor.o: Locomotor.cpp Locomotor.h
	$(CXX) $(CXXFLAGS) -c Locomotor.cpp

Batteries.o: Batteries.cpp Batteries.h
	$(CXX) $(CXXFLAGS) -c Batteries.cpp
