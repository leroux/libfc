export CFILES := filterops.c listops.c numops.c transforms.c
export OFILES := $(CFILES:.c=.o)

.PHONY: clean

libfc.a: $(OFILES)
	ar rcs libfc.a $(OFILES)

%.o: %.c
	$(CC) $(CFLAGS) $< -c -o $@

clean:
	rm -rf libfc.a $(OFILES)
