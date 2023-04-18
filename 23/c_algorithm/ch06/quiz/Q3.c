/*
    #quiz 06-03

    @brief : 버블정렬 2 quiz
    @details : 정렬 종료여부 검사
*/

typedef int element;

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

int isSorted(const element data[], int numData);

int main(void)
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 5, 4};

    printf("is arr1 sorted? : %d\n", isSorted(arr1, 5));
    printf("is arr2 sorted? : %d\n", isSorted(arr2, 5));
}

// 정렬 종료여부 검사
int isSorted(const element data[], int numData)
{
    int i;
    int exchg = 0; // 교환 횟수

    for(i = 0; i < numData - 1; i++)
    {
        if(data[i] > data[i + 1]) // 큰 값이 앞에 존재하면 교환필요
        {
            exchg++;
        }
    }

    if(exchg == 0)
    {
        return 1; // 정렬 완료
    }
    else
    {
        return 0;
    }
}