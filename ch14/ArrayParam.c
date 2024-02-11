#include <stdio.h>

void ShowArrayElem(int * param, int len)
{
  int i;
  for(i=0; i < len; i++)
    printf("%d \n", param[i]);
}

int main(void)
{
  int arr1[3] = {1, 2, 3};
  int arr2[5] = {4, 5, 6, 7, 8};
  ShowArrayElem(arr1, sizeof(arr1) / sizeof(int));
  ShowArrayElem(arr2, sizeof(arr2) / sizeof(int));
  return 0;
}

/*

C 언어에서는 배열의 크기를 구하기 위해 sizeof 연산자를 사용합니다. 
sizeof 연산자는 피연산자의 크기를 바이트 단위로 반환합니다. 
배열의 전체 크기를 구하려면 배열의 총 바이트 크기를 해당 자료형의 크기로 나누어야 합니다.

그러나 sizeof 연산자는 배열의 길이를 직접 반환하지 않습니다. 
따라서 배열의 총 바이트 크기를 해당 자료형의 바이트 크기로 나누어 배열의 길이를 구합니다. 
이 코드에서 sizeof(arr1) / sizeof(int)는 arr1 배열의 크기를 
int 형의 크기로 나누어 배열의 요소 수를 구하는 것입니다. 
이렇게 함으로써 ShowArrayElem 함수에 전달된 배열의 길이를 알 수 있습니다.
*/