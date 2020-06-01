CC=mips-openwrt-linux-gcc
CFLAGS=-Wall -std=gnu99

TARGET=start
SRCS = main.c \
  ./Information.pb-c.c \
  ./protobuf-c/protobuf-c.c

INC = -I./
#INC = -I/usr/local/include/

OBJS = $(SRCS:.c=.o)

$(TARGET):$(OBJS)
#	@echo TARGET:$@
#	@echo OBJECTS:$^
	$(CC) --std=c99 -o $@ $^

clean:
	rm -rf $(TARGET) $(OBJS)

proto:
	protoc-c Information.proto --c_out=./

java-proto:
	protoc Information.proto --java_out=./

%.o:%.c
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<
