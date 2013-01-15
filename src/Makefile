export CC := gcc
export CFLAGS := -I$(shell pwd)/../include -L$(shell pwd) -Wall -Wextra -Werror -Wno-unused-parameter \
	-std=c99 -pedantic -O0

export CFILES := filterops.c listops.c numops.c transforms.c
export OFILES := $(CFILES:.c=.o)

.PHONY: clean

libfc.a: $(OFILES)
	ar rcs libfc.a $(OFILES)

%.o: %.c
	$(CC) $(CFLAGS) $< -c -o $@

clean:
	rm -rf libfc.a $(OFILES)
