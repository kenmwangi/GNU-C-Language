# the compiler: gcc

CC = gcc

# compiler flags
# -g adds debugging info to executable file
# -Wall turns on most compiler warnings

CFLAGS = -g -Wall

# build target executable 

TARGET = myprog

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
