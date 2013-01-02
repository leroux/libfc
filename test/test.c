#include <stdio.h>
#include "fc.h"

int square(int a) {
  return a * a;
}

int cube(int a) {
  return a * a * a;
}

bool less_than_50(int a) {
  return a < 50;
}

bool even(int a) {
  return a % 2 == 0;
}

int main(int argc, char *argv[]) {
  int l[] = {10,1,2,3,4,5,6,7,8,9};
  int *m;

  printf("\n--------------\n");

  printf("%d\n", foldl(mul, 1, l));
  m = map(cube, l);
  list_print(m);
  m = filter(even, m);
  list_print(m);

  printf("%d\n", sum(m));
  
  printf("--------------\n");

  return 0;
}
