#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Candle(double open, double close, double high, double low);
void With(double open, double close, double high, double low);

int main()
{
	double open, high, low, close;
	scanf("%lf %lf %lf %lf", &open, &high, &low, &close);
	Candle(open, close, high, low);
	return 0;
}


void Candle(double open, double close, double high, double low)
{
	if (close < open)
	{
		printf("BW-Solid");
	}
	else if (close == open)
	{
		printf("R-Cross");
	}
	else
	{
		printf("R-Hollow");
	}
	With(open, close, high, low);
}


void With(double open, double close, double high, double low)
{
	//if ((low < open && low < close) && (high <= open || high <= close))
	//{
	//	printf(" with Lower Shadow");
	//}
	//else if ((high > open && high > close) && (low >= open || low >= close))
	//{
	//	printf(" with Upper Shadow");
	//}
	//else if ((high > open && high > close) && (low < open && low < close))
	//{
	//	printf(" with Lower Shadow and Upper Shadow");
	//}

	int lower = (low < open && low < close);
	int upper = (high > open && high > close);
	if (lower && upper) 
	{
		printf(" with Lower Shadow and Upper Shadow");
	}
	else if (lower)
	{
		printf(" with Lower Shadow");
	}
	else if (upper)
	{
		printf(" with Upper Shadow");
	}
}