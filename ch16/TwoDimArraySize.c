#include <stdio.h>

// TYPE arr[세로길이][가로길이];

int main(void)
{
  int arr1[3][4];
  int arr2[2][6];
  printf("arr1길이 : %d \n", sizeof(arr1));
  printf("arr2길이 : %d \n", sizeof(arr2));
  //2차원 배열에서의 길이가 "세로길이 * 가로길이 * 자료형 크기"가 되는 이유는 배열이 메모리에 연속적으로 할당되기 때문
  return 0;
}