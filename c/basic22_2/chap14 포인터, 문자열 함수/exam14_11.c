#include <stdio.h> //call by Value / call by Reference

void swapVal(int av, int bv);
void swapRef(int* ap, int *bp);

int main(void)
{
	int a = 10;
	int b = 5;
	
	swapVal(a, b); //input value
	printf("main a=%d, b=%d\n\n", a, b); //main change x
	
	swapRef(&a, &b); //input adress
	printf("main a=%d, b=%d\n\n", a, b); //main change o
}

void swapVal(int av, int bv) //call by Value
{
	int temp;
	temp = av;
	av = bv;
	bv = temp;
	printf("swapVal a=%d, b=%d\n", av, bv);
}
void swapRef(int* ap, int *bp) //call by Reference
{
	int temp;
	temp = *ap;
	*ap = *bp;
	*bp = temp;
	printf("swapRef a=%d, b=%d\n", *ap, *bp);
}
