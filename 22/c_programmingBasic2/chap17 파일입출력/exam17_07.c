#include <stdio.h> //file output(write) _ fomat / + using structure
#include <stdlib.h>

typedef struct //struct definition
{
	char name[8];
	int score;
} worldcup;

int main(void)
{
	worldcup teamF[4] = {{"Sweden", 5}, {"Mexico", 3}, {"Korea", 3}, {"Germany", 2}}; //struct initialization
	
	FILE *fp = fopen("fileInOut/2018cup.txt", "w"); //file open (write mode)
	if(fp == NULL)
	{
		printf("file open error\n");
		exit(1);
	}
	
	for(int i=0; i<4; i++)
	{
		printf("%s %d\n", teamF[i].name, teamF[i].score); //stdout
		fprintf(fp, "%s %d\n", teamF[i].name, teamF[i].score); //file output(write)
	}
	
	fclose(fp); //file close
	
	return 0;
 } 
