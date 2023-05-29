#include <stdio.h> //file input(read) _ string / fgets()
#include <stdlib.h>

int main(void)
{
	char str[8]; //for str storage
	
	FILE *fp = fopen("fileInOut/worldcup.txt", "r");
	if(fp == NULL)
	{
		printf("file open error\n");
		exit(1);
	}
	
	while(!feof(fp))
	{
		fgets(str, 7, fp); //file input(read) / if ���� ���̸� 5�� �ϸ�, ���� ey������ �� �߰��� ��?? 
		printf("%s", str);
	}
	
	fclose(fp); //file close
	
	return 0;
}
