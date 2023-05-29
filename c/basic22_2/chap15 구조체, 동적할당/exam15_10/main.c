#include <stdio.h> //struct _ dynamic struct, arrow operator, nested struct
#include <math.h>
#include "struct.h"

int main(void)
{
	struct rectangle *rec; //struct pointer
	int width, height;
	
	rec = (struct rectangle*)malloc(sizeof(struct rectangle)); //dynamic struct
	if (rec == NULL) //exception
	{
		printf("No more memory.\n");
		exit(1);
	}
	
	printf("Enter x, y of top left: ");
	scanf("%d%d", &(rec->topLeft).x, &(rec->topLeft).y); //enter member data / ->(pointer), .(nomal variable)
	printf("Enter x, y of bottom right: ");
	scanf("%d%d", &(rec->bottomRight).x, &(rec->bottomRight).y);
	
	width = abs((rec->bottomRight).x - (rec->topLeft).x);
	height = abs((rec->topLeft).y - (rec->bottomRight).y);
	
	printf("the area of rectangle: %d\n", width * height);
	
	return 0;
}
