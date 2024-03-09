#include <stdio.h>
#include <limits.h>

int main()
{
  /*
    열거형
    enum으로 선언
    열거자의 값은 디폴트로 첫번째는 0
  */

  enum day1 { SUN, MON, TUE, WED, THU, FRI, SAT } d1;
  enum day2 { sun = 2, mon, tue, wed, thu, fri, sat } d2;
  d1 = WED;
  d2 = wed;
  printf("열거형 d1에 저장된 값은 %d 입니다. \n", d1);
  printf("열거형 d2에 저장된 값은 %d 입니다. \n", d2);

  // 열거형 d1에 저장된 값은 3 입니다. 
  // 열거형 d2에 저장된 값은 5 입니다. 
  return 0;
}