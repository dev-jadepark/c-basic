#include <stdio.h>
#include <limits.h>

int main()
{
  char ch1 = CHAR_MIN;
  char ch2 = CHAR_MAX;

  short sh1 = SHRT_MIN;
  short sh2 = SHRT_MAX;

  int in1 = INT_MIN;
  int in2 = INT_MAX;

  printf("char 자료형의 범위 : %d ~ %d \n", ch1, ch2);
  printf("short 자료형의 범위 : %d ~ %d \n", sh1, sh2);
  printf("int 자료형의 범위 : %d ~ %d \n", in1, in2);

  return 0;
}