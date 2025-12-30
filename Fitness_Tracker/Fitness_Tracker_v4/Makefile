# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Target name
TARGET = main

# Automatically find all .cpp files in the directory
SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)

# Default rule
all: $(TARGET)

# Link all object files into the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile each .cpp into a .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -f $(OBJS) $(TARGET)
