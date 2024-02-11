#include <stdio.h>

void Swap(int * ptr1, int * ptr2)
{
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2=temp;
}
/*
 
*ptr1과 ptr1은 다른 의미를 갖습니다.

*ptr1: 포인터 ptr1이 가리키는 메모리 공간의 값을 나타냅니다. 이는 해당 포인터가 가리키는 값에 접근하는 것을 의미합니다.

ptr1: 포인터 변수 자체를 나타냅니다. 즉, 메모리 주소를 저장하는 변수를 의미합니다.

따라서 *ptr1을 ptr1로 대체한다면 포인터가 가리키는 값에 접근하는 것이 아니라, 해당 포인터 변수 자체를 다루게 됩니다. 
이는 잘못된 동작으로 이어질 수 있습니다.
Swap 함수의 목적은 두 개의 포인터가 가리키는 값을 서로 바꾸는 것이므로, *ptr1과 *ptr2의 값을 서로 교환해야 합니다. 
*/

int main(void)
{
  int num1 = 10;
  int num2 = 20;
  printf("num1 num2: %d %d \n", num1, num2);  //10 20
  Swap(&num1, &num2); //20 10
  printf("num1 num2: %d %d \n", num1, num2);  //10 20
  return 0;
}