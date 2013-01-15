export CC ?= gcc
export CFLAGS := -I$(shell pwd)/include -L$(shell pwd)/src -Wall -Wextra -Werror -Wno-unused-parameter \
	-std=c99 -pedantic -O0

libdir = /usr/lib
includedir = /usr/include

.PHONY: clean all install ex

all: src/libfc.a ex

src/libfc.a:
	cd src; $(MAKE)

install: src/libfc.a
	install -C -m 644 src/libfc.a $(libdir)/libfc.a
	mkdir -p $(includedir)/fc
	install -C -m 644 include/fc/fc.h $(includedir)/fc/fc.h

ex: src/libfc.a
	cd ex; $(MAKE)

clean:
	cd src; $(MAKE) clean
	cd ex; $(MAKE) clean
