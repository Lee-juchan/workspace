#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[10];
    int height;
    int weight;
} Person;

// name 비교 함수 (오름차순)
int npcmp (const Person *x, const Person *y)
{
    return strcmp(x->name, y->name);
}

// height 비교 함수 (오름차순)
int hpcmp (const Person *x, const Person *y)
{
    return (x->height < y->height) ? -1 : 
          (x->height > y->height) ? 1 : 0;
}

// weight 비교 함수 (내림차순)
int wpcmp (const Person *x, const Person *y)
{
    return (x->weight < y->weight) ? 1 : 
          (x->weight > y->weight) ? -1 : 0;
}

// Person배열 출력 함수
void printPerson (const Person x[], int no)
{
    int i;
    for(i = 0; i < no; i++)
    {
        printf("%-10s %dcm %dkg\n", x[i].name, x[i].height, x[i].weight);
    }
}

int main(void)
{
    Person x[] = {
        {"sunmi", 170, 50},
        {"yoobin", 170, 50},
        {"sohee", 170, 50},
        {"jina", 164, 50},
        {"jina", 165, 53},
        {"jina", 166, 55},
        {"jina", 167, 45}
    };

    int nx = sizeof(x) / sizeof(x[0]);

    puts("정렬 전");
    printPerson(x, nx);


    // 이름 오름차순
    qsort(x, nx, sizeof(Person), (int(*)(const void *, const *)) npcmp);
    puts("\n이름 오름차순으로 정렬 후");
    printPerson(x, nx);

    // 키 오름차순
    qsort(x, nx, sizeof(Person), (int(*)(const void *, const void *))hpcmp);
    puts("\n키 오름차순으로 정렬 후");
    printPerson(x, nx);

    // 몸무게 내림차순
    qsort(x, nx, sizeof(Person), (int(*)(const void *, const void *))wpcmp);
    puts("\n몸무게 내림차순으로 정렬 후");
    printPerson(x, nx);

    return 0;
}