/*
    23.03.25 leejuchan

    @brief : hanoiTower 시뮬레이션

    @details : hanoi(n) => hanoi(n-1) + disk n + hanoi(n-1) 
*/

#include <stdio.h>

int hanoi(int diskCount, char fromRod, char toRod);

int main(void)
{
    hanoi(5,'a','c');

    return 0;
}

int hanoi(int diskCount, char fromRod, char toRod) //rod -> a, b, c
{
    char tmpRod = 'a'+'b'+'c' - fromRod - toRod; //tmpRod => a,b,c중에 남는 것

    if(diskCount == 1)
    {
        printf("Disk 1 : %c -> %c\n", fromRod, toRod);
    }
    else
    {
        hanoi(diskCount-1, fromRod, tmpRod); //disk n-1개를 tmp으로
        printf("Disk %d : %c -> %c\n", diskCount, fromRod, toRod); //마지막 disk를 to로 
        hanoi(diskCount-1, tmpRod, toRod); //tmp의 disk n-1개를 to로
    }
}