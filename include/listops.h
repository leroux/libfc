#ifndef _LISTOPS_H
#define _LISTOPS_H

#include <stdio.h>
#include "ops.h"
#include "transforms.h"

#define size(xs) (xs[0])

int list_print(int *xs);
int sum(int *xs);
int product(int *xs);

#endif