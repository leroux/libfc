#include "list_t.h"

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <errno.h>

list_t *list_create(void) {
  list_t *xs = malloc(sizeof(list_t));
  if (!xs)
    perror("Could not create list.");
  xs->head = NULL;
  return xs;
}

list_t *list_clone(list_t *xs) {
  unsigned int length = list_length(xs);
  list_t *clone = malloc(sizeof(node_t) * length);

  if(!clone)
    perror("Could not clone list.");

  memcpy(clone, xs, sizeof(node_t) * length); 
  return clone;
}

node_t *node_create(void *value, size_t size) {
  node_t *x;
  void *v;

  x = malloc(sizeof(node_t));
  if (!x)
    perror("Could not create node.");

  v = malloc(size);
  if (!v)
    perror("Could not create copy of value.");
  memcpy(v, value, size);

  x->value = v;
  x->previous = NULL;
  x->next = NULL;

  return x;
}

list_t *list_genericInsert(list_t *xs, unsigned int index, void *value, size_t size) {
  node_t *a = node_create(value, size);
  node_t *insertAfter;

  if (list_null(xs)) { // list is null (empty)
    xs->head = a;
    return xs;
  }

  list_t *ys = list_clone(xs);

  if (index == 0) {
    a->next = ys->head;
    ys->head = a;
  } else {
    insertAfter = subscript(ys, index);
    a->previous = insertAfter;
    a->next = insertAfter->next;
    insertAfter->next->previous = a;
    insertAfter->next = a;
  }

  return ys;
}

list_t *list_prepend(list_t *xs, void *value, size_t size) {
  return list_genericInsert(xs, 0, value, size);
}

unsigned int list_length(list_t *xs) {
  unsigned int length = 0;
  node_t *current;

  if (list_null(xs))
    return 0;

  for (current = xs->head; !current; current = current->next, length++);

  return length;
}

bool list_null(list_t *xs) {
  return !xs->head;
}

node_t *subscript(list_t *xs, unsigned int index) {
  unsigned int i = 0;
  node_t *current;

  for (i = 0, current = xs->head; !current && i < index; i++);

  return current;
}

int main(int argc, char *argv[]) {
  list_t *xs = list_create();
  // xs = list_prepend(xs, 5, sizeof(int));

  return 0;
}
