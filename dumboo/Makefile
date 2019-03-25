CC	= g++
CFLAGS	= -g -Wall
LDFLAGS	=
OBJS	= helloWorld.o
TARGET	= helloWorld.out

all: $(TARGET) 

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)

HelloWorld.o : HelloWorld.cpp
	$(CC) $(CFLAGS) -c -o HelloWorld.o HelloWorld.cpp $(LDFLAGS)

clean:
	rm -f $(OBJS)
