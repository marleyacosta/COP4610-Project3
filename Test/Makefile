CC = gcc
CFLAGS = -std=gnu99 -O2 -Wall -ggdb

all: mycall_test.c
	${CC} ${CFLAGS} -o mycall_test $^

clean:
	rm -f *~ *.o *.dep mycall_test
