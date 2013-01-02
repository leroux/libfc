EXAMPLES = test.c
BINARIES = $(EXAMPLES:%.c=%)

CFLAGS  += -I../include
LDFLAGS += -L../ -lfc

.PHONY : all clean

all: $(BINARIES)

%: %.c
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@
	./$@

clean:
	rm -rf $(BINARIES)
