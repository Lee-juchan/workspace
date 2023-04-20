/*
    #practice 06-04 / 23.04.20 leejuchan

    @brief : 셸 정렬 2 심화
    @details : 셸 정렬 불안정성unstable 입증
*/

#include <stdio.h>
#include <stdlib.h>

// 배열 요소 정의
typedef struct
{
    int key;
    int id;
} element;

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
        scanf("%d", &data[i].key);

        data[i].id = i + 1; // id 일괄 부여
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
        printf("data[%2d] : %d (id : %d)\n", i, arr[i].key, arr[i].id);
    }
    printf("\n");
}

// 셸 정렬 2
void shell1(element arr[], int num)
{
    int sortIdx, i, h, offset;

    // h값 초기값
    for (h = 1; h < num / 9; h = h * 3 + 1);

    // h값 설정
    for (h; h > 0; h /= 3)
    {
        // h-정렬, 각 그룹 반복
        for (int offset = 0; offset < h; offset++)
        {
            // 거리가 h만큼 떨어진 그룹, 단순 삽입 정렬
            for (sortIdx = h + offset; sortIdx < num; sortIdx += h)
            {
                element tmp = arr[sortIdx]; // 현재 값 저장


                // 알맞은 위치에 삽입
                for (i = sortIdx - h; (i >= 0 && arr[i].key > tmp.key); i -= h)
                {
                    arr[i + h] = arr[i];
                }

                arr[i + h] = tmp;
            }
        }
    }
}