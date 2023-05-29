#include <stdio.h> //bfile output(write) + function <practice 17.4>
#include <stdlib.h>

typedef struct
{
	char nation[10];
	int win;
	int drw;
	int los;
} worldcup;

void bfileWrite(worldcup *data);

int main(void)
{
	worldcup teamD[4] = {{"Korea", 2, 1, 0}, {"America", 1, 1, 1}, {"Portugal", 1, 0, 2}, {"poland", 1, 0, 2}};
	
	bfileWrite(teamD);
	
	return 0;
}

void bfileWrite(worldcup *data) //fp, data => block size, block num
{
	FILE *fp = fopen("fileInOut/teamD.bin", "wb");
	if(fp == NULL)
	{
		printf("file open error\n");
		exit(1);
	}
	
	int writeBlockNum = fwrite(data, sizeof(data), 4, fp); //bfile 
	if(writeBlockNum != 4)
	{
		printf("file write error\n");
		exit(1);
	}
	
	printf("nation    win draw lose\n"); //stdout
	for(int i=0; i<4; i++)
	{
		printf("%-8s %3d %3d %3d\n", data[i].nation, data[i].win, data[i].drw, data[i].los);
	}
	
	fclose(fp); //file close

	_getch();
	
	return 0;
}
