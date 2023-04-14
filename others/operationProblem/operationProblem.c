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
	
	_getch(); //�ٷ� ����Ǵ� �� ����
	
	return 0;
}
int randNum(int digits) //���� ���� ��� (�ڸ��� ����)
{
	int maxNum = pow(10, digits); //�ִ밪
	int minNum = pow(10, digits - 1); //�ּҰ�
	int number = rand() % (maxNum - minNum) + minNum; //�ּҰ� =< number < �ִ밪

	return number;
}
char operator(int numOperator) //���ڷ� ������ ��� (1==+, 2==-, 3==x, 4==/)
{
	if (numOperator < 1 || numOperator >4) //���ڹ��� 1~4 ������, ������� �� ����
	{
		printf("numOperator = 1~4\n");
		exit(0);
	}
	switch (numOperator) //���ڿ� ������ ��Ī
	{
		case 1: return '+';
		case 2: return '-';
		case 3: return 'x';
		case 4: return '/';
	}
}
void operationProblem(int num1Digits, int num2Digits, int numOperator, int times) //���� ���� ��� (�� ���� �ڸ���, ������, �ݺ� Ƚ�� ����)
{
	char oper = operator(numOperator); //������ ����
	for (int i = 0; i < times; i++) //�ݺ� Ƚ����ŭ �ݺ�
	{
		int num1 = randNum(num1Digits); //�� ���ڿ� ������ ����
		int num2 = randNum(num2Digits);

		if ((oper == '-' || oper == '/') && num1 < num2) //-�� /�϶�, num1���� num2�� ũ�� �ٽ� ���� ����
		{
			i--; //�ݺ� �� ����
			continue;
		}
		if ((oper == 'x' || oper == '/') && num2 == 1) //x�� /�϶�, num2�� 1�̸� �ٽ� ���� ���� 
		{
			i--; //�ݺ� �� ���� 
			continue;
		}
		printf("%d %c %d\n", num1, oper, num2); //���� ������ ���� ���
	}	

	return;
}
