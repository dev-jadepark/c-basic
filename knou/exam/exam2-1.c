/*
  예제 : C언어의 자료형에 대한 크기를 나타내는 프로그램
  파일 이름 : exam2-1.c
  수정 일자 : 2024년 5월 5일
  작성자 : 박진호
*/
#include <stdio.h>
void main() {
  /*
  [자료형]
  - 변수를 선언하기 위해 사용하는 자료의 형태를 의미
  - 변수나 함수 등을 사용할 때 컴파일러가 기억공간을 마련하는데 사용하는 자료의 종류나 크기를 나타냄
  - 기본형과 확장형으로 나뉘어 진다
  */

  /*
  [문자 자료형]
  - C언어 에서는 ASCII코드를 사용하여 처리
  - -128 ~ 127
  - A~Z는 십진수로 65~90
  - a~z는 십진수로 97~122
  - 숫자 0~9sms 48~57로 지정
  */
  //printf("char 자료형 크기 : %d byte \n", sizeof(char));  //실행결과에 없어서 주석
  //printf("signed char 자료형 크기 : %d byte \n", sizeof(signed char)); //실행결과에 없어서 주석
  printf("unsigned char 자료형 크기 : %d byte \n", sizeof(unsigned char));
  
  /*
  [정수 자료형]
  - 정수 자료형은 int로 정의
  - 크기를 나타내는 short, long 키워드
  - 부호있는 정수를 나타내는 signed 키워드
  - 부호없는 정수를 나타내는 unsigned 키워드
  - 보통 부호 있는 정수를 나타낼 때 signed키워드는 생략하고 다른 키워드와 같이 사요할때 int는 생략가능
  */

  /*
  범위 : -32768 ~ 32767
  크기 : 2byte
  short
  short int
  signed short
  signed short int
  */
  printf("short 자료형 크기 : %d byte \n", sizeof(short));
  printf("short int 자료형 크기 : %d byte \n", sizeof(short int));
  printf("signed short 자료형 크기 : %d byte \n", sizeof(signed short));
  printf("signed short int 자료형 크기 : %d byte \n", sizeof(signed short int));
  
  /*
  범위 : 0 ~ 65535
  크기 : 2byte
  unsigned short
  unsigned short int
  */
  printf("unsigned short 자료형 크기 : %d byte \n", sizeof(unsigned short));
  printf("unsigned short int 자료형 크기 : %d byte \n", sizeof(unsigned short int));
  
  /*
  범위 : -2,147,483,648 ~ 2,147,483,647
  크기 : 4byte
  int
  signed int
  */
  printf("int 자료형 크기 : %d byte \n", sizeof(int));
  printf("signed int 자료형 크기 : %d byte \n", sizeof(signed int));
  
  /*
  범위 : 0 ~ 4,294,967,295
  크기 : 4byte
  unsigned
  unsigned int
  */
  printf("unsigned 자료형 크기 : %d byte \n", sizeof(unsigned));
  printf("unsigned int 자료형 크기 : %d byte \n", sizeof(unsigned int));
  
  /*
  범위 : -2,147,483,648 ~ 2,147,483,647
  크기 : 4byte
  long
  long int
  signed long
  signed long int
  */
  printf("long 자료형 크기 : %d byte \n", sizeof(long));
  printf("long int 자료형 크기 : %d byte \n", sizeof(long int));
  printf("signed long 자료형 크기 : %d byte \n", sizeof(signed long));
  printf("signed long int 자료형 크기 : %d byte \n", sizeof(signed long int));
  
  /*
  범위 : 0 ~ 4,294,967,295
  크기 : 4byte
  unsigned long
  unsigned long int
  */
  printf("unsigned long 자료형 크기 : %d byte \n", sizeof(unsigned long));
  printf("unsigned long int 자료형 크기 : %d byte \n", sizeof(unsigned long int));
  
  /*
  범위 : -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
  크기 : 8byte
  long long
  long long int
  signed long long
  signed long long int
  */
  printf("long long 자료형 크기 : %d byte \n", sizeof(long long));
  printf("long long int 자료형 크기 : %d byte \n", sizeof(long long int));
  printf("signed long long 자료형 크기 : %d byte \n", sizeof(signed long long));
  printf("signed long long int 자료형 크기 : %d byte \n", sizeof(signed long long int));
  
  
  /*
  범위 : 0 ~ 18,446,744,073,709,551,615
  크기 : 8byte
  unsigned long long
  unsigned long long int
  */
  printf("unsigned long long 자료형 크기 : %d byte \n", sizeof(unsigned long long));
  printf("unsigned long long int 자료형 크기 : %d byte \n", sizeof(unsigned long long int));
  
  /*
  float 4byte
  double, long double 8byte
  */
  printf("float 자료형 크기 : %d byte \n", sizeof(float));
  printf("double 자료형 크기 : %d byte \n", sizeof(double));
  printf("long double 자료형 크기 : %d byte \n", sizeof(long double));


}