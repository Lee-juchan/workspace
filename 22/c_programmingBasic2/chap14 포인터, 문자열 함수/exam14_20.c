#include <stdio.h> //string library _ strcmp(), strncmp() / string compare
#include <string.h>

int main(void)
{
	char *str1 = "republic of Korea"; //string 
	char *str2 = "republic of China";
	int cmp; //compare value
	
	cmp = strcmp(str1, str2); //compare all
	compareResult(cmp);
	
	cmp = strncmp(str1, str2, 12); //compare 12num string
	compareResult(cmp);
	
	return 0;
}
void compareResult(int compareValue) //decide same or diff by compareValue
{
	if(compareValue == 0)
	{
		printf("same string\n");
	}
	else
	{
		printf("different string\n");
	}
}
