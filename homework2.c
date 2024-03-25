#include<stdio.h>
int main(){
char charType;
int integerType;
float floatType;
double doubleType; // 변수 선언

printf("size of char : %ld bytes\n", sizeof(charType)); // charType의 크기
printf("size of int : %ld bytes\n", sizeof(integerType)); //integerType의 크기
printf("size of float : %ld bytes\n", sizeof(floatType)); //floatType 크기
printf("size of double : %ld bytes\n", sizeof(doubleType)); //doubleType 크기

printf("----------------------------------\n");

printf("size of char : %ld bytes\n", sizeof(char)); //char 자료형의 크기
printf("size of int : %ld bytes\n", sizeof(int)); //int자료형의 크기
printf("size of float : %ld bytes\n", sizeof(float)); //float자료형의 크기
printf("size of double : %ld bytes\n", sizeof(double )); //double자료형의 크기

printf("----------------------------------\n");

printf("size of *char : %ld bytes\n", sizeof(char*)); //char를 가리키는 포인터의  크기
printf("size of *int : %ld bytes\n", sizeof(int*)); //int를 가리키는 포인터의  크기
printf("size of *float : %ld bytes\n", sizeof(float*)); //float를 가리키는 포인터의  크기
printf("size of *double : %ld bytes\n", sizeof(double* )); //double를 가리키는 포인터의  크기

printf("-----[ 송 동 선 ]	[2023078041]-----");
return 0;
}
