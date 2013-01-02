Functional C
============
An experimental library to make functional programming in C simple.

```c
// Applies an unary function *f* to each element of a list *xs*.
int *map(ufunc f, int *xs)

// Filters a list *xs* by predicate p.
// A predicate is a unary function that returns a boolean value.
int *filter(pred p, int *xs);

// Folds/Reduces list *xs* by a binary function *f* applied to
// accumulator value and each element of a list *xs* starting from the left.
int foldl(bfunc f, int accumulator, int *xs);

// Simply prints out a list *xs* in a readable fashion.
int print_list(int *xs);
```
