CC = g++

TARGET = main

CFLAGS = -c -g -Wall

all: $(TARGET)

$(TARGET): $(TARGET).o
	$(CC) $(TARGET).o -o $(TARGET)

$(TARGET).o: $(TARGET).cpp
	$(CC) $(CFLAGS) $(TARGET).cpp

clean:
	rm *.o $(TARGET) *~
