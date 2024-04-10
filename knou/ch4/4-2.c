#include <stdio.h>

int main()
{
  int a = 10, b = 10;
  printf("if 문 실행 전 : a = %d, b = %d \n", a, b);
  if (a > b) {
    a = a + 20;
    printf("a = %d \n", a);
  }
  b = b + 20;
  printf("if 문 실행 후 : a = %d, b = %d \n", a, b);
}