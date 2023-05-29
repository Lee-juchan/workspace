#include <stdio.h> //bfile read(input) <prctice 17.6>
#include <stdlib.h>

typedef struct //struct
{
	char name[10];
	char phone[15];
	int birthMonth;
} friends;

int main(void)
{
	friends data[5]; //struct create
	
	FILE *fp = fopen("fileInOut/friends.bin", "rb"); //file open (read mode)
	if(fp == NULL)
	{
		printf("file open error\n");
		exit(1);
	}
	
	if(fread(data, sizeof(friends), 5, fp) != 5) //file input(read)
	{
		printf("file read error\n");
		exit(1);
	}
	
	printf("name\tphone  brith\n"); //stdout _ print to screen
	for(int i=0; i<5; i++)
	{
		printf("%s %s %2d\n", data[i].name, data[i].phone, data[i].birthMonth);
	}
	
	fclose(fp); //file close
	
	_getch();

	return 0;
}
