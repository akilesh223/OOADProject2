CXX = g++
CXXFLAGS	= -std=c++11 -Wall

all: intermediate


intermediate:intermediate_zoo
	$(CXX) $(CXXFLAGS) -c Animal.h AnimalInstance.cpp Canine.cpp Feline.cpp Pachyderm.cpp Zoo.cpp ZooKeeper.cpp main.cpp

linker: Zoo
	$(CXX) $(CXXFLAGS) AnimalInstance.cpp Canine.cpp Feline.cpp Pachyderm.cpp Zoo.cpp ZooKeeper.cpp main.cpp -o zoo
	


