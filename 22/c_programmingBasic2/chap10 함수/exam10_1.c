#include <stdio.h>
#include <math.h> //using abs()

int main(void)
{
	int num = 1;
	while(num!=0)
	{
		printf("\nEnter 0 to exit\n");
		printf("input number: "); //input number
		scanf("%d", &num);
		
		printf("absolute value of number: %d\n", abs(num)); //print absolute value	
	}
	
	return 0;
}
