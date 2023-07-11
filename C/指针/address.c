#include <stdio.h>

void test(int *a)
{
  *a = 100;
}

void main()
{
  int x = 1;
  test(&x);
  printf("%d", x);
}