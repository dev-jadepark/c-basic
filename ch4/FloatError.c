#include <stdio.h>

int main(void)
{
  int i;
  float num = 0.0;

  for(i=0; i<100; i++)
    num+=0.1;

    printf("0.1을 100번 더한 값 %f\n", num);  //10진수 실수 형태로 출력 10.000002
    //컴퓨터는 실수를 100% 정확히 표현하지 못한다. 다만 근사치를 표현할 뿐이다.
  return 0;
}