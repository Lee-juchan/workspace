#include <stdio.h>
#include <stdlib.h>

// 이렇게 구조체로 sorting해서 unstable 입증
typedef struct {
    int name;
    int num;
} element;

void shell(int arr[], int num) {
    int i, j, h;

    for(h = 1; h < num/9; h = h*3 + 1);
    printf("h : %d\n", h);

    for(; h > 0; h /= 3) {
        for(i = h; i<num; i++) {
            int tmp = arr[i];
            for (j = i-h; j >= 0 && arr[j] > tmp; j-= h)  {
                arr[j+h] = arr[j];
            }
            arr[j+h] = tmp;
        }
        
    }
}

int main(void) {
    int i, number;
    int *array;

    // 배열길이 입력 -> 배열 생성
    puts("-> shell sorting");
    printf("Input number of elements : ");
    scanf("%d", &number);
    array = calloc(number, sizeof(int));

    // 값 입력
    for (i=0; i<number; i++) {
        printf("array[%d] : ", i);
        scanf("%d", &array[i]);
    }

    // 셸 정렬
    shell(array, number);

    // 값 출력
    puts("-> sorting assending order");
    for (i=0; i<number; i++) {
        printf("array[%d] : %d\n", i, array[i]);
    }
    free(array);

    return 0;
}