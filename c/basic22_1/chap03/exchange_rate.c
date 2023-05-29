#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double rate;
	double usd;
	int krw;

	printf("exchange_rate: ");
	scanf("%lf", &rate);

	printf("krw: ");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("%d krw = %lf dollar", krw, usd);
	return 0;
}