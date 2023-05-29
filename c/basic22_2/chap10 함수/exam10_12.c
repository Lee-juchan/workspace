#include <stdio.h> //recursion _ counting figures

int countFig(int num);

int main(void)
{
	int number;
	printf("input integer: ");
	scanf("%d", &number);
	
	printf("figures of number: %d", countFig(number));
	
	return 0;
}

int countFig(int num) //counting figures
{
	if(num == 0)
		return 0;
	else
	{
		return countFig(num/10) + 1;
	}
}
