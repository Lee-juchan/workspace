#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t=x; x=y; y=t;} while(0)

void bubble(int arr[], int num);

int main(void)
{
    int i, number;
    int *arr;

    // 요소 수 입력
    puts("buble sort");
    printf("numbers of elements : ");
    scanf("%d", &number);
    arr = calloc(number, sizeof(int));

    // 값 입력
    for(i=0; i<number; i++)
    {
        printf("arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    // 버블 정렬
    bubble(arr, number);

    // 정렬된 값 출력
    puts("sorting assending order");
    for(i=0; i<number; i++)
    {
        printf("arr[%d] : %d\n", i, arr[i]);
    }

    free(arr);

    return 0;
}

void bubble(int arr[], int num)
{
    int pass, i;
    for(pass = 0; pass < num-1; pass++)
    {
        for(i = num-1; i > pass; i--)
        {
            if(arr[i-1] > arr[i])
            {
                swap(int, arr[i-1], arr[i]);
            }
        }
    }
}