CC = gcc
TARGET = cllarp
SRC = larptool.c
PREFIX = /usr/local/bin

all:
	$(CC) $(SRC) -o $(TARGET)

install: all
	install -m 755 $(TARGET) $(PREFIX)

clean:
	rm -f $(TARGET)