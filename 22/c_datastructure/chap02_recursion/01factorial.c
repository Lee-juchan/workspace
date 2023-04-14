/*
    23.03.25 leejuchan

    @brief : factorial 함수

    @details : 재귀 recursion | 반복loop
*/

#include <stdio.h>

int factorial_recursion(int n);
int factorial_loop(int n);

int main(void)
{
    printf("factorial_recursion(5) : %d\n", factorial_recursion(5));
    printf("factorial_loop(5) : %d", factorial_loop(5));
}


//재귀 함수
int factorial_recursion(int n)
{
    if(n == 1) 
    {
        return 1;
    }
    else
    {
        return n * factorial_recursion(n-1);
    }
}

//반복 함수
int factorial_loop(int n)
{
    int factorial = 1;

    for(int i=n; i>1; i--)
    {
        factorial *= i;
    }

    return factorial;
}