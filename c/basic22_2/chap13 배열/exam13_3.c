#include <stdio.h> //1 demention array declare

int main(void)
{
	double lowTem[] = {-6.1, -4.1, 1.1, 7.3}; //double
	double highTem[] = {1.6, 4.1, 10.2, 17.6, 22.8, 26.9, 28.8, 29.5, 25.6, 19.7, 11.5, 4.2};
	double rainProb[] = {21.6, 23.6, 45.8, 77.0};
	
	double highTemTotal = 0; //total sum
	for(int i=0; i<12; i++)
	{
		highTemTotal += highTem[i]; //accumulating
	}
	printf("high Temperature average: %.2lf", highTemTotal/12); //print average
	
	return 0;
}
