CC = gcc
CFLAGS = -Wall
LDFLAGS = 
OBJFILES = main.o tail_factorial.o
TARGET = run

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(TARGET) $(OBJFILES) *~