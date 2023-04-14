/*
    23.03.26 leejuchan

    @brief : polynomial다항식 구현

    @details : 0이 아닌의 항만 배열에 저장  ex) 2X^3 + 2
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_TERMS 10


// 다항식 구조체
typedef struct
{
    int expon; // exponent 지수(=차수)
    int coef; // coefficient 계수
} polynomial;


// prototype
polynomial *add_polynomial(polynomial *a, polynomial *b);
void print_polynomial(polynomial *poly);


//
int main(void)
{
    polynomial poly1[MAX_TERMS] = {{4,8}, {1,7}, {0,1}}; // 다항식 생성 = 구조체 배열
    polynomial poly2[MAX_TERMS] = {{3,10}, {2,3}, {0,1}};
    polynomial *result;

    result = add_polynomial(poly1, poly2); //다항식 연산

    print_polynomial(result); //결과 출력 4 8 / 3 10 / 2 3 / 1 7 / 0 2

    free(result); //함수내 지역변수(포인터)에 동적할당 -> result에 주소 리턴 => 지역변수는 함수끝나고 사라짐, result를 free 하는거 맞겠지???
    return 0;
}


//다항식 덧셈 함수
polynomial *add_polynomial(polynomial *a, polynomial *b) // 매개변수, 반환형 = 배열 포인터
{
    polynomial *c = (polynomial*)malloc(sizeof(polynomial)*MAX_TERMS); // 결과 저장할 다항식 => 동적할당
    
    int aIndex = 0; //현재 처리중인 인덱스
    int bIndex = 0;
    int cIndex = 0;

    while(a[aIndex].coef != 0 || b[bIndex].coef != 0) //계수가 모두 0이 되면 종료 (다항식 배열 넘어가면 0 나옴)
    {
        if(a[aIndex].expon > b[bIndex].expon) // 현재 차수 a > b
        {
            c[cIndex].expon = a[aIndex].expon;
            c[cIndex++].coef = a[aIndex++].coef;
        }
        else if(a[aIndex].expon < b[bIndex].expon) // 현재 차수 a < b
        {
            c[cIndex].expon = b[bIndex].expon;
            c[cIndex++].coef = b[bIndex++].coef;
        }
        else                                       // 현재 차수 a == b
        {
            if((a[aIndex].coef + b[bIndex].coef) == 0) //계수합이 0이면 저장안함
            {
                aIndex++;
                bIndex++;

                continue;
            }

            c[cIndex].expon = a[aIndex].expon;
            c[cIndex++].coef = a[aIndex++].coef + b[bIndex++].coef;
        }
    }

    return c;
}


//다항식 출력 함수
void print_polynomial(polynomial *poly)
{
    int index = 0;

    while(poly[index].coef != 0) //계수가 0이 되면 중지
    {
        printf("%dX^%d + ", poly[index].coef, poly[index].expon);
        index++;

        if(poly[index].expon == 0) //상수항 따로 출력
        {
            break;
        }
    }
    printf("%d\n", poly[index].coef);
}