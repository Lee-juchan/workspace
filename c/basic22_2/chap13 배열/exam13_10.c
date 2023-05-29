#include <stdio.h> //2 dimention array _ string

int main(void)
{
	char nation[3][20]; //KR 1 char = 2byte = 2room
	
	for(int i=0; i<3; i++) //input name
	{
		printf("input 3 nation name: ");
		gets(nation[i]); //but nation[3][20] ??????
	}
	printf("\n");
	
	for(int i=3; i>0; i--) //print name
	{
		puts(nation[3-i]);
	}
	printf("\n");
	
	return 0;
}
