/*
  [배열의 정의]
  - 동일한 자료형을 갖는 자료들의 리스트
  - 배열의 각 요소는 하나의 변수로 취급
  - 배열은 배열명과 첨자로 구분

  [배열의 선언 형태] 첨자의 갯수로 구분
  - 1차원 배열
  - 2차월 배열
  - 3차원 배열

  [1차원 배열]
  - 배열의 첨자가 하나만 있는 배열
  - 첨자의 개수는 배열 전체의 구성요소의 개수를 의미
  - 배열의 각 요소는 배열명과 첨자로 구분 -> 첨자는 0부터 시작
  - 배열의 각 요소는 배열명과 첨자로 구분 -> 자료형과 기억클래스를 갖는다.
*/
#include <stdio.h>

void main() {
  int array1[4] = {10, 20, 30, 40}; //1차원 배열 선언과 초기화
  int array2[] = {10, 20, 30, 40};
  int array3[4] = {10, 20};
  int array4[4] = {0};
  int i;
  for(i = 0; i <= 3; i++)
    printf("array1[%d] = %d \t", i, array1[i]);
  printf("\n");

  for(i = 0; i <= 3; i++)
    printf("array2[%d] = %d \t", i, array2[i]);
  printf("\n");

  for(i = 0; i <= 3; i++)
    printf("array3[%d] = %d \t", i, array3[i]);
  printf("\n");

  for(i = 0; i <= 3; i++)
    printf("array4[%d] = %d \t", i, array4[i]);
  printf("\n");
}