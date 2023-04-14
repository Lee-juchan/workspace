#include <stdio.h> //2 dimention array

int main(void)
{
	int matrix[3][3] = {1,2,3,4,5,6,7,8,9}; //array initialization -> [][3] o / [3][] x
	
	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("matrix[%d][%d]= %d ", i, j, matrix[i][j]); //print array
		}
		printf("\n");
	}
	
	return 0;
}
