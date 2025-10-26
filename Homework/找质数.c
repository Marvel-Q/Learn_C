//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void find_prime(int prime_number[], int i, int *prime_index);
//
//int main()
//{
//	int max;
//	printf("请输入一个2-1000000的整数，该程序将为您找到不大于其的所有质数:");
//	scanf("%d", &max);
//	while (max>1000000||max<=1)
//	{
//		printf("请重新输入:");
//		scanf("%d", &max);
//	}
//		int prime_number[78498] = { 0 };
//		int prime_index = 0;
//		prime_number[0] = 2;
//		for (int i = 3; i <= max; i += 2)
//		{
//			find_prime(prime_number, i, &prime_index);
//		}
//		for (int i = 0; i <= prime_index; i++)
//		{
//			printf("%d\n", prime_number[i]);
//		}
//		printf("总共找到 %d 个质数,回车退出\n", prime_index + 1);
//		getchar();
//		getchar();
//	return 0;
//}
//void find_prime(int prime_number[], int i,int *prime_index)
//{
//	int j;
//	for (j = 0; j <= *prime_index; j++)
//	{
//		if (i%prime_number[j]==0)
//		{
//			break;
//		}
//	}
//	if (j>*prime_index)
//	{
//		(*prime_index)++;
//		prime_number[*prime_index] = i;
//	}
//}