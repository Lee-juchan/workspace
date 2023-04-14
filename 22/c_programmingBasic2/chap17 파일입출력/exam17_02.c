#include <stdio.h> //file input(read) _ char / fgetc()
#include <stdlib.h>

int main(void)
{
	char ch;
	FILE *fp;
	
	fp = fopen("fileInOut/chr.txt", "r"); //file open (read mode)
	if(fp == NULL) //exception
	{
		printf("file open error\n");
		exit(1);
	}
	
	while((ch = fgetc(fp)) != EOF) //file input(read)
	{
		printf("%c", ch); //stdout
	}
	
	fclose(fp); //file close
	
	return 0;
}
