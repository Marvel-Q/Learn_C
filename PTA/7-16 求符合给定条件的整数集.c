#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int count = 0;
	for (int a = n; a < n + 4; a++)
	{
		for (int b = n; b < n + 4; b++)
		{
			for (int c = n; c < n + 4; c++)
			{
				if (a != b && b != c && a != c)
				{
					count++;
					printf("%d", a * 100 + b * 10 + c);
					if (count%6==0)
					{
						printf("\n");
					}
					else
					{
						printf(" ");
					}
				}
			}
		}
	}

	return 0;
}