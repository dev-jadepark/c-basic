#include <stdio.h>
#include <math.h>
#include <stdlib.h> // abs 함수를 사용하기 위해 추가

/*
  함수의 특성
  - 함수들은 서로 자유로이 호출 가능
  - 모든 함수는 서로 독립적

  함수의 장점
  - 프로그램 수정이 용이하다
  - 함수 재사용으로 코드 중복을 최소화 한다.
  - 프로그램 기능을 한눈에 파악할 수 있게 해줌으로써 유지보수에 용이하다

  단위 프로그램으을 하나의 함수에 기술한 경우
  - 함수의 길이가 커짐
  - 프로그램의 가독성 문제
  - 수정의 어려움
  - 일부분만 재호출 어려움
  void main(){}

  -> 기능별로 독립된 단위(함수)로 구성한 경우(효율적)

  score_inpiut(){}
  score_update(){}
  score_process(){}
  score_output(){}

  C언어의 함수의 종료
  - 표준함수
    C언어 자체에서 제공하는 함수
    원형은 헤더파일에 정의
    실체는 라이브러리 파일에 수록
    헤더파일을 선행처리기에서 #include 시켜주어야 함

  - 사용자정의 함수
  
*/

int main()
{
  // 표준함수 예
  double x = 12.34;
  int i = -5, j = 2;
  int a, b, c;
  a = ceil(x);  //최소 정수값
  b = floor(x);
  c = pow(4, j);
  printf("a = %d \n", a);
  printf("b = %d \n", b);
  printf("c = %d \n", c);
  printf("abs(-5) = %d \n", abs(i));
}