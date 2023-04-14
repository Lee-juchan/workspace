#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 1;
	int n;

	printf("gugudan: ");
	scanf("%d", &n);
	printf("\n");

	while (i <= 9)
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
	return 0;
}