#include <stdio.h>

void main() {
  int *p, i=3, j;
  p = &i;
  j = *p;
  j++;
  printf("*p = %d \n", *p); // 포인터 변수 p는 변수 i의 주소를 가리킴
  printf(" p = %d \n", p);  // 포인터 변수 P가 가리키는 번지의 내용을 변수 j에 대입
  printf(" j = %d \n", j);  // 변수 j의 값을 1 증가

}
