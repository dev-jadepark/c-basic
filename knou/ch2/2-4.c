#include <stdio.h>
#include <limits.h>

int main()
{
  char ch;  //문자형 변수 ch 선언
  int in; //정수형 변수 in 선언
  ch = in = 'A'; 
  printf("ch = %d \n", ch);
  printf("in = %d \n", in);
  printf("===========\n");
  printf("ch = %c \n", ch);
  printf("in = %c \n", in);

//ch = 65 
// in = 65 
// ===========
// ch = A 
// in = A 
  return 0;
}