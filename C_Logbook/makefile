# Compiler and flags
C = gcc
CFLAGS = -Iinclude -Wall -Wextra -std=c11

# Find all .c files recursively
SRCS := main.c $(shell find src -name "*.c")

# Generate object files
OBJS := $(SRCS:.c=.o)

# Target executable
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJS)
	$(C) $(CFLAGS) -o $@ $^

# Compile .o files
%.o: %.c
	$(C) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
