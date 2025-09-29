CC = gcc
CFLAGS = -Wall
TARGET = main

$(TARGET): graph.h graph.c ${TARGET}.c 
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c graph.c

run: $(TARGET)
	./${TARGET}

clean: 
	rm -f $(TARGET)

.PHONY: clean run 