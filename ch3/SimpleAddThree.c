#include <stdio.h>

int main(void)
{
  int result;
  int num1, num2;

  printf("정수 one: ");
  scanf("%d", &num1); //10진수의 형태로 저장해라는 의미

  printf("정수 two: ");
  scanf("%d", &num2);

  result = num1 + num2;
  printf("%d + %d = %d \n", num1, num2, result);
  return 0;
}