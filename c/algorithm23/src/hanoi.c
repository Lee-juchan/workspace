#include <stdio.h>

void move(int disk, char from, char to);

int main(void)
{
    int num;
    printf("Input the number of disks : ");
    scanf("%d", &num);

    move(num, 1, 3);

    return 0;
}

void move(int disk, char char, int to) // 기둥 1,2,3
{
    int tmp = 6 - from - to; // 임시 기둥

    if(disk > 0)
    {
        move(disk-1, from, tmp);
        printf("Disk[%d] : %d -> %d\n", disk, from, to);
        move(disk-1, tmp, to);
    }
}