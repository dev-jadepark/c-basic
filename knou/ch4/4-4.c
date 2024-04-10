#include <stdio.h>

int main()
{
  int a;
  printf("정수입력(1~200) : ");
  scanf("%d", &a);
  if (a % 2 == 0){
    printf("입력한 정수 (%d) 는 짝수 \n", a);
  }else {
    printf("입력한 정수 (%d) 는 홀수 \n", a);
  }
    
}