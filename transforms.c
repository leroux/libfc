#include "transforms.h"

int *map(ufunc f, int *xs) {
  int *mapped = malloc(size(xs) * sizeof(int));

  mapped[0] = size(xs);

  int i = 0;
  for (i = 1; i < size(xs); i++) {
    mapped[i] = f(xs[i]);
  }

  return mapped;
}

int *filter(pred p, int *xs) {
  int filtered_count = 0;
  
  int i = 0;
  for (i = 1; i < size(xs); i++) {
    if (p(xs[i]) == true) {
      filtered_count++;
    }
  }

  int *filtered = malloc((1 + filtered_count) * sizeof(int));

  filtered[0] = 1 + filtered_count;

  int filtered_i = 1;
  for (i = 1; i < size(xs); i++) {
    if (p(xs[i]) == true) {
      filtered[filtered_i++] = xs[i];
    }
  }

  return filtered;
}

int foldl(bfunc f, int accumulator, int *xs) {
  int i = 0;

  for (i = 1; i < size(xs); i++) {
    accumulator = f(accumulator, xs[i]); 
  }

  return accumulator;
}
