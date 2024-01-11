#include <stdio.h>

int main(void)
{
  int num1 = 15;
  int num2 = 20;
  int num3 = num1 | num2; //두 비트사이에 한개라도 1이 있으면 1

  printf("OR 연산 결과: %d\n", num3);
  return 0;
}