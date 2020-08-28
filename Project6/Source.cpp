#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float a;
	scanf("%f", &a);
	if (a >= 1000 && a < 10000)
	{
		printf("Pay %.2f", a - ((a * 10) / 100));
	}
	else if (a >= 10000 && a < 50000)
	{
		printf("Pay %.2f", a - ((a * 15) / 100));
	}
	else if (a >= 50000)
	{
		printf("Pay %.2f", a - ((a * 20) / 100));
	}
	else if (a <= 0)
	{
		printf("It's impossible");
	}
	return 0;
}