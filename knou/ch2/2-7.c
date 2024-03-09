#include <stdio.h>
#include <limits.h>

int main()
{
  /*
    변수값의 범위를 벗어난 예시

    변수가 가지는 범위보다 더 큰 값이나 더 작은 값을 대입하는 경우 오버플로우나 언더플로우가 발생할 수 있다.
    overflow : 
    underflow : 
  */

  short int num1, num2;
  num1 = 32767+1; // short int형의 범위를 벗어남 -> looping되어 -32768
  num2 = -32768-1;  // short int형의 범위 : -32768~32767
  printf("num1 = %d \n", num1);
  printf("num2 = %d \n", num2);

  // num1 = -32768 
  // num2 = 32767 

  return 0;
}