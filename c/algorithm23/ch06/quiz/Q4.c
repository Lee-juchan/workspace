/*
    #quiz 06-04 / 23.04.19 leejuchan

    @brief : 버블정렬 2 quize
    @details : 비교 & 교환 과정, 횟수 출력
*/
//////////////////////////수정 필요!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)

// 요소 정의 (배열 요소를 범용적으로 포괄하기 위함)
typedef int element;

// 함수 원형
void bubble3(element data[], int numData);

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
    for (i = 0; i < numData; i++)
    {
        printf("data[%2d] : ", i);
        scanf("%d", &data[i]);
    }
    printf("\n");

    // 정렬
    bubble3(data, numData);

    puts("Sort in ascending order");

    // 결과 출력
    for (i = 0; i < numData; i++)
    {
        printf("data[%2d] : %d\n", i, data[i]);
    }

    free(data);

    return 0;
}

// 버블 정렬 2 (정렬횟수 0일때 작업 멈춤)
void bubble3(element data[], int numData)
{
    int pass, i, j;
    int cmprCnt = 0; // 총 비교, 교환 횟수
    int exchgCnt = 0;

    for (pass = 0; pass < numData - 1; pass++)
    {
        printf("(pass %d)\n", pass + 1);

        int numExchg = 0; // pass 교환 횟수
        for (i = 0; i < numData - 1 - pass; i++)
        {
            // 배열 출력
            for (j = 0; j < numData; j++)
            {
                if (j == i)
                {
                    if (data[i] > data[i + 1])
                    {
                        printf("%d + ", data[i]);
                    }
                    else
                    {
                        printf("%d - ", data[i]);
                    }
                }
                else
                {
                    printf("%d   ", data[j]);
                }
            }
            printf("\n");

            // 요소 교환
            if (data[i - 1] > data[i])
            {
                swap(element, data[i - 1], data[i]);
                numExchg++; // pass 교환횟수 증가
                exchgCnt++; // 총 교환횟수 증가
            }
            cmprCnt++;
        }
        if (numExchg == 0) // 교환횟수 0이면 정렬중지(완료)
        {
            break;
        }
    }
    printf("-------------------\n");
    printf("Comparison : %d\n", cmprCnt);
    printf("Exchange : %d\n", exchgCnt);
    printf("-------------------\n");
}