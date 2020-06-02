CC=mips-openwrt-linux-gcc
#CC=gcc
CFLAGS=-Wall -std=gnu99

PROTO_NAME=Infos-ETC

TARGET=start
SRCS = main.c \
  ./$(PROTO_NAME).pb-c.c \
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
	protoc-c $(PROTO_NAME).proto --c_out=./

java-proto:
	protoc $(PROTO_NAME).proto --java_out=./

%.o:%.c
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<
