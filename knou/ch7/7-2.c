#include <stdio.h>
#include <string.h>
//#pragma warning(disable:4996)

struct person
{
  char name[10];
  int age;
  char sex;
};

struct department
{
  char deptname[20];
  struct person person1;
  struct person person2;
  struct person person3;
  int member;
};



void main() {
  struct department accounting = {
    "Accounting",
    {"홍길동", 30, 'M'},
    {"임꺽정", 35, 'M'},
    {"황진이", 27, 'F'},
    3
  };
  printf("department : %s, %d \n", accounting.deptname, accounting.member);
  printf("person1 : %s, %d, %c \n", accounting.person1.name, accounting.person1.age, accounting.person1.sex);
  printf("person2 : %s, %d, %c \n", accounting.person2.name, accounting.person2.age, accounting.person2.sex);
  printf("person3 : %s, %d, %c \n", accounting.person3.name, accounting.person3.age, accounting.person3.sex);
}