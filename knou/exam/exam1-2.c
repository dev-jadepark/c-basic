/*
  예제 : 두 수를 키보드로 입력 받아 곱의 결과를 나타내는 프로그램
  파일 이름 : exam1-2.c
  수정 일자 : 2024년 5월 5일
  작성자 : 박진호
*/

#include <stdio.h>  //헤더파일 추가, stdio.h는 표준 입출력 함수의 모음집 
#pragma warning(disable:4996)
//권장하지 않는 함수 사용에 대한 경고 메시지를 무시한다.

int a, b, c;  // 정수형 변수 a, b, c를 선언
int product(int x, int y);  // 정수형 인수 x, y를 갖는 사용자 정의 함수 선언

/*
  [변수 명칭 규칙]
  - 영문자와 숫자의 조합으로 만든다.
  - 명칭의 첫 문자는 영문자나 밑줄(_)이어야 한다.
  - 특수문자를 사용해서는 안된다(단, 밑줄은 사용가능)
  - 문자사이에 공백이 있어서는 안된다.
  - 예약어를 사용할 수 없다.
  - 영문자 대문자와 소문자는 서로 구별하여 사용한다. 
*/

void main() {
  printf("Enter a number between 1 and 100 : ");  //문자열 출력
  scanf("%d", &a);  // 정수형 데이터를 입력받아 a에 할당

  printf("Enter another number between 1 and 100 : ");  //문자열 출력
  scanf("%d", &b);  // 정수형 데이터를 입력받아 b에 할당

  c = product(a, b);  // product함수를 호출하여 결과를 c에 할당
  printf("%d * %d = %d \n", a, b, c); // a, b, c의 결과를 출력
} //main 함수 끝

int product(int x, int y) { // 정수형 x, y를 인자로 받아 정수를 리턴하는 함수 product
  return (x * y); // x 와 y를 곱한 결과를 리턴한다.
} //product 함수 끝