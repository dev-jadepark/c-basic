#include <stdio.h>

// int NumberCompare(int, int);
int NumberCompare(int num1, int num2);
int GetAbsoValue(int num);

int main(void)
{
  int num1, num2;
  printf("두개의 정수를 입력 : ");
  scanf("%d %d", &num1, &num2);
  printf("%d과 %d중에서 큰 수는 %d 이다 \n", num1, num2, NumberCompare(num1, num2));
  return 0;
}

int NumberCompare(int num1, int num2)
{
  if(GetAbsoValue(num1) > GetAbsoValue(num2)){
    return num1;
  }else{
    return num2;
  }
}

int GetAbsoValue(int num)
{
  if(num < 0)
    return num * (-1);
  else
    return num;
} 