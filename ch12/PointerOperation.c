#include <stdio.h>

int main(void)
{
  int num1 = 100, num2 = 100;
  int * pnum;
  printf("pnum: %d \n", pnum);

  pnum=&num1; //pnum은 num1의 주소값을 가리킴
  (*pnum) += 30;  // num1 += 30 과 동일
  printf("pnum: %d \n", pnum);

  pnum=&num2;
  (*pnum) -= 30;  // num2 -= 30 과 동일
  printf("pnum: %d \n", pnum);

  printf("num1:%d, num2:%d \n", num1, num2);
  return 0;
}