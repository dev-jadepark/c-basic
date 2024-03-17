#include <stdio.h>
int main()
{
  /* 
  전치연산 : i의 값을 먼저 사용한 후 1 증가
  후치연산 : i의 값을 먼저 1증가 시킨 후 사용
  */
  
  int a, b, c;
  a = b = c = 0;
  a = ++b + ++c;  // a = 1 + 1;
  printf("a = %d, b = %d, c = %d \n", a, b, c);
  a = b++ + c++;  // a = 1 + 1; -> b = c = 2 
  printf("a = %d, b = %d, c = %d \n", a, b, c);

  return 0;
}