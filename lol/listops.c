#include "listops.h"

void list_print(int *xs) {
  printf("[");

  int i = 0;
  for (i = 1; i < size(xs) - 1; i++) {
    printf("%d, ", xs[i]);
  }

  printf("%d]\n", xs[size(xs) - 1]);

  return 1;
}

int sum(int *xs) {
  return foldl(add, 0, xs);  
}

int product(int *xs) {
  return foldl(mul, 1, xs);  
}
