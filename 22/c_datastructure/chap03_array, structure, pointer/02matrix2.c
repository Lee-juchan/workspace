/*
    23.03.26 leejuchan

    @brief : matrix행렬 구현 => 전치행렬 구하기

    @details : 0이 아닌 항만 저장 (구조체로 row, colum, value 저장)
*/

#include <stdio.h>


#define MAX_TERMS 10

typedef struct // 행렬에 필요한 요소
{
    int row;
    int column;
    int value;
} element;

typedef struct //행렬 구조체
{
    element data[MAX_TERMS]; // 각 항의 정보
    int rows;               // 총 행수
    int columns;            // 총 열수
    int terms;              // 총 항(0이 아닌)수
} matrix;

//prototype
matrix transpose_matrix(matrix preMat);
void print_matrix(matrix mat);
void print_matrix_all(matrix mat);

//
int main(void)
{
    matrix mat1 = {{{0,3,7},{1,0,9},{1,5,8},{3,0,6},{3,1,5},{4,5,1},{5,2,2}}, 6, 6, 7};
    matrix result; //기본적으로 result.data[] 배열이 0으로 초기화되지 않고 쓰래기값이 있어서, value값 0이 나올때까지 검색하는것으로 항의 개수를 추정할 수 없다. 항수를 입력해놔야함

    print_matrix_all(mat1); // 원본 행렬 출력

    result = transpose_matrix(mat1); // 전치행렬 구하기
    print_matrix_all(result);        // 전치행렬 출력

    return 0;
}


// 전치행렬 함수
matrix transpose_matrix(matrix preMat)
{
    matrix postMat; //결과 저장할 행렬

    postMat.rows = preMat.columns; // 총 행,열,항 수 저장
    postMat.columns = preMat.rows;
    postMat.terms = preMat.terms;
    
    // matrix.data 저장
    int index = 0;
    for(int c=0; c<preMat.columns; c++) // 전치행렬을 row 기준으로 정렬하기 위해, 기존행렬 column순서로 탐색 (기존column = 전치row) 
    {
        for(int t=0; t<preMat.terms; t++) // 모든항 탐색
        {
            if(c == preMat.data[t].column)
            {
                postMat.data[index].row = preMat.data[t].column;
                postMat.data[index].column = preMat.data[t].row;
                postMat.data[index].value = preMat.data[t].value;

                index++;
            }
        }
    }
    
    return postMat;
}


//행렬 출력 함수 (0이 아닌 항만)
void print_matrix(matrix mat)
{
    printf("---------------\n");


    for(int t=0; t<mat.terms; t++)
    {
        printf("%d %d %d\n", mat.data[t].row, mat.data[t].column, mat.data[t].value);
    }

    printf("---------------\n");
}


//행렬 출력 함수 (모든 항 출력)
void print_matrix_all(matrix mat)
{
    printf("---------------\n");

    int index = 0;
    for(int r=0; r<mat.rows; r++)
    {
        for(int c=0; c<mat.columns; c++)
        {
            if(r == mat.data[index].row && c == mat.data[index].column) //row, column이 일치하면 해당항 출력
            {
                printf("%d ", mat.data[index++].value);
                continue;
            }

            printf("%d ", 0); //없으면 0 출력
        }
        printf("\n");
    }

    printf("---------------\n");
}