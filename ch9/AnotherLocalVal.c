#include <stdio.h>

int main(void)
{
  int cnt;
  for(cnt = 0; cnt < 3; cnt++)  // main 내에 선언된 cnt를 참조해서 cnt가 ++ 된것
  {
    int num=0;
    num++;
    printf("%d번째 반복, 지역함수 num은 %d. \n", cnt+1, num); 
  }

  // 1
  // 2

  if(cnt == 3)
  {
    int num = 7;
    num++;
    printf("if문 내에 존재하는 지역함수 num은 %d. \n", num);
  }
  return 0;
}