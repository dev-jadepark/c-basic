#include <stdio.h>

void SimpleFunc(void)
{
  static int num1 = 0;  // 전역변수화 -> 선언된 함수 내에서만 사용함
  register int num2 = 0;  // 레지스터에 메모리 할당하라는 힌트이지만 최종 결정은 컴파일러가 함
  num1++, num2++;
  printf("static : %d, local : %d \n", num1, num2);
}

int main(void)
{
  int i;
  for(i = 0; i < 3 ; i++)
    SimpleFunc();
  
  return 0;
}