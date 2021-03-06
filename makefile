
CC=arm-linux-gcc

TARGET=ipMsg
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c, %.o, $(SRCS))

$(TARGET):$(OBJS)
	$(CC) -o $@ $^ -lpthread

clean:
	rm $(OBJS) $(TARGET)

