CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = programa

SRC = main.cpp counter.cpp

OBJ = $(SRC:.cpp=.o)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

main.o: main.cpp counter.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

counter.o: counter.cpp counter.hpp
	$(CXX) $(CXXFLAGS) -c counter.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)