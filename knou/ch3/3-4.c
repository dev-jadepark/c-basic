#include <stdio.h>

int main()
{
  // scanf()
  int a;
  long long int b;
  float c;
  char ch;
  char s[20];

  printf("정수와 long long 정수를 입력 : ");
  scanf("%d %lld", &a, &b); //2개의 정수를 입력 받아 각각 a, b에 저장
  printf("a=%d, b=%lld\n", a, b);


  printf("실수를 입력 : ");
  scanf("%f", &c); //1개의 실수를 c에 저장
  printf("c=%10.4f, c(지수)=%e\n", c, c);

  return 0;
}