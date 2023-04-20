/*
    #assignment 06-01 / 23.04.18 leejuchan

    @brief : shell 정렬
    @details : 요소를 구조체로 만들어서, unstable 입증
*/

#include <stdio.h>
#include <stdlib.h>


// 요소 (정렬 대상)
struct element
{
    int num;
    char id;
};


// 함수 원형
void shell(struct element arr[], int num);
struct element* createArr(int num);
void printArr(struct element arr[], int num);


int main(void)
{
    int i, number;
    struct element *arr;

    puts("< Shell Sorting >");

    // 배열길이 입력
    printf("-> Input number of struct elements : ");
    scanf("%d", &number);

    // 배열 생성
    arr = createArr(number);

    // 셸 정렬
    puts("-> sorting assending order");
    shell(arr, number);

    // 값 출력
    printArr(arr, number);

    free(arr);
    return 0;
}

// shell정렬 함수
void shell(struct element arr[], int num)
{
    int i, j, h;

    // h 초기값 설정 (h만큼 떨어진 요소들 -> 그룹화, 사전 정렬)
    for (h = 1; h < num / 9; h = h * 3 + 1);

    // 정렬
    for (h; h > 0; h /= 3)
    {
        for (i = 0; i < num - h; i++)
        {
            struct element tmp = arr[i];

            for (j = 0; j < num && arr[j].num > tmp.num; j += h)
            {
                arr[j + h] = arr[j];
            }

            arr[j + h] = tmp;
        }
    }
}

// 배열 생성 함수 (struct element 배열 리턴)
struct element* createArr(int num)
{
    int i;
    struct element *arr;

    // struct element 배열 생성
    arr = calloc(num, sizeof(struct element));

    // 값 입력
    puts("-> Input value");

    for (i = 0; i < num; i++)
    {
        printf("arr[%2d] : ", i);
        scanf("%d", &arr[i].num);

        arr[i].id = 'a' + i;
    }

    return arr;
}


// 배열 출력 함수
void printArr(struct element arr[], int num)
{
    int i;

    for (i = 0; i < num; i++) {
        printf("arr[%2d] : %d ( %c )\n", i, arr[i].num, arr[i].id);
    }
}