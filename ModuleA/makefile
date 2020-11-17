VPATH=../Include
CFLAGS=-I../Include
DIRPATH=../RELEASE
OBJS=$(patsubst %.c,%.o,$(wildcard ./*.c))
all:$(OBJS)
$(OBJS):%.o:%.c
	gcc $(CFLAGS) -c $^ -o $(DIRPATH)/$@
