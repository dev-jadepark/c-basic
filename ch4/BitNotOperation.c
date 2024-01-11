#include <stdio.h>

int main(void)
{
  int num1 = 15;
  int num2 = ~num1; //num1의 비트를 모두 반전시킨다.
  

  printf("NOT 연산 결과: %d\n", num2);  //MSB역시 반전된다.
  return 0;
}