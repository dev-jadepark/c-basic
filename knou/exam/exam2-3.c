/*
  예제 : exam2-3.h을 include하여 사용하는 예제 프로그램
  파일 이름 : exam2-2.c
  수정 일자 : 2024년 5월 5일
  작성자 : 박진호
*/
#include "exam2-3.h"  //같은 디렉토리에 존재하는 헤더파일
/*
  [파일 포함 형식]
  #include <파일명>
  #include  "파일명"
  #include  "\디렉토리\파일명"
*/
void main() {
  /*
  //변수에 할당하는 방법
  int add_result, sub_result;
  add_result = ADD(10, 5);
  sub_result = SUB(10, 5);
  printf("10과 5를 더하면 %d이다. \n", add_result);
  printf("10에서 5를 빼면 %d이다. \n", sub_result);
  */

  //함수의 결과를 바로 사용하는 방법
  printf("10과 5를 더하면 %d이다. \n", ADD(10, 5));
  // ADD(10,5) => exam2-3.h에 있는 #define ADD(x, y) ((x)+(y)) 치환 => 즉, ((10)+(5))
  printf("10에서 5를 빼면 %d이다. \n", SUB(10, 5));
  // SUB(10,5) => exam2-3.h에 있는 #define SUB(x, y) ((x)-(y)) 치환 => 즉, ((10)-(5))

}