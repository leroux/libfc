export CC := gcc
export CFLAGS := -Wall -Wextra -Werror -Wno-unused-parameter -std=c99 -pedantic -O2
# export CFLAGS := $(CFLAGS) -O2 # FAST
export CFLAGS := $(CFLAGS) -O0 -g # DEBUG
