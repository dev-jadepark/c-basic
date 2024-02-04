#include <stdio.h>

int main(void)
{
  int arr[3] = {0, 1, 2};
  printf("배열의 이름 : %p \n", arr);
  printf("배열의 첫번째 요소 : %d \n", arr[0]);
  printf("배열의 첫번째 요소 : %p \n", &arr[0]);
  printf("배열의 두번째 요소 : %d \n", arr[1]);
  printf("배열의 두번째 요소 : %p \n", &arr[1]);
  printf("배열의 세번째 요소 : %d \n", arr[2]);
  printf("배열의 세번째 요소 : %p \n", &arr[2]);

  // 배열의 이름은 배열의 시작 주소값을 의미하며, 그 형태는 값의 저장이 불가능한 상수이다.
  return 0;
}