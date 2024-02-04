#include <stdio.h>

int main(void)
{
  int num1=10, num2=20, num3=30;
  int* arr[3] = {&num1, &num2, &num3};  // int형 포인트 배열을 선언하고 이미 선언한 변수의 주소값으로 초기화

  printf("%d \n", *arr[0]); 
  printf("%d \n", *arr[1]);
  printf("%d \n", *arr[2]);
  return 0;
}