#include <stdio.h> //dynamic allocation _ array
#include <stdlib.h>

int main(void)
{
	int *dynamicArray = (int*)malloc(sizeof(int)*4); //malloc() -> 4 room array
	
	dynamicArray[0] = 100;
	dynamicArray[1] = 200;
	dynamicArray[2] = 300;
	dynamicArray[3] = 400;
	
	for(int i=0; i<4; i++)
	{
		printf("dynamicArray[%d] = %d\n", i, dynamicArray[i]);
	}
	
	free(dynamicArray);
	
	return 0;
}
