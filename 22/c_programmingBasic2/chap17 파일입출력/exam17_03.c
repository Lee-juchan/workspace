#include <stdio.h> //file input(read) _ char / fgetc() + feof
#include <stdlib.h>

int main(void)
{
	char ch;
	FILE *fp = fopen("fileInOut/chr.txt", "r"); //file open (read mode)
	if(fp == NULL)
	{
		printf("file open error\n");
		exit(1);
	}
	
	while(!feof(fp)) //until fp != end of file
	{
		ch = fgetc(fp); //file input(read)
		printf("%c", ch); //stdout _ screen print
	}
	
	fclose(fp); //file close
	
	return 0;
}
