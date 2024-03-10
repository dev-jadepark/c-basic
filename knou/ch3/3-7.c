#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
  // gets()
  char s[50];
  printf("문자열 입력 : ");
  gets(s);
  printf("gets()로 문자열 출력 : %s \n", s);
  
  printf("문자열 입력 : ");
  scanf("%s", s);
  printf("scanf()로 문자열 출력 : %s \n", s);
  
  return 0;
}