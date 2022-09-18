# compiler: gcc for C program, define as g++ for C++

CC = gcc

# compiler flags
# -g adds debugging info for executable file
#  -Wall turns most of compiler warnings

CFLAGS = -g -Wall

TARGET = 2-printing

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
