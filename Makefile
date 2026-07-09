CXX := g++
CXXFLAGS := -std=c++17 -Wall -Iinclude
SRC := $(wildcard src/*.cpp) main.cpp
TARGET := homework06

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
