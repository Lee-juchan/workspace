/*
    23.03.25 leejuchan

    @brief : fibonacci 수열

    @details : recursion | loop => 반복이 더 빠른 예
*/

#include <stdio.h>

int fibonacci_recursion(int n);
int fibonacci_loop(int n);

int main(void)
{
    printf("fibonacci_recursion(10) : %d\n", fibonacci_recursion(10));
    printf("fibonacci_loop(10) : %d\n", fibonacci_loop(10));

    return 0;
}

//recursion
int fibonacci_recursion(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fibonacci_recursion(n-2) + fibonacci_recursion(n-1); //n >= 2일때
}

//loop
int fibonacci_loop(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;


    int ppreNumber = 0;
    int preNumber = 1;
    int fibonacci;

    for(int i=0; i<n-1; i++) //n >= 2일때, n-1번 반복
    {
        fibonacci = ppreNumber + preNumber; //더하고 하나씩 앞으로 옮겨감
        ppreNumber = preNumber;
        preNumber = fibonacci;
    }
    
    return fibonacci;
}