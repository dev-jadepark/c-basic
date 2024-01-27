#include <stdio.h>

int main(void)
{
  int total = 0, num = 0;
  do {
    printf("入力(0 to quit) : ");
    scanf("%d", &num);
    total += num;
  }while (num != 0);

  printf("合計：%d \n", total);
  
  
  return 0;
}