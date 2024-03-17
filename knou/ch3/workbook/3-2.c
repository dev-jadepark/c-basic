#include <stdio.h>

int main()
{
  /* 각 자료형의 입출력 프로그램 */
  
  int in;
  float fl;
  char ch;
  char str[50];

  printf("문자를 입력한 후 Enter \n");
  scanf("%c", &ch);
  printf("%c \n",ch);

  printf("정수를 입력한 후 Enter \n");
  scanf("%d", &in);
  printf("%d \n",in);

  printf("실수를 입력한 후 Enter \n");
  scanf("%f", &fl);
  printf("%f \n",fl);

  printf("문자열를 입력한 후 Enter \n");
  scanf("%s", &str);
  printf("%s \n",str);

  return 0;
}