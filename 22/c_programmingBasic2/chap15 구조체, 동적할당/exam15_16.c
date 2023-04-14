#include <stdio.h> //struct _ parameter pointer (call by ref)

struct point increse(struct point *pt);

struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point a = {1, 1};
	struct point b, *apt;
	apt = &a;
	
	printf("a = (%d, %d)\n", a.x, a.y); //(1,1)
	b = increse(apt);
	
	printf("a = (%d, %d)\n", a.x, a.y); //(2,2) call by refference
	printf("b = (%d, %d)\n", b.x, b.y);
	
	return 0;
}

struct point increse(struct point *pt) //read-only -> const
{
	pt->x++;
	pt->y++;
	
	return *pt; //구조체 포인터의 값을 리턴하면, 구조체 전체를 전달한다..!! 
}
