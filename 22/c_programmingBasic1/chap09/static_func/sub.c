#include <stdio.h>

static void f1()
{
	printf("f1() is called\n");
}

void f2()
{
	f1();
	printf("f2() is called\n");
}