#include <stdio.h> //struct member _ data assignment (swap)

struct student //struct 1
{
	char name[10];
	int id;
};
struct pupil //struct 2
{
	char nickName[10];
	int id;
};

int main(void)
{
	struct student s = {"ljc", 100}; //struct definition
	struct pupil p = {"kim", 200};
	int temp;
	
	printf("student id: %d\n", s.id); //print
	printf("pupil id: %d\n\n", p.id);
	
	temp = s.id; //swap
	s.id = p.id;
	p.id = temp;
	
	printf("student id: %d\n", s.id); //print
	printf("pupil id: %d\n", p.id);
	
	return 0;
}
