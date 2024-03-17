#include <stdio.h>
int main()
{
  /* 
  boolean
  */
  
  int a = 4, b, c, d;
  b = a > 2;
  printf("b=%d\n",b); // 1
  c = a < 2;
  printf("c=%d\n",c); // 0
  d = a == 4;
  printf("d=%d\n",d); // 1

  return 0;
}