#include <stdio.h>

int main(void)
{
  // 정수의 출력을 위한 서식문자들 : %d, %u, %o, %x
  int num1 = 7, num2 = 13;
  printf("%o %#o \n", num1, num1);  // 7 07
  printf("%x %#x \n", num2, num2);  // d 0xd
  return 0;
}