#ifndef _LIST_T_H
#define _LIST_T_H

#include "func_t.h"

#include <stdlib.h>
#include <stdbool.h>

typedef struct node_t {
  void          *value;
  struct node_t *previous;
  struct node_t *next;
  extract_fn_t  *extract;
} node_t;

typedef struct {
  node_t *head;
} list_t;

// Creation and Initialization
list_t *list_create(void);
list_t *list_clone(list_t *xs);
node_t *node_create(void *value, size_t size);

// Insertions
list_t *list_genericInsert(list_t *xs, unsigned int index, void *value, size_t size);
list_t *list_prepend(list_t *xs, void *value, size_t size);
list_t *list_insert(list_t *xs, unsigned int index, void *value, size_t size);
list_t *list_append(list_t *xs, void *value, size_t size);

// Basic List Operations
unsigned int list_length(list_t *xs);
bool list_null(list_t *xs);
node_t *subscript(list_t *xs, unsigned int index);

#endif
