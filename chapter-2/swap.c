#include <stdio.h>

void swap(int *pa, int *pb) {
  int t = *pa;
  *pa = *pb;
  *pb = t;
  return;
}

int main(void) {
  int a = 1;
  int b = 2;

  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);

  return 0;
}