#include <stdio.h>

int main(void)
{
  int num1 = 15;
  int num2 = 20;
  int num3 = num1 ^ num2; //두 비트 사이에 서로 다른 경우에 1을 반환하는 연산

  printf("XOR 연산 결과: %d\n", num3);
  return 0;
}