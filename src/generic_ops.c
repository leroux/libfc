#include "generic_ops.h"

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

int mul(int a, int b) {
  return a * b;
}

int idiv(int a, int b) {
  return a / b;
}

bool even(int a) {
  return a % 2 == 0;
}

bool odd(int a) {
  return a % 2 != 0;
}
