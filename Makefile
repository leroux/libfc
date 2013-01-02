export CC := gcc
export CFLAGS := -I$(shell pwd)/include -Wall -Wextra -Werror -Wno-unused-parameter -std=c99 -pedantic
export CFILES := src/filterops.c src/listops.c src/numops.c src/transforms.c
export OFILES := $(CFILES:.c=.o)
export TESTS := test/test.c

all: test

.c.o:
	$(CC) $(CFLAGS) $< -c -o $@

test: $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) $(TESTS) -o test/$@
	test/test

clean:
	rm -f $(OFILES) test/test

.PHONY: clean test
