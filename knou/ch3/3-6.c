#include <stdio.h>

int main()
{
  // putchar()
  char var = 'A';
  putchar(var);
  putchar(var+1);
  putchar('\n');
  putchar('K');
  putchar('K'+2);
  putchar('\007');
  return 0;
}