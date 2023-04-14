#include <stdio.h> //file output(write) _ char / fputc()
#include <stdlib.h>

int main(void)
{
	FILE *fp; //file pointer
	char ch;
	
	fp = fopen("fileInOut/chr.txt", "w"); //file open (write mode)
	if(fp == NULL) //exception
	{
		printf("file open err\n");
		exit(1);
	}
	
	printf("print until Enter\n");
	
	printf("input char: ");
	while((ch = getchar()) != '\n' ) //input_stdin
	{
		printf("%c", ch); //output_stdout
		fputc(ch, fp); //file output(write)
	}
	
	fclose(fp); //file close
	
	return 0;
}
