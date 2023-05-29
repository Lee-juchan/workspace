#include <stdio.h> //binary file output(write) / fwrite()
#include <stdlib.h>

typedef struct
{
	char nation[10];
	int win;
	int drw;
	int los;
} worldcup;

int main(void)
{
	worldcup teamD[4] = {{"Korea", 2, 1, 0}, {"America", 1, 1, 1}, {"Portugal", 1, 0, 2}, {"poland", 1, 0, 2}}; //struct initialization
	
	FILE *fp = fopen("fileInOut/teamD.bin", "wb"); //binary file open (write mode)
	if(fp == NULL)
	{
		printf("file open error\n");
		exit(1);
	}
	
	if(fwrite(teamD, sizeof(worldcup), 4, fp) != 4) //binary file output(write) + exception
	{
		printf("file write error\n");
		exit(1);
	}
	
	printf("nation    win draw lose\n"); //stdout
	for(int i=0; i<4; i++)
	{
		printf("%-8s %3d %3d %3d\n", teamD[i].nation, teamD[i].win, teamD[i].drw, teamD[i].los);
	}
	
	fclose(fp); //file close
	
	return 0;
}
