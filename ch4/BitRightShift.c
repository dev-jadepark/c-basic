#include <stdio.h>

int main(void)
{
  int num = -16; // 11111111  11111111  11111111  11110000

  int result1 = num>>2; //num의 비트 열을 오른쪽으로 2칸씩 이동
  int result2 = num>>3; //3칸씩

  printf("1칸 이동 결과 : %d\n", result1);  //-4  1비트씩 오른쪽으로 이동할때마다 2로 나눠진다.
  printf("2칸 이동 결과 : %d\n", result2);  //-2
  return 0;
}