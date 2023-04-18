/*
    #lecture 06-02 / 23.04.19 leejuchan

    @brief : 버블정렬 2
    @details : 정렬횟수 0일때 작업 멈춤
*/

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

// 요소 정의 (배열 요소를 범용적으로 포괄하기 위함)
typedef int element;

// 함수 원형
void bubble2(element data[], int numData);

// 메인
int main(void)
{
    int i, numData;
    int *data;

    puts("< bubble sorting >");

    // 요소 수 입력
    printf("Input the number of elements : ");
    scanf("%d", &numData);

    data = calloc(numData, sizeof(element));

    // 요소 입력
    for(i = 0; i < numData; i++)
    {
        printf("data[%2d] : ", i);
        scanf("%d", &data[i]);
    }
    printf("\n");

    // 정렬
    bubble2(data, numData);

    puts("Sort in ascending order");

    // 결과 출력
    for(i = 0; i < numData; i++)
    {
        printf("data[%2d] : %d\n", i, data[i]);
    }

    free(data);

    return 0;
}

// 버블 정렬 2 (정렬횟수 0일때 작업 멈춤)
void bubble2(element data[], int numData)
{
    int pass, i;
    // int cmprCnt = 0; // 총 비교, 교환 횟수
    // int exchgCnt = 0;

    for(pass = 0; pass < numData - 1; pass++)
    {
        int numExchg = 0; // 교환 횟수
        for(i = numData - 1; i > pass; i--)
        {
            if(data[i - 1] > data[i])
            {
                swap(element, data[i - 1], data[i]);
                numExchg++; // 교환횟수 증가
                // exchgCnt++;
            }
            // cmprCnt++;
        }
        if (numExchg == 0) // 교환횟수 0이면 정렬중지(완료)
        {
            break;
        }
    }
    // printf("-------------------\n");
    // printf("Comparison : %d\n", cmprCnt);
    // printf("Exchange : %d\n", exchgCnt);
    // printf("-------------------\n");
}