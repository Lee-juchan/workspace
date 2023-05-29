#include <stdio.h>
#define LENGTH 64

int* str_chr (const char *s, int c)
{
    c = (char) c;
    int tmp[LENGTH]; // 일치하는 문자들의 인덱스 저장
    int tmpIdx = 0;
    int sIdx = 0;

    while(s[sIdx++]) {
        if(s[sIdx] == c)
        {
            tmp[tmpIdx++] = sIdx;
        }
    }
    tmp[tmpIdx] = '\0';

    return tmp;
}

int main(void)
{
    int result[64] = {-1, };

    printf("%d", result[5]);
}