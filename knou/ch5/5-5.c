#include <stdio.h>
#include <ctype.h>
#include <string.h>

int max(int x, int y);
int min(int x, int y);

int main()
{
  int i, j;
  printf("정수 2개를 입력 하시오 : ");
  scanf("%d %d", &i, &j);
  printf("%d \n",max(i,j));
  printf("%d \n",min(i,j));
}

int max(int x, int y) {
  return x > y ? x : y; 
}

int min(int x, int y) {
  return x > y ? y : x;
}