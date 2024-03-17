#include <stdio.h>
int main()
{
  /* 
  boolean
  */
  
  int a = 4, b = 7, c, d, e;
  c = a > 2 && b <= 7;
  printf("c=%d\n",c); // 1
  d = a < 2 || b <= 7;
  printf("d=%d\n",d); // 1
  e = !a ;
  printf("e=%d\n",e); // 0

  return 0;
}