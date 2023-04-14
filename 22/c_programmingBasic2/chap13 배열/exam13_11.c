#include <stdio.h> //array _ function parameter

int arraySum(int array[]);

int main(void)
{
	int arr1[3] = {1, 2, 3}; //array initialization
	int arr2[3] = {2, 4, 6};
	
	printf("arr1 sum: %d\n", arraySum(arr1)); //array sum
	printf("arr2 sum: %d\n", arraySum(arr2));
	
	return 0;
}
int arraySum(int array[])
{
	int sum = 0;
	for(int i=0; i<3; i++)
	{
		sum += array[i]; //accumulating value
	}
	return sum;
}
