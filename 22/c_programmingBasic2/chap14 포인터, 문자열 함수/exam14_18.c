#include <stdio.h> //string library _ strtod(), strtol(), strtoul()
#include <stdlib.h>

int main(void)
{
	char *strDouble = "12.34"; //variable initializaion
	char *strLong = "-1234";
	char *strUnsignedLong = "123";
	
	char *endptr; //stored unchanged number;
	
	double numD;
	long numL;
	unsigned long numUL;
	
	numD = strtod(strDouble, endptr);
	numL = strtol(strLong, endptr, 10); //decimal
	numUL = strtoul(strUnsignedLong, endptr, 16); //hexadecimal
	
	printf("strDouble: %s, double: %lf\n", strDouble, numD); //print
	printf("strLong: %s, long: %ld\n", strLong, numL);
//	printf("strULong: %s, unsigned long: %ld\n", strUnsignedLong, numUL); //errorrrrr?
	
	return 0;
}
