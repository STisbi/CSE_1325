CXX = g++
CXXFLAGS = -g -pedantic -std=c++0x

default: main

main: main.o Component.o Torso.o Head.o Arm.o Locomotor.o Batteries.o Model.o Shop.o Customer.o
	$(CXX) $(CXXFLAGS) -o main main.o Component.o Torso.o Head.o Arm.o Locomotor.o Batteries.o Model.o Shop.o Customer.o

main.o: main.cpp Component.h Torso.h Head.o Arm.o Locomotor.o Batteries.o Model.o Shop.o Customer.o
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

Model.o: Model.cpp Model.h
	$(CXX) $(CXXFLAGS) -c Model.cpp

Shop.o: Shop.cpp Shop.h
	$(CXX) $(CXXFLAGS) -c Shop.cpp

Customer.o: Customer.cpp Customer.h
	$(CXX) $(CXXFLAGS) -c Customer.cpp

clean:
	$(RM) main *.o *~

rebuild:
	clean main

