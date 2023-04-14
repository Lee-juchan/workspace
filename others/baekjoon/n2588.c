#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() { //¼¼ÀÚ¸®¼ö °ö¼À ¼¼·Î¼À Ãâ·Â
    
    typedef struct number {
        int total;
        int hun;
        int ten;
        int one;
    } NUM;

    NUM num1, num2;
    int multiHun, multiTen, multiOne;

    scanf("%d %d", &num1.total, &num2.total);
    num1.hun = num1.total / 100;
    num1.ten = (num1.total - num1.hun * 100) / 10;
    num1.one = num1.total - num1.hun * 100 - num1.ten * 10;

    num2.hun = num2.total / 100;
    num2.ten = (num2.total - num2.hun * 100) / 10;
    num2.one = num2.total - num2.hun * 100 - num2.ten * 10;

    multiOne = num1.total * num2.one;
    multiTen = num1.total * num2.ten;
    multiHun = num1.total * num2.hun;
    
    printf("---result---\n\n");
    printf("%6d\n%6d\n", num1.total, num2.total);
    printf("-----------\n");
    printf("%6d\n%5d\n%4d\n", multiOne, multiTen, multiHun);
    printf("-----------\n");
    printf("%6d\n", multiOne + multiTen * 10 + multiHun * 100);

    return 0;
}