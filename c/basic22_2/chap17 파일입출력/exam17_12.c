#include <stdio.h> // bfile write(output) <practice 17.5>
#include <stdlib.h>

typedef struct //struct
{
	char name[10];
	char phone[15];
	int birthMonth;
} friends;

int main(void)
{
	friends data[5] = {{"ljc", "010-111-111", 3}, {"lsb", "010-222-222", 2}, 
					{"lms", "010-333-333", 1}, {"kej", "010-444-444", 12}, {"jjh", "010-555-555", 7}}; //struct initialization
	
	FILE *fp = fopen("fileInOut/friends.bin", "wb"); //file open (write mode)
	if(fp == NULL)
	{
		printf("file open error\n");
		exit(1);
	}
	
	if(fwrite(data, sizeof(friends), 5, fp) != 5) //file output(write)
	{
		printf("file wirte err");
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
