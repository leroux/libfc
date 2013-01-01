#include <stdio.h>
#include "listops.h"
#include "transforms.h"

int print_list(int *xs) {
  printf("[");

  int i = 0;
  for (i = 1; i < size(xs) - 1; i++) {
    printf("%d, ", xs[i]);
  }

  printf("%d]\n", xs[size(xs) - 1]);

  return 1;
}
