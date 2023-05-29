#include <stdio.h> //binary file output(read) / fread() 
#include <stdlib.h>

typedef struct //structure (= block)
{
	char nation[10];
	int win;
	int drw;
	int los;
} worldcup;

int main(void)
{
	worldcup teamD[4]; //blank struct <- fread
	
	FILE *fp = fopen("fileInOut/teamD.bin", "rb"); //binary file open (read mode)
	if(fp == NULL) //exception
	{
		printf("file open error\n");
		exit(1);
	}
	
	int readBlock = fread(teamD, sizeof(worldcup), 4, fp); //binary file output(read)
	if(readBlock != 4) //exception
	{
		printf("file read error\n");
	}
	
	for(int i=0; i<4; i++)
	{
		printf("%-8s %3d %3d %3d\n", teamD[i].nation, teamD[i].win, teamD[i].drw, teamD[i].los);
	}
	
	fclose(fp); //file close
	
	return 0;
}
