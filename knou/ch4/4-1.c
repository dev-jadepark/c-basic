#include <stdio.h>

/*
 1) 순차적 제어
  - 특별한 지정이 없는 한 위에서 아래로 수행되는 제어구조
 2) 선택적 제어
  - 주어진 조건에 따라 특정부분으로 수행을 옮기는 분기 제어구조
  if 문
  switch ~ case 문
  goto 문
 3) 반복적 제어
  for문
  while문
  do~while문
*/

int main()
{
  int a;
  printf("정수입력(1~200) : ");
  scanf("%d", &a);
  if (a < 100)
    printf("입력한 정수가 100보다 작음 \n");
  printf("a = %d \n", a);
}