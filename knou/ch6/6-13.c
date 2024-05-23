#include <stdio.h>

void main() {
  int *p, a[] = {10, 20, 30, 40, 50};
  p = &a[0];  // 배열 첫번째의 주소값을 저장
  printf("*p  == %d \n", *p);
  printf("*p++  == %d \n", *p++);
  printf("%s\n", a);
  printf("*++p  == %d \n", *++p);
}