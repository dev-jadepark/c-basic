#include <stdio.h>

int change(int *);

void main() {
  int a = 10;
  int *p = &a;
  printf("함수 호출 이전의 a : %d \n", a);
  change(p);
  printf("함수 호출 이후의 a : %d \n", a);

}

int change(int *k) {
  *k = *k + *k; // 주소의 값과 주소의 값을 더한걸 주소의 값에 할당
}

/*
C 언어에서 함수가 리턴 값을 가지지 않아도 되는 경우는 여러 가지가 있지만,
특히 이 경우에는 change 함수가 값을 반환하지 않아도 되는 이유는 
함수가 매개변수로 전달받은 포인터를 사용하여 원래 변수의 값을 직접 변경하기 때문

-> void를 사용하면 좋을듯하다.
*/