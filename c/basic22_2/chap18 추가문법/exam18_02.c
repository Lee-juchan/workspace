//23.01.28 LJC
//동적할당

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *ptr;
	int size;
	
	printf("lenth of Sting: ");
	scanf("%d", &size);
	
	ptr = (char*)malloc(size + 1);
	
	printf("String: ");
	scanf("%s", ptr);
	
	printf("inputed String = %s\n", ptr);
	
	free(ptr);
	return 0;
}
