/*
    #lecture 06-02 / 23.04.19 leejuchan

    @brief : 버블정렬 3
    @details : 마지막으로 교환한 요소로, 다음에 수행할 pass의 범위 줄이기
*/

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

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
    for(i = 0; i < numData; i++)
    {
        printf("data[%2d] : ", i);
        scanf("%d", &data[i]);
    }
    printf("\n");

    // 정렬
    bubble3(data, numData);

    puts("Sort in ascending order");

    // 결과 출력
    for(i = 0; i < numData; i++)
    {
        printf("data[%2d] : %d\n", i, data[i]);
    }

    free(data);

    return 0;
}

// 버블 정렬 3 (마지막으로 교환한 요소로, 다음에 수행할 pass의 범위 줄이기)
void bubble3(element data[], int numData)
{
    int sortRange = 0;
    while (sortRange < numData - 1)
    {
        int i;
        int lastExchg = numData - 1;

        // pass 수행
        for (i = numData - 1; i > sortRange; i--)
        {
            if (data[i - 1] > data[i])
            {
                swap(element, data[i - 1], data[i]);
                lastExchg = i;
            }
        }
        sortRange = lastExchg;
    }
}