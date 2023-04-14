#include <stdio.h> //input array data  with scanf()

int main(void)
{
	int korea[4], china[4]; //quarterScore array, totalScore
	int krScore, cnScore;
	
	for(int i=0; i<4; i++)
	{
		printf("input KR %dquarter scores: ", i+1); //input quarterScore
		scanf("%d", &korea[i]);
		printf("input CN %dquarter scores: ", i+1);
		scanf("%d", &china[i]);
		
		krScore += korea[i]; //accumulating totalScore
		cnScore += china[i];
		
		printf("%d  %d\n", korea[i], china[i]); //print quarterScore
	}
	printf("\nKR: %d, CN: %d", krScore, cnScore);
	
	return 0;
}
