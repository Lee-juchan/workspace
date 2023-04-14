/*
    #practice 06-04 / 23.04.13 leejuchan

    @brief : 단순 선택 정렬
    @details : 정렬되지 않은 부분의 가장 작은 값을 찾아, 첫번째 요소와 교환
*/

#include <stdio.h>

// prototype
void swap(int *num1, int *num2);
void printArr(int arr[], int num);
void selectionSort(int arr[], int num);


int main(void)
{
    int arr[] = {3, 2, 4, 1, 5};
    printArr(arr, 5);

    selectionSort(arr, 5);
    printArr(arr, 5);

    return 0;
}

// 요소 교환
void swap(int *num1, int *num2)
{
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// 배열 출력
void printArr(int arr[], int num)
{
    for(int i=0; i<num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 선택 정렬
void selectionSort(int arr[], int num)
{
    int pass, i, min;

    // pass : 0 ~ n-1
    for (pass = 0; pass < num - 1; pass++)
    {
        // 최소값 찾기
        min = pass;
        for (i = pass + 1; i < num - 1; i++)
        {
            if(arr[i] < arr[min])
            {
                min = i;
            }
        }

        // 최소값과 교환
        swap(arr[i], arr[min]);
    }
}