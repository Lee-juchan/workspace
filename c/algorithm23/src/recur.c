#include <stdio.h>

void recur(int n);
void recur_nr1(int n);

int main(void) {
    
    int num;
    printf("Input Integer : ");
    scanf("%d", &num);

    recur(num);
    // puts("----------------------------");
    // recur_nr1(num);

    return 0;
}

void recur(int n)
{
    printf("s : %d\n", n);

    if (n > 0)
    {
        recur(n - 1);
        printf("recur : %d\n", n);
        recur(n - 2);
    }

    printf("e : %d\n", n);
}

void recur_nr1(int n)
{
    printf("s : %d\n", n);

    Top : 
    if (n > 0)
    {
        recur(n - 1);
        printf("recur : %d\n", n);
        n = n - 2;
        goto Top;
    }

    printf("e : %d\n", n);
}