#include <stdio.h> //2 dimention matrix -> sum(A + B) / (diagonal) / (total A) 

int main(void)
{
	int matrixA[3][3]; //matrix declare
	int matrixB[3][3];
	int sum[3][3] = {0,};
	
	int i,j; //input value in matrix A & B
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("input maxtrix[%d][%d] both A & B: ", i, j);
			scanf("%d %d", &matrixA[i][j], &matrixB[i][j]);
		}
	}
	printf("\n");
	
	for(i=0; i<3; i++) //print matrixA
	{
		for(j=0; j<3; j++)
		{
			printf("A[%d][%d] = %d ", i, j, matrixA[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0; i<3; i++) //print matrixB
	{
		for(j=0; j<3; j++)
		{
			printf("B[%d][%d] = %d ", i, j, matrixB[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0; i<3; i++) //print sum(A + B)
	{
		for(j=0; j<3; j++)
		{
			sum[i][j] = matrixA[i][j] + matrixB[i][j];
			printf("sum[%d][%d] = %d ", i, j, sum[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0; i<3; i++) //print diagonal matrixA
	{
		printf("A[%d][%d] = %d\n", i, i, matrixA[i][i]);
	}
	printf("\n");
	
	int totalA; //print total matrixA
	for(i=0; i<3; i++) 
	{
		for(j=0; j<3; j++)
		{
			totalA += matrixA[i][j];
		}
	}
	printf("total A: %d\n", totalA);
	
	return 0;
}
