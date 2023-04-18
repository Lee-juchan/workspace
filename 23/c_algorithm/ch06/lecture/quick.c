#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) \
    do                   \
    {                    \
        type t = x;      \
        x = y;           \
        y = t;           \
    } while (0)

// quick sort function
void quick(int arr[], int left, int right)
{

    int ptL = left;
    int ptR = right;
    int piv = arr[(ptL + ptR) / 2];

    do
    {
        while (arr[ptL] < piv)
            ptL++;
        while (arr[ptR] > piv)
            ptR--;
        if (ptL <= ptR)
        {
            swap(int, arr[ptL], arr[ptR]);
            ptL++;
            ptR--;
        }
    } while (ptL <= ptR);
    if (left < ptR)
        quick(arr, left, ptR);
    if (ptL < right)
        quick(arr, ptL, right);
}

int main(void)
{
    int i, num;
    int *arr;

    puts("쿽 정렬");
    printf("Input the number of elements : ");
    scanf("%d", &num);
    arr = calloc(num, sizeof(int));

    for (i = 0; i < num; i++)
    {
        printf("arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    quick(arr, 0, num - 1);

    puts("오름차순 정렬");
    for (i = 0; i < num; i++)
    {
        printf("arr[%d] : %d\n", i, arr[i]);
    }

    free(arr);

    return 0;
}