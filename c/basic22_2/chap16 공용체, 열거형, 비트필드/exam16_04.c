//23.01.26 LJC
//enum _초기값 설정 

#include <stdio.h>

enum prod
{
	engine=3, battery, filter, fuse
};

int main(void)
{
	enum prod p1;
	
	p1 = battery;
	printf("number of device: %d\n", p1);
	printf("number of battery: %d\n", engine);
	
	p1 = fuse;
	printf("number of device: %d\n", p1);
	
	return 0;
}
