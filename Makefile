# the compiler: gcc for C program. g++ for C++

CC = gcc

# compiler flags:
#  -g  adds debugging info to executable file
#  -Wall turns almost all compiler warnings

CFLAGS = -g -Wall

# the build target executable

TARGET = myprog

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c
clean:
	$(RM) $(TARGET)
