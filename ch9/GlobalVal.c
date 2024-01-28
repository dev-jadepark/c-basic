#include <stdio.h>

void Add(int val);
int num;  // 전역변수는 기본 0으로 초기화됨

int main(void)
{
  int num = 5;
  printf("num : %d\n" , num); // 0
  Add(3);
  printf("num : %d\n" , num); // 3
  num++;
  printf("num : %d\n" , num); // 4
  return 0;

}

void Add(int val)
{
  
  num += val; //num에 val을 더하기함
}