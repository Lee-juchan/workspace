#include <stdio.h> //2 dimention array -> function parameter

int totalArray(int array[2][2]);

int main(void)
{
	int arr1[2][2] = {1,2,3,4}; //array initialization
	int arr2[2][2] = {2,4,6,8};
	
	printf("total arr1: %d\n", totalArray(arr1)); //array total
	printf("total arr2: %d\n", totalArray(arr2));
	
	return 0;
}

int totalArray(int array[2][2]) //[][2] o /[2][] x /[][] x
{
	int total = 0;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			total += array[i][j];
		}
	}
	return total;
}
