//23.01.26 LJC
//bit field

#include <stdio.h>

typedef struct
{
	int age;
	unsigned sex:1; //1bit -> 0 or 1
	unsigned dringking:1;
	unsigned smoking:1;
	unsigned pressure:2;
} patient;

int main(void)
{
	patient p1 = {22, 0, 0, 0, 2};
	printf("age : %d\n", p1.age);
	printf("sex : %d\n", p1.sex);
	printf("dringking : %d\n", p1.dringking);
	printf("smoking : %d\n", p1.smoking);
	printf("pressure : %d\n", p1.pressure);
	
	return 0;
}
