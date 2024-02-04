#include <stdio.h>

int main(void)
{
  int arr[5];
  int sum = 0, i;

  arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
  for(i = 0 ; i < 5; i++)
  {
    sum += arr[i];
  }

  printf("sum ? %d \n", sum);

  return 0;
}

/*
  배열의 세가지 선언방법

  1) int arr[5] = {1, 2, 3, 4, 5};  // 중괄호에 묶인 부분을 초기화 리스트 라 한다.

  2) int arr[] = {1, 2, 3, 4, 5}; // 길이에 자동으로 5가 할당됨

  3) int arr[5] = {1, 2}; // 나머지 2, 3, 4번에 해당되는 곳에 0이 초기화 됨


*/