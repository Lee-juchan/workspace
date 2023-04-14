// 23.01.26 Ljc
// union

#include <stdio.h>
#include <string.h>

typedef union
{
	char c1;
	char c2[3];
} Uchar;

int main(void)
{
	Uchar data;
	
	strcpy(data.c2, "AB");
	printf("data.c1: %c\n", data.c1);
	printf("data.c2: %s\n\n", data.c2);
	
	data.c1 = 'X';
	printf("data.c1: %c\n", data.c1);
	printf("data.c2: %s\n", data.c2);
	
	return 0;
}
