/*
    23.03.25 leejuchan

    @brief : polynomial다항식 구현

    @details : 모든 차수의 항을 배열에 저장  ex) 2X^3 + 0X^2 + 0X + 2
*/

#include <stdio.h>

#define MAX_DEGREE 10


// 다항식 구조체
typedef struct
{
    int degree; // 차수 degree
    int coef[MAX_DEGREE]; // 계수 coefficient
} polynomial;


// protorype
polynomial add_polynomial(polynomial poly1, polynomial poly2);
void print_polynomial(polynomial poly);


//
int main(void)
{
    polynomial poly1 = {5, {3,6,0,0,0,10}}; // 다항식 생성 = 구조체
    polynomial poly2 = {4, {7,0,5,0,1}};
    polynomial result;

    result = add_polynomial(poly1, poly2); // 덧셈 연산

    print_polynomial(result); // 결과 다항식 출력

    return 0;
}


// 다항식 덧셈 함수
polynomial add_polynomial(polynomial a, polynomial b)
{
    polynomial c; // 결과 저장할 다항식

    int aIndex = 0; // 현재 처리중인 인덱스
    int bIndex = 0;
    int cIndex = 0;

    int aDegree = a.degree; // 현재 처리중인 차수
    int bDegree = b.degree;

    // degree 결정
    c.degree = (a.degree > b.degree) ? a.degree : b.degree; // 두 다항식 중 큰 차수로 설정

    //coefficient 결정
    while(cIndex <= c.degree) // result 다항식의 모든항을 입력할 때까지
    {
        if(aDegree > bDegree)
        {
            c.coef[cIndex++] = a.coef[aIndex++]; // 현재 차수 a > b  => a항 입력 + 인덱스 이동
            aDegree--;
        }
        else if(aDegree < bDegree)
        {
            c.coef[cIndex++] = b.coef[bIndex++]; // 현재 차수 a < b  => b항 입력 + 인덱스 이동
            bDegree--;
        }
        else // aDegree == bDegree
        {
            c.coef[cIndex++] = a.coef[aIndex++] + b.coef[bIndex++]; // 현재 차수 a = b  => a+b항 입력 + 인덱스 이동
            aDegree--;
            bDegree--;
        }
    }

    return c;
}


// 다항식 출력 함수
void print_polynomial(polynomial poly)
{
    for(int i=poly.degree; i>0; i--) // 최고차~1차 출력
    {
        printf("%dX^%d + ", poly.coef[poly.degree - i], i);
    }
    printf("%d\n", poly.coef[poly.degree]); // 상수항 출력
}