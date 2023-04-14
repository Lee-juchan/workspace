#include <stdio.h> //char KR & EN / scanf() -> blank x 

int main(void)
{
	char nameEn[10]; //EN = 1byte per one character
	char nameKr[10]; //KR = 2byte per one character
	
	printf("input EN name: "); //input name by scanf()
	scanf("%s", nameEn);
	printf("input KR name: ");
	scanf("%s", nameKr);
	
	printf("EN: %s\n", nameEn); //print name
	printf("KR: %s\n", nameKr);
	
	return 0;
}
