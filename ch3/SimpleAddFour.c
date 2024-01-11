#include <stdio.h>

int main(void)
{
  int result;
  int num1, num2, num3;

  printf("세 개의 정수 입력 : ");
  scanf("%d %d %d", &num1, &num2, &num3); //공백을 기준으로 데이터를 구분(스페이스바, 탭키, 엔터)
  result = num1+num2+num3;

  printf("%d + %d + %d = %d", num1, num2, num3, result);
  return 0;
}