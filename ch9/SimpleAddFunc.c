#include <stdio.h>

/**
 * 1. 전달인자와 반환 값이 모두 있는 경우
*/
int Add(int num1, int num2)
{
  return num1 + num2;
}

/**
 * 2. 전달인자 O , 반환 값 X 
*/
void ShowAddResult(int num)
{
  printf("덧셈결과 출력: %d \n", num);
}

/**
 * 3. 전달인자 X , 반환 값 O
 * 소괄호 안에서의 void의 의미 => 인자를 전달하지 않겠다.
*/
int ReadNum(void)
{
  int num;
  scanf("%d", &num);
  return num;
}

/**
 * 4. 전달인자 X , 반환 값 X
*/
void HowToUseThisProg(void)
{
  printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
  printf("두 개의 정수를 입력하세요! \n");
}

int main(void)
{
  int result, num1, num2;
  HowToUseThisProg();
  num1 = ReadNum();
  num2 = ReadNum();
  result = Add(num1, num2);
  ShowAddResult(result);
  return 0;
}

/*
  return의 의미
  1. 함수를 빠져나간다.
  2. 값을 반환한다.

  반환형이 void인 경우의 return은 1에 해당한다.
*/