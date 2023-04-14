#include <stdio.h> //string -> 2 dimention array / pointer array

int main(void)
{
	char nationArr[4][17] = {"Korea", "Brazil", "Germany", "Papua new guinea"}; //string -> 2 dimention array
	char* nationPtarr[] = {"Korea", "Brazil", "Germany", "Papua new guinea"}; //string -> pointer array
	
	printf("nationArr[2]: %s\n", nationArr[2]); //print by index -> same method
	printf("nationPtarr[2]: %s\n", nationPtarr[2]);
	
	printf("nationArr[2][3]: %c\n", nationArr[2][3]);
	printf("nationPtarr[2][3]: %c\n", nationPtarr[2][3]);
	
	return 0;
}
