/*
    #lecture 06-01 / 23.04.19 leejuchan

    @brief : 버블정렬 1
    @details : 인접한 요소와 차례대로 값 교환
*/

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

// 요소 정의 (배열 요소를 범용적으로 포괄하기 위함)
typedef int element;

// 함수 원형
void bubble1(element data[], int numData);

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
    bubble1(data, numData);

    puts("Sort in ascending order");

    // 결과 출력
    for(i = 0; i < numData; i++)
    {
        printf("data[%2d] : %d\n", i, data[i]);
    }

    free(data);

    return 0;
}


// 버블 정렬 1 (기본)
void bubble1(element data[], int numData)
{
    int pass, i;
    
    // pass 반복 (n-1회)
    for (pass = 0; pass < numData - 1; pass++)
    {
        // pass 수행 (대상 : pass ~ n-1) / ex) 1번째 pass를 수행할때, 1개의 요소가 정렬되어 있음
        for (i = numData - 1; i > pass; i--)
        {
            if (data[i - 1] > data[i])
            {
                swap(element, data[i - 1], data[i]);
            }
        }
    }
}