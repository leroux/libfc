#include <stdio.h>
#include "transforms.h"
#include "listops.h"

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

int add(int a, int b) {
  return a + b;
}

int mult(int a, int b) {
  return a * b;
}

int main(int argc, char *argv[]) {
  int l[] = {10,1,2,3,4,5,6,7,8,9};
  int *m;
  int i = 0;

  printf("%d\n", foldl(mult, 1, l));
  m = map(cube, l);
  print_list(m);
  m = filter(even, m);
  print_list(m);

  return 0;
}
