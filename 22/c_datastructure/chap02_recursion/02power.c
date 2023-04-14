/*
    23.03.25 leejuchan

    @brief : 거듭제곱 함수

    @details : 재귀recursion | 반복loop => 재귀가 더 빠른 예
*/

#include <stdio.h>

int power_recursion(int base, int exponent);
int power_loop(int base, int exponent);

int main(void)
{
    printf("power_recursion(3,4) : %d\n", power_recursion(3,4));
    printf("power_loop(3,4) : %d\n", power_loop(3,4));

    return 0;
}

//recursion
int power_recursion(int base, int exponent)
{
    if(exponent == 0) //지수가 0일때
    {
        return 1;
    }
    
    if(exponent % 2 == 0) //지수가 짝수일때
    {
        return power_recursion(base*base, exponent/2); //ex) 3^14 => 9^7
    }
    else //지수가 홀수일때
    {
        return base * power_recursion(base*base, (exponent-1)/2); //ex) 9^7 => 9*9^6 => 9*81^3
    }
}//3^1

//loop
int power_loop(int base, int exponent)
{
    int power = 1;

    for(int i=0; i<exponent; i++) //지수exponent횟수만큼 밑base곱하기
    {
        power *= base;
    }

    return power;
}