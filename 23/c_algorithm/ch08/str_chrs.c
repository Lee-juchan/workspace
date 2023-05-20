/*
    #assignment / 23.05.16 leejuchan

    @brief : 문자열에서 특정 문자의 인덱스 모두 찾기
    @details : str_chr (하나의 인덱스만) 수정
               배열에 모든 인덱스 담아서 배열 주소반환
               *** 함수 종료 후에도 값이 남아 있으려면, 배열은 static이여야 함
*/

#include <stdio.h>

#define MAX_LENGTH 20

int *str_chr(const char *s, int c)
{
    int static result[MAX_LENGTH] = {-1, }; // 결과(=일치하는 문자의 인덱스) 저장
    int rIdx = 0;
    int sIdx = 0;
    c = (char)c;    

    while (s[sIdx])
    {
        if (s[sIdx] == c)
            result[rIdx++] = sIdx;
        sIdx++;
    }
    result[rIdx] = -1; // 끝났다는 표시

    return result;
}

int main(void)
{
    char str[MAX_LENGTH]; // 전체 문자열
    char tmp[MAX_LENGTH]; // 검색할 문자 (임시)
    int ch;
    int *idxs; 

    // 문자열 입력
    printf("String : ");
    scanf("%s", str);

    // 검색할 문자 입력
    printf("Searching ch: ");
    scanf("%s", tmp);
    ch = tmp[0];

    // 검색 함수 실행
    idxs = str_chr(str, ch);

    // 결과 출력
    if (idxs[0] == -1)
    {
        printf("'%c' does't exist\n", ch);
    }
    else
    {
        printf("-> '%c' exist in ", ch);
        for (int i = 0; idxs[i] != -1; i++)
        {
            printf("%dth, ", idxs[i] + 1);
        }
    }

    return 0;
}