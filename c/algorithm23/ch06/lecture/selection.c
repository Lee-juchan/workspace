/*
    #practice 06-04 / 23.04.20 leejuchan

    @brief : 단순선택 정렬
    @details : 정렬되지 않은 부분의 가장 작은 값을 찾아, 첫번째 요소와 교환
*/

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

typedef int element;

// prototype
void printArr(element arr[], int num);
void selection(element arr[], int num);

// 메인
int main(void)
{
    int i, numData;
    int *data;

    puts("< selection sorting >");

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
    selection(data, numData);

    puts("Sort in ascending order");

    // 결과 출력
    printArr(data, numData);

    free(data);

    return 0;
}

// 배열 출력
void printArr(element arr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("data[%2d] : %d\n", i, arr[i]);
    }
    printf("\n");
}

// 선택 정렬
void selection(element arr[], int num)
{
    int pass, i, minIdx;

    // pass : 0 ~ n-1
    for (pass = 0; pass < num - 1; pass++)
    {
        // 최소값 탐색
        minIdx = pass;
        for (i = pass + 1; i < num; i++)
        {
            if(arr[i] < arr[minIdx])
            {
                minIdx = i;
            }
        }

        // 최소값과 교환
        swap(element, arr[pass], arr[minIdx]);
    }
}