/*
    23.03.27 leejuchan

    @brief : 소수 구하기

    @details : 기존의 모든 숫자로 나눠서, 나눠 떨어지지 않으면 = 소수
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

    for(int number=2; number<=range; number++) // 2 ~ n ~ MAXNUM까지 조사
    {
        int dividingNumber;
        for(dividingNumber=2; dividingNumber<number; dividingNumber++) //나누는 수: 2 ~ n
        {
            if(number % dividingNumber == 0) // 나눠지면 소수 탈락 (break)
            {
                break;
            }
        }
        if(number == dividingNumber) // 끝까지 남으면 소수
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