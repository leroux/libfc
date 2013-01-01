export CC						:= gcc
export CFLAGS				:= -I$(shell pwd)/include -Wall -Wextra -Werror -Wno-unused-parameter -std=c99 -pedantic
export CFILES				:= src/transforms.c src/listops.c
export OFILES				:= $(CFILES:.c=.o)
export TESTS				:= test/test.c

.c.o:
	$(CC) $(CFLAGS) $< -c -o $@

test: $(OFILES)
	$(CC) $(CFLAGS) $(TESTS) $(OFILES) -o test/$@
	test/test

clean:
	rm -f $(OFILES) test/test

.PHONY: clean test