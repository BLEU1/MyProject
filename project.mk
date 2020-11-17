VPATH=Include:ModuleA:ModuleB:ModuleC:RELEASE
CFLAGS=-I./Include
SRC=$(wildcard ModuleA/*.c ModuleB/*.c ModuleC/*.c)
OBJS=$(patsubst %.c,%.o,$(SRC))
