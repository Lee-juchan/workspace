#include <stdio.h> //recursion _ sum & factorial

int recursion_sum(int num);
int recursion_fact(int num);

int main(void)
{
	int number;
	printf("input integer: "); //input number
	scanf("%d", &number);
	
	printf("sum 1~%d: %d\n", number, recursion_sum(number));
	printf("%d!: %d\n", number, recursion_fact(number));
	
	return 0;
}

int recursion_sum(int num)
{
	if(num == 1) 
		return 1;
	return num + recursion_sum(num-1);
}

int recursion_fact(int num)
{
	if(num == 1)
		return 1;
	return num * recursion_fact(num-1);
}
