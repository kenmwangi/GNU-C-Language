# Generic simple makefile


# the compiler: gcc for C program, can be defined as g++ for C++

CC = gcc

# compiler flags
# -g  adds debugging information to executable file
#  - Wall turns most compiler warnings

CFLAGS = -g -Wall

# the build target executable

TARGET = 3-exercises

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c
clean:
	$(RM) $(TARGET)
