#include <stdio.h> //file output(write) _ string / fputs()
#include <stdlib.h>

int main(void)
{
	FILE *fp = fopen("fileInOut/worldcup.txt", "w"); //file open (write mode)
	if(fp == NULL)
	{
		printf("file open error\n");
		exit(1);
	}
	
	fputs("Korea\n", fp); //file output(write)
	fputs("Germany\n", fp);
	fputs("Brasil\n", fp);
	fputs("Turkey\n", fp);
	
	fclose(fp); //file close
	
	return 0;
}
