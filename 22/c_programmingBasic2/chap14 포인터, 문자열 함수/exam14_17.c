#include <stdio.h>
#include <stdlib.h> // string library _ itoa(), ltoa() /int to ascii

int main(void)
{
	int num1 = 123;
	long num2 = 1234;
	
	char string[20]; //inputed
	char *sp; //returned
	
	sp = itoa(num1, string, 10); //num1 -> string (by decimal)
	printf("intNum1: %d, strNum1: %s\n", num1, string);
	
	sp = itoa(num1, string, 2); //num1 -> string (by binary)
	printf("intNum1: %d, strNum1: %s\n\n", num1, string);
	
	
	sp = ltoa(num2, string, 10); //decimal
	printf("longNum2: %d, strNum2: %s\n", num2, string);
	
	sp = ltoa(num2, string, 16); //hexadecimal
	printf("longNum2: %d, strNum2: %s\n", num2, string);
	
	return 0;	
}
