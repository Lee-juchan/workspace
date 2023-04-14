#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int randNum(int digits);
char operator(int numOperator);
void operationProblem(int num1Digits, int num2Digits, int numOperator, int times);

int main()
{
	srand(time(NULL));	
	
	for (int i = 0; i < 15; i++)
	{
		operationProblem(3, 2, 1, 1);
		operationProblem(3, 2, 2, 1);
		operationProblem(2, 2, 3, 1);
		operationProblem(2, 1, 4, 1);

		if (i % 2 == 0)
		{
			continue;
		}
		operationProblem(2, 2, 3, 2);
		operationProblem(2, 1, 4, 2);
	}
	
	_getch(); //바로 종료되는 것 방지
	
	return 0;
}
int randNum(int digits) //랜덤 정수 출력 (자릿수 지정)
{
	int maxNum = pow(10, digits); //최대값
	int minNum = pow(10, digits - 1); //최소값
	int number = rand() % (maxNum - minNum) + minNum; //최소값 =< number < 최대값

	return number;
}
char operator(int numOperator) //숫자로 연산자 출력 (1==+, 2==-, 3==x, 4==/)
{
	if (numOperator < 1 || numOperator >4) //숫자범위 1~4 넘으면, 오류출력 후 종료
	{
		printf("numOperator = 1~4\n");
		exit(0);
	}
	switch (numOperator) //숫자와 연산자 매칭
	{
		case 1: return '+';
		case 2: return '-';
		case 3: return 'x';
		case 4: return '/';
	}
}
void operationProblem(int num1Digits, int num2Digits, int numOperator, int times) //연산 문제 출력 (각 숫자 자릿수, 연산자, 반복 횟수 설정)
{
	char oper = operator(numOperator); //연산자 지정
	for (int i = 0; i < times; i++) //반복 횟수만큼 반복
	{
		int num1 = randNum(num1Digits); //각 숫자에 랜덤값 지정
		int num2 = randNum(num2Digits);

		if ((oper == '-' || oper == '/') && num1 < num2) //-나 /일때, num1보다 num2가 크면 다시 난수 배정
		{
			i--; //반복 수 유지
			continue;
		}
		if ((oper == 'x' || oper == '/') && num2 == 1) //x나 /일때, num2가 1이면 다시 난수 배정 
		{
			i--; //반복 수 유지 
			continue;
		}
		printf("%d %c %d\n", num1, oper, num2); //숫자 연산자 숫자 출력
	}	

	return;
}
