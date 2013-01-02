Functional C
============
An experimental library to make functional programming in C simple.
Note that at this time only integers are supported. There is need for generic functions, though.
So feel free to contribute.

`fc.h` is an amalgamation of all other headers.

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
