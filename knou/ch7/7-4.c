#include <stdio.h>
#include <string.h>

struct student
{
  char name[10];
  int kor;
  int math;
};


void main() {

  struct student hs[4] = {
    {"홍길동", 90, 95},
    {"황진이", 22, 100},
    {"임꺽정", 30, 10}
  };
  
  struct student *p;
  p = hs;

  printf("%s %d %d \n", p -> name, p -> kor, p -> math);
  p++;
  printf("%s %d %d \n", p -> name, p -> kor, p -> math);
}