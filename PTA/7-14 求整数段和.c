#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b,sum=0,count=0;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		printf("%5d", i);
		count++;
		if (count%5==0)
		{
			printf("\n");
		}
		sum += i;
	}
	if (count%5!=0)
	{
		printf("\n");
	}
	printf("Sum = %d", sum);
	return 0;
}