#include <stdio.h>
#include <limits.h>

int main()
{
  char ch1, ch2;
  ch1 = 0;
  ch2 = '0';
  printf("ch1에 저장된 ASCII 코드값 = %d, ASCHI문자 = %c \n", ch1, ch1);
  printf("ch2에 저장된 ASCII 코드값 = %d, ASCHI문자 = %c \n", ch2, ch2);

  //ch1에 저장된 ASCII 코드값 = 0, ASCHI문자 =  
  //ch2에 저장된 ASCII 코드값 = 48, ASCHI문자 = 0 
  return 0;
}