/*
    23.03.27 leejuchan

    @brief : 소수 구하기

    @details : 기존의 소수로 나눠서, 나눠떨어지지 않으면 = 소수
*/

#include <stdio.h>

#define MAX_NUMBERS 500000


//prototype
int *calc_primeNumber(int range);
void print_primeNumber(int *primeNumber);


//
int main(void)
{
    int *primeNumber = calc_primeNumber(MAX_NUMBERS);

    print_primeNumber(primeNumber);

    return 0;
}


//소수 구하는 함수 _ 소수 저장된 배열 반환
int *calc_primeNumber(int range)
{
    static int primeNumber[MAX_NUMBERS] = {0,}; // 소수 저장할 배열
    int index = 0;                              // 배열의 현재 인덱스

    primeNumber[index++] = 2; // 첫번째 소수=2 입력

    for(int number=3; number<=range; number++) // 3 ~ MAXNUM까지 조사
    {
        int dividingIndex;
        for(dividingIndex=0; dividingIndex<index; dividingIndex++) // 소수 배열 인덱스 끝까지 조사
        {
            if(number % primeNumber[dividingIndex] == 0) // 나눠지면 소수 탈락 (break)
            {
                break;
            }
        }
        if(dividingIndex == index) // 끝까지 남으면 소수
        {
            primeNumber[index++] = number; // 소수 저장 배열에 추가
        }
    }

    return primeNumber;
}


// 소수 출력 함수
void print_primeNumber(int *primeNumber)
{
    int index = 0;
    while(primeNumber[index] != 0) // 배열 항이 0이 될때까지 (저장된 범위를 넘으면 0나옴)
    {
        printf("%d ", primeNumber[index++]);
    }
}