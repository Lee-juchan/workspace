#include <stdio.h> //file input(read) _ string / fgets()
#include <stdlib.h>

int main(void)
{
	char str[8]; //for str storage
	
	FILE *fp = fopen("fileInOut/worldcup.txt", "r");
	if(fp == NULL)
	{
		printf("file open error\n");
		exit(1);
	}
	
	while(!feof(fp))
	{
		fgets(str, 7, fp); //file input(read) / if 문자 길이를 5로 하면, 끝에 ey한줄이 더 추가됨 왜?? 
		printf("%s", str);
	}
	
	fclose(fp); //file close
	
	return 0;
}
