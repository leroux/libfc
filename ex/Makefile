EXAMPLES = test.c
BINARIES = $(EXAMPLES:%.c=%)

LDFLAGS += -lfc

.PHONY : all clean

all: $(BINARIES)

%: %.c
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@
	./$@

clean:
	rm -rf $(BINARIES)
