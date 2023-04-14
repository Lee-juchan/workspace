/*
    23.03.25 leejuchan

    @brief : 프로그램 수행 시간 측정

    @details : clock() | time(NULL) 
*/

#include <stdio.h>
#include <time.h>

int main(void)
{
    //clock() 사용
    clock_t start, stop;
    double duration;

    start = clock(); //측정 시작    (clock => CLOCKS_PER_SEC단위로 시스템 시각 반환)

        for(int i=0; i<1000000000; i++) {}

    stop = clock(); //측정 종료

    duration = (double) (stop - start) / CLOCKS_PER_SEC; //소요시간 계산
    printf("duration : %lf\n\n", duration);



    /*******************************************************************/
    //time(NULL) 사용
    int start1, stop1;

    start1 = time(NULL); //측정 시작    (time(NULL) => 초 단위로 현재시간 반환)

        for(int i=0; i<1000000000; i++) {}
    
    stop1 = time(NULL); //측정 종료

    duration = (double) difftime(stop1, start1); //소요시간 계산    (difftime() => 초단위로 시간차이 반환)
    printf("duration : %lf\n", duration);

    return 0;
}