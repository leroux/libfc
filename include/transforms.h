#ifndef _TRANSFORMS_H
#define _TRANSFORMS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef int (*ufunc)(int a);
typedef int (*bfunc)(int a, int b);
typedef bool (*pred)(int a);

int *map(ufunc f, int *xs);
int *filter(pred p, int *xs);
int foldl(bfunc f, int accumulator, int *xs);

#endif