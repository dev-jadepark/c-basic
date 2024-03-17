#include <stdio.h>

int main()
{
  /* 소문자를 대문자로 변환 프로그램 */
  char c;
  printf("소문자 한 개를 입력하시오. \n");
  c=getchar();  //문자형 자료 입력함수
  c=c-32; //소문자를 대문자로 변환(ASCII)
  putchar(c); //문자형 자료 출력함수

  /*
  [ASCII]
  A~Z : 65~90
  a~z : 97~122
  대문자 = 소문자 - 32
  소문자 = 대문자 + 32
  */



  return 0;
}