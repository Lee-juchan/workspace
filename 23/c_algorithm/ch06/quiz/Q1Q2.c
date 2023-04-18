/*
    #quiz 06-01, 02 / 23.04.19 leejuchan

    @brief : 버블정렬 1 quiz
    @details : 왼쪽부터 정렬 / 비교 & 교환 과정, 횟수 출력
*/

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

// 요소 정의
typedef int element;

// 함수 원형
void bubble(element data[], int numData);

// 메인
int main(void)
{
    int i, numData;
    int *data;

    puts("< bubble sorting >");
    printf("-------------------\n");

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
    printf("-------------------\n");

    // 정렬
    bubble(data, numData);

    puts("Sort in ascending order");

    // 결과 출력
    for(i = 0; i < numData; i++)
    {
        printf("data[%2d] : %d\n", i, data[i]);
    }

    free(data);

    return 0;
}

// 버블정렬 (왼쪽부터 수행 / 비교 & 교환 과정, 횟수 출력)
void bubble(element data[], int numData)
{
    int pass, i, j;
    int cmprCnt = 0; // 총 비교, 교환 횟수
    int exchgCnt = 0;

    // pass 반복
    for (pass = 0; pass < numData - 1; pass++)
    {
        // 현재 pass 출력
        printf("(pass %d)\n", pass + 1);

        // pass 수행
        for (i = 0; i < numData - 1 - pass; i++)
        {
            // 배열 출력
            for(j = 0; j < numData; j++)
            {
                if (j == i) // 현재 비교중인 요소는 +/- 출력
                {
                    if(data[i] > data[i + 1])
                    {
                        printf("%d + ", data[i]);
                    }
                    else
                    {
                        printf("%d - ", data[i]);
                    }
                }
                else // 나머지는 공백 출력
                {
                    printf("%d   ", data[j]);
                }

            }
            printf("\n");

            // 요소 교환
            if (data[i] > data[i + 1])
            {
                swap(element, data[i], data[i + 1]);
                exchgCnt++;
            }
            cmprCnt++;
        }
    }
    printf("-------------------\n");
    printf("Comparison : %d\n", cmprCnt);
    printf("Exchange : %d\n", exchgCnt);
    printf("-------------------\n");
}