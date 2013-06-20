#ifndef _FUNC_H
#define _FUNC_H

#include <stdbool.h>

/* Generic Function Type Definitions. */
typedef void *(*u_func_t)(void* a); // Unary function.
typedef void *(*b_func_t)(void *a, void *b); // Binary function.
typedef void *(t_func_t)(void *a, void *b, void *c); // Ternary function.
typedef bool (*pred_t)(void *a); // Predicate. Unary function that returns a boolean. 

#endif
