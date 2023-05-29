#include <stdio.h> //file input output (read, write) _ keyborad / scanf(), fprintf()
#include <stdlib.h>

#define filename "fileInOut/grade01.txt"

int main(void)
{
	char name[10]; //data
	int score;
	
	FILE *fp;
	if ((fp = fopen(filename, "w")) == NULL) //file open (write mode) + exception
	{
		printf("file open error\n");
		exit(1);
	}
	
	printf("Enter name, score: \n");
	for(int i=0; i<3; i++)
	{
		scanf("%s %d", name, &score); //stdin
		fprintf(fp, "%s %d\n", name, score); //file output(write)
		
		fflush(stdin); //buffer initialization / 없어도 상관없던데?? 
	}
	
	fclose(fp);
	
	return 0;
}
