#include <stdio.h>
#define Hap1(x,y) x + y
#define Hap2(x,y) ((x) + (y))
#define Gop1(x,y) x * y
#define Gop2(x,y) ((x) * (y))

int main()
{
  int h1, h2, h3, h4;
  h1 = 10 * Hap1(3, 4);
  h2 = 10 * Hap2(3, 4);
  h3 = Gop1(1+2, 3+4);
  h4 = Gop2(1+2, 3+4);

  printf("h1 = %d \n", h1); // 34
  printf("h2 = %d \n", h2); // 70
  printf("h3 = %d \n", h3); // 11
  printf("h4 = %d \n", h4); // 21
  return 0;
}

