#include <stdio.h>
#define CONDITION 1

int main()
{
#if CONDITION
  printf("A");
#else
  printf("B");
#endif
  return 0;
}

