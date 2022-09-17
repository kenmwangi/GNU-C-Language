# the compiler: gcc for GNU C programs, defined as g++ for C++

CC = gcc

# compiler flags:
# -g adds debugging info to executable file
# -Wall turns most of compiler warnings

CFLAGS = -g -Wall

# build target executable

TARGET = myprog

all: $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c
clean:
	$(RM) $(TARGET)
