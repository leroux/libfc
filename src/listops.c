#include "fc/fc.h"

void list_print(int *xs) {
  printf("[");

  int i = 0;
  for (i = 1; i < size(xs) - 1; i++) {
    printf("%d, ", xs[i]);
  }

  printf("%d]\n", xs[size(xs) - 1]);

  return;
}

int head(int *xs) {
  return xs[1];
}

int *tail(int *xs) {
  int *tail = malloc((size(xs) - 1) * sizeof(int));
  
  tail[0] = size(xs) - 1;
  memcpy(&tail[1], &xs[2], size(tail) * sizeof(int));

  return tail;
}

int sum(int *xs) {
  return foldl(add, 0, xs);  
}

int product(int *xs) {
  return foldl(mul, 1, xs);  
}
