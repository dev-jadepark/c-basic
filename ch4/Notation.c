#include <stdio.h>

int main(void)
{
  int num1=0xA7, num2=0x43;
  int num3=032, num4=024;

  printf("0xA7의 10진수 정수 값: %d \n", num1); //서식문자(포맷지정자) %d는 10진수로 정수형태로 할당
  printf("0xA7의 16진수 정수 값: %x \n", num1);
  printf("0x43의 10진수 정수 값: %d \n", num2);
  printf("032의 10진수 정수 값: %d \n", num3);
  printf("024의 10진수 정수 값: %d \n", num4);

  printf("%d-%d=%d\n",num1, num2, num1-num2);
  printf("%d-%d=%d\n",num3, num4, num3+num4);
  return 0;
}