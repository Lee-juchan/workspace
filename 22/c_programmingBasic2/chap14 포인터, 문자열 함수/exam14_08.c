#include <stdio.h> //string _ pointer & array

int main(void)
{
	char str1[] = "copy"; //string array ------ 마지막에 NULL이 항상 들어감 (문자열 끝남을 알려줌) 
	char* str2 = "text"; //string pointer
	
	printf("str1[1]: %c\n", str1[1]); //1th char -> index
	printf("*(str2+1): %c\n", *(str2+1)); // 1th char -> pointer operating
	
	printf("str1: %s\n", str1); //string
	printf("str2: %s\n", str2);
	
	return 0;
}
