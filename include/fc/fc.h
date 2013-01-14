#ifndef _FC_H
#define _FC_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A list's elemental length (and itself) is stored in index 0 of the array.
// The true data of the list is stored from start at index 1.
// For example, the list [1,2,3,4] would be stored in an array as -
//  [5, 1,2,3,4].
#define size(xs) (xs[0])

// Unary function.
typedef int (*ufunc)(int a);
// Binary function.
typedef int (*bfunc)(int a, int b);
// Predicate. Unary function that returns a boolean. 
typedef bool (*pred)(int a);

/* Transformations */
int *map(ufunc f, int *xs);
int *filter(pred p, int *xs);
int foldl(bfunc f, int accumulator, int *xs);
int foldr(bfunc f, int *xs, int accumulator);

/* List Operations */
void list_print(int *xs);
int head(int *xs);
int *tail(int *xs);
int sum(int *xs);
int product(int *xs);

/* Numerical Operations*/
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

/* Filter Operations */
bool even(int a);
bool odd(int a);

#endif