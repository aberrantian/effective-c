#include <stdio.h>

void swap(int a, int b) {
  int t = a;
  a = b;
  b = t;

  printf("after: a = %d, b = %d\n", a, b);
}

int main(void) {
  int a = 1;
  int b = 2;

  printf("before: a = %d, b = %d\n", a, b);
  swap(a, b);

  return 0;
}