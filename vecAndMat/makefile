CC	=	g++
CFLAGS	=	-Wall -g
LDFLAGS	=	
OBJS	=	vector.o matrix.o main.o
TARGET	=	vecAndMat.out

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS)	-o $(TARGET) $(OBJS) $(LDFLAGS)
	
%.o: %.cpp
	$(CC) $(CFLAGS)	-c $< -o $@
	
clean:
	rm -f $(OBJS)
