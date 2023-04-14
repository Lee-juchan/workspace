/*
	23.03.26 leejuchan

	@brief : matrix행렬 구현 => 전치행렬 구하기

	@details : 2차원 배열에 모든 항 저장
*/

#include <stdio.h>

#define ROWS 3
#define COLUMNS 3


//prototype
void transpose_matrix (int matBefore[ROWS][COLUMNS], int matAfter[ROWS][COLUMNS]);
void print_matrix(int mat[ROWS][COLUMNS]);


//
int main(void)
{
	int mat1[ROWS][COLUMNS] = {{2,3,0}, // 행렬 생성
							   {8,9,1},
							   {7,0,5}};
	
	int mat2[ROWS][COLUMNS];

	print_matrix(mat1); //원본행렬 출력

	transpose_matrix(mat1, mat2); //행렬 전치

	print_matrix(mat2); //전치행렬 출력

	return 0;
}


// 전치행렬 함수
void transpose_matrix (int matBefore[ROWS][COLUMNS], int matAfter[ROWS][COLUMNS]) //2차원배열 리턴 함수는 복잡해서, 값 저장할 행렬도 미리 입력하도록 함
{
	for(int r=0; r<ROWS; r++)
	{
		for(int c=0; c<COLUMNS; c++)
		{
			matAfter[c][r] = matBefore[r][c]; //row, column을 바꿔서 저장
		}
	}
}


//행렬 출력함수
void print_matrix(int mat[ROWS][COLUMNS])
{
	printf("-------------\n");

	for(int r=0; r<ROWS; r++)
	{
		for(int c=0; c<COLUMNS; c++)
		{
			printf("%d ", mat[r][c]);
		}
		printf("\n");
	}

	printf("-------------\n");
}