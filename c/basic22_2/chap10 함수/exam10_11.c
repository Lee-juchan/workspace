#include <stdio.h> // print in order & reverse order 

void call(int num);
void reCall(int num);
void call2(int num);
void reCall2(int num);

int main(void)
{
	int number1; //input num1
	printf("input integer: ");
	scanf("%d", &number1);
	
	printf("in order: ");
	call(number1); //in order 12345
	printf("\n");
	printf("in reverse order: ");
	reCall(number1); //in reverse order 54321
	printf("\n\n");
	
	
	int number2; //input num2
	printf("input integer: ");
	scanf("%d", &number2);
	
	printf("in order: ");
	call2(number2); //in order 123 12 1
	printf("\n");
	printf("in reverse order: ");
	reCall2(number2); //in reverse order 1 12 123
	printf("\n");
	
	return 0;
}

void call(int num) //in order 12345
{
	if(num == 0)
		return;
	else
	{
		printf("%d", num);
		call(num-1);
	}
}
void reCall(int num) //in reverse order 54321
{
	if(num == 0)
		return;
	else
	{
		reCall(num-1);
		printf("%d", num);
	}
}

void call2(int num) //in order 123 12 1
{
	if(num == 0)
		return;
	else
	{
		printf("%d ", num);
		call2(num/10);
	}
}
void reCall2(int num) //in reverse order 1 12 123
{
	if(num == 0)
		return;
	else
	{
		reCall2(num/10);
		printf("%d ", num);
	}
}
