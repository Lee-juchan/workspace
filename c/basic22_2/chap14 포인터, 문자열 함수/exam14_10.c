#include <stdio.h> //string -> pointer array _ input, print

int main(void)
{
	char* nameEN[] = {"Lee juchan", "Kim changsu"}; //string -> input pointer array
	char* nameKR[] = {"이주찬", "김창수"};
	
	for(int i=0; i<2; i++)
	{
		printf("KR: %s, EN: %s\n", nameKR[i], nameEN[i]);
	}
	
	return 0;
}
