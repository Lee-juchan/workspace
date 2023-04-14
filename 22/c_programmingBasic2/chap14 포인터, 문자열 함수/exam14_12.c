#include <stdio.h> //parameter -> array == pointer

int main(void)
{
	int a[] = {10, 20};
	int b[] = {1, 2};
	
	sumArray(a,b);
	printf("a: %d %d\n", a[0], a[1]);
	
	sumPointer(a,b);
	printf("a: %d %d\n", a[0], a[1]);
	
	return 0;
}

void sumArray(int x[], int y[]) //parameter -> array
{
	for(int i=0; i<2; i++)
	{
		x[i] = x[i] + y[i]; //input sum  in x[]
	}
}

void sumPointer(int* x, int* y) //parameter -> pointer
{
	for(int i=0; i<2; i++)
	{
		x[i] = x[i] + y[i]; //input sum  in x[]
	}
}
