#include <stdio.h> //struct _ parameter (call by value)

struct point increse(struct point s);

struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point a, b, c;
	
	a.x = 1; a.y = 1; // a = (1,1)
	b = a; //b = a = (1,1)
	printf("a = (%d, %d)\n", a.x, a.y);
	printf("b = (%d, %d)\n\n", b.x, b.y);
	
	c = increse(a); //c = (2,2) / a = (1,1) call by value = copy
	
	printf("a = (%d, %d)\n", a.x, a.y);
	printf("b = (%d, %d)\n", b.x, b.y);
	printf("c = (%d, %d)\n\n", c.x, c.y);
}

struct point increse(struct point s) //struct -> return type, parameter
{
	s.x++;
	s.y++;
	
	return s; //return struct
}
