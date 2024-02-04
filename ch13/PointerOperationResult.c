#include <stdio.h>

int main(void)
{
  int * ptr1 = 0x0010;
  double * ptr2 = 0x0010;
  printf("%p %p \n", ptr1+1, ptr1+2);  //4증가하고 8이 증가한다.
  printf("%p %p \n", ptr2+1, ptr2+2);  //8증가하고 16이 증가한다.
  printf("%p %p \n", ptr1, ptr2);
  ptr1++;
  ptr2++;
  printf("%p %p \n", ptr1, ptr2);

  /*
  결론
  TYPE형 포인터를 대상으로 n의 크기만큼 값을 증가 및 감소 시 n * sizeof(TYPE) 의 크기만큼 주소 값이 증감
  */

  return 0;
}