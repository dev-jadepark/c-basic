#include <stdio.h>

int main(void)
{
  int num1 = 10;
  int num2 = (num1--) + 2;

  printf("num1: %d \n", num1);
  printf("num2: %d \n", num2);  //12 -> 소괄호의 영향을 받지 않고 다음 문장으로 넘어가야만 비로소 값의 증가 및 감소가 이뤄진다.
  printf("num2: %d \n", num2);
  return 0;
}