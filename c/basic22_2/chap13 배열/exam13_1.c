#include <stdio.h> //1 demention array declare

int main(void)
{
	int korea[9] = {2,0,0,0,0,0,1,0,0}; //declaration -> int
	int cuba[] = {1,0,0,0,0,0,1,0,0}; //declaration without size
	
	int korScore = 0; //total score
	int cubScore = 0;
	
	printf("Kor Cuba\n");
	for(int i=0; i<9; i++)
	{
		korScore += korea[i]; //accumulating
		cubScore += cuba[i];
		printf("%d   %d\n", korea[i], cuba[i]);
	}
	printf("---------\n%d   %d\n", korScore, cubScore);
	
	return 0;
}
