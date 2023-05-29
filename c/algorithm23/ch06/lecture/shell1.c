/*
    #practice 06-04 / 23.04.20 leejuchan

    @brief : 셸 정렬 (<- 단순삽입 정렬)
    @details : 요소를 그룹으로 나눠 그룹별로 미리 정렬하고, 그룹을 합치면서 반복
                (단순삽입 정렬 : 정렬에 가까운 배열일때, 속도가 매우 빠름)
*/

#include <stdio.h>
#include <stdlib.h>

typedef int element;

// prototype
void printArr(element arr[], int num);
void selection(element arr[], int num);
void shell1(element arr[], int num);

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
    for (i = 0; i < numData; i++)
    {
        printf("data[%2d] : ", i);
        scanf("%d", &data[i]);
    }
    printf("\n");

    // 정렬
    shell1(data, numData);

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

// 셸 정렬 1
void shell1(element arr[], int num)
{
    int sortIdx, i, h, offset;

    // h값 설정
    for (h = num / 2; h > 0; h /= 2)
    {
        // h-정렬, 각 그룹(offset) 반복
        for (int offset = 0; offset < h; offset++)
        {
            // 거리가 h만큼 떨어진 그룹, 단순 삽입 정렬
            for (sortIdx = h + offset; sortIdx < num; sortIdx += h)
            {
                element tmp = arr[sortIdx]; // 현재 값 저장

                // 알맞은 위치에 삽입
                for (i = sortIdx - h; (i >= 0 && arr[i] > tmp); i -= h)
                {
                    arr[i + h] = arr[i];
                }

                arr[i + h] = tmp;
            }
        }
    }
}