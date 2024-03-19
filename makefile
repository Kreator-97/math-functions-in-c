### Compiler gcc for C and g++ for C++

CC = gcc

# Ejecutable
TARGET = main.exe

# Flags
CFLAGS = -g -Wall

# Resources and sources
SRC = main.c

# Compiling
all:
	$(CC) $(CFLAGS) $(SRC) -o ./Build/$(TARGET) && ./Build/$(TARGET)

clean:
	rm -rf ./Build/$(TARGET)
