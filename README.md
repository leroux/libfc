Functional C [![Build Status](https://travis-ci.org/leroux/libfc.png?branch=master)](https://travis-ci.org/leroux/libfc)
============
An experimental library to make functional programming in C simple.
Note that at this time only integers are supported. There is need for generic functions, though.
So feel free to contribute.

Building and Installing
-----------------------
`$ make && make install`

- - -

List Format
-----------
A list is stored in an array `xs` with its elemental length (+1, for keeping the length) at index 0, `xs[0]`.
The list's data is kept in the array `xs` ranging from `xs[1]` and so on.
For example, the list `[50, 23, 41, 21]` would be kept in the following fashion -
  `[5, 50, 23, 41, 21]`.
Taking into account that index 0 is reserved for the array's total length, the list's elemental length is `(5 - 1)`
or simply `4`.

Function Type Definitions
-------------------------
```c
// Unary function.
typedef int (*ufunc)(int a);

// Binary function.
typedef int (*bfunc)(int a, int b);

// Predicate. Unary function that returns a boolean.
typedef bool (*pred)(int a);
```

Transformations
---------------
```c
// Applies an unary function f to each element of a list xs.
int *map(ufunc f, int *xs)

// Filters a list xs by a predicate p.
int *filter(pred p, int *xs);

// Folds/Reduces list xs by a binary function *f* applied to
// accumulator value and each element of a list xs starting from the left.
int foldl(bfunc f, int accumulator, int *xs);
```

List Operations
---------------
```c
// Prints out a list xs in a readable format, i.e. `[1, 4, 3]`.
void list_print(int *xs);

// Returns the first element of a list. Very trivial.
int head(int *xs);

// Returns the tail (the list w/o the head).
int *tail(int *xs);

// Sum of a list xs.
int sum(int *xs);

// Product of a list xs.
int product(int *xs);
```

Numerical Operations
--------------------
```c
// Add numbers a, b.
int add(int a, int b);

// Subtract a number b from a number a.
int sub(int, a, int b);

// Multiply a number a with a number b.
int mul(int a, int b);
```
