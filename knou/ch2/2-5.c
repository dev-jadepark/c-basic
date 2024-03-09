#include <stdio.h>
#include <limits.h>

int main()
{
  /*
    8진수 지정 : 숫자앞에 0을 입력
    16진수 지정 : 숫자 앞에 0x를 입력
  */

  int num1 = 104;
  int num2 = 0150;
  int num3 = 0x68;
  printf("num1에 저장된 정숫값은 : %d \n", num1);
  printf("num2에 저장된 정숫값은 : %d \n", num2);
  printf("num3에 저장된 정숫값은 : %d \n", num3);

  return 0;
}