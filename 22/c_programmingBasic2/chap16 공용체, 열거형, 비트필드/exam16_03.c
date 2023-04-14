//23.01.26 LJC
//enum

#include <stdio.h>

enum week
{
	sun, mon, tue, wed, thu, fri, sat
};

int main(void)
{
	enum week day1;
	
	day1 = fri;
	printf("day1: %d\n", day1);
	printf("fri: %d\n\n", fri);
	
	day1 = mon;
	printf("day1: %d\n", mon);
	printf("fri: %d\n", mon);
	
	return 0;
}
