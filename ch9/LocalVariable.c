#include <stdio.h>

int SimpleFuncOne(void)
{
  int num=10;
  num++;
  printf("SimpleFuncOne num: %d \n", num);
  return 0;
}

int SimpleFuncTwo(void)
{
  int num1 = 20;
  int num2 = 30;
  num1++; num2--;
  printf("num1 & num2: %d %d \n", num1, num2);
  return 0;
}

int main(void)
{
  int num = 17;
  SimpleFuncOne();  //11
  SimpleFuncTwo();  //21, 29
  printf("num : %d\n", num);
  return 0;
}