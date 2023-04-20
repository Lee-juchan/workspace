/*
    #practice 06-04 / 23.04.20 leejuchan

    @brief : 단순삽입 정렬
    @details : 정렬되지 않은 부분의 값을, 정렬된 부분의 알맞은 위치에 삽입
*/

#include <stdio.h>
#include <stdlib.h>

typedef int element;

// prototype
void printArr(element arr[], int num);
void selection(element arr[], int num);

// 메인
int main(void)
{
    int i, numData;
    element *data;

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

    // 결과 출력
    puts("Sort in ascending order");
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

// 삽입 정렬
void selection(element arr[], int num)
{
    int sortIdx, i;

    for(sortIdx = 1; sortIdx < num; sortIdx++)
    {
        element tmp = arr[sortIdx];// 현재 값

        // 알맞은 위치에 삽입
        for(i = sortIdx; (i > 0 && arr[i - 1] > tmp); i--)
        {
            arr[i] = arr[i - 1];// 배열 요소 뒤로 밀기
        }
        arr[i] = tmp; // 현재 값 저장
    }
}