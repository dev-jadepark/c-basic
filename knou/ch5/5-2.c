#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  int i, alp = 0, no = 0, et = 0;
  char s[20];
  printf("문자 입력 : ");
  scanf("%s", s); //배열을 전달하므로 & 없음
  for (i = 0; i < strlen(s); i++) {
    if(isalpha(s[i]))
      alp++;
    else if(isdigit(s[i]))
      no++;
    else
      et++;
  }
  printf("알파벳 = %d \n", alp);
  printf("숫자 = %d \n", no);
  printf("그외 = %d \n", et);
}