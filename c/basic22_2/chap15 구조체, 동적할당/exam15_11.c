#include <stdio.h> //variable alignment -> padding byte

int main(void)
{
	struct s1 {short x; short y; short z;} s1; //short = 2byte / 2 + 2 + 2 = 6
	struct s2 {float x; char y;} s2; //float = 4byte / 4 + 4(<-1) = 8
	struct s3 {char x; double y; char z;} s3; //double = 8byte / 8(<-1) + 8 + 8(<-1) = 24 
	struct s4 {char x; char y; double z;} s4; // 8(<-1+1) + 8 = 16
	
	printf("sizeof(s1): %d\n", sizeof(s1)); //size of struct
	printf("sizeof(s2): %d\n", sizeof(s2));
	printf("sizeof(s3): %d\n", sizeof(s3)); //x_______yyyyyyyyz_______
	printf("sizeof(s4): %d\n", sizeof(s4)); //xy______zzzzzzzz
	
	return 0;
}
