#include <stdio.h>

void print(void);
void set(int i);

int flag[8];
int pos[8];

int cnt = 0;

int main(void)
{
    set(0);

    printf("%li", cnt);

    return 0;
}

void print(void)
{
    cnt++;
    for (int i=0; i<8; i++)
    {
        printf("%2d", pos[i]);
    }
    putchar('\n');
}

void set(int i)
{
    for(int j=0; j<8; j++)
    {
        if(!flag[j])
        {
            pos[i] = j;
            if (i == 7)
            {
                print();
            }
            else
            {
                flag[j] = 1;
                set(i+1);
                flag[j] = 0;
            }
        }
        
    }
}