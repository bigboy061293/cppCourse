CC	=	g++
CFLAGS	=	-Wall -g
LDFLAGS	=	
OBJS	=	dumb33.o	dumb3Secondary.o
TARGET	=	dumb3.out

all: $(TARGET)

$(TARGET):	$(OBJS)
	$(CC) $(CFLAGS)	-o $(TARGET) $(OBJS) $(LDFLAGS)
	
%.o: %.cpp
	$(CC) $(CFLAGS)	-c $< -o $@
	
clean:
	rm -f $(OBJS)
