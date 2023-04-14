#include <stdio.h> //file output(write) _ fomat / fprintf()
#include <stdlib.h>

int main(void)
{
	const char *team[4] = {"Sweden", "Mexico", "Korea", "Germany"}; //data
	int score[4] = {5, 3, 3, 2};
	
	FILE *fp = fopen("fileInOut/2018cup.txt", "w"); //file open (write mode)
	if(fp == NULL)
	{
		printf("file open error\n");
		exit(1);
	}
	
	for(int i=0; i<4; i++)
	{
		printf("%s %d\n", team[i], score[i]); //stdout
		fprintf(fp, "%s %d\n", team[i], score[i]); //file output(write)
	}
	
	fclose(fp); //file close
	
	return 0;
 } 
