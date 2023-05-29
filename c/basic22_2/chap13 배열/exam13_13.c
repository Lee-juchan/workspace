#include <stdio.h> //matrix sum print

void matrixSum(int ma[][3], int mb[][3], int size);

int main(void)
{
	int matrixA[3][3] = {1,2,3, 4,5,6, 7,8,9}; //matrix initialization
	int matrixB[3][3] = {1,3,5, 7,9,11, 13,15,17};
	
	matrixSum(matrixA, matrixB, 3);
}

void matrixSum(int ma[][3], int mb[][3], int size)
{
	int matrixSum[3][3] = {0,};
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			matrixSum[i][j] = ma[i][j] + mb[i][j]; //matrix sum
			printf("sum[%d][%d] = %d ", i, j, matrixSum[i][j]); //print sum[][]
		}
		printf("\n");
	}
}
