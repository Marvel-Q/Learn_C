#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void initial(int a[]);
void lookFor(int a[], int a_length, int n);
void sort(int a[], int a_length);
void clear();


int main()
{
	int a[100];
	int a_length = sizeof(a) / sizeof(a[0]);
	int n;
	initial(a);
	sort(a, a_length);
	printf("数组：\n");
	for (int i = 0; i < a_length; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n您要找的数是：");
	scanf("%d", &n);
	lookFor(a, a_length, n);
	clear();
	printf("回车退出");
	getchar();
	return 0;
}


void initial(int a[])//随机初始化数组
{
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		a[i] = rand() % 1000;
	}
}


void sort(int a[], int a_length)//对数组排序
{
	for (int i = 0; i < a_length; i++)
	{
		for (int j = i + 1; j < a_length; j++)
		{
			if (a[i] > a[j])//从低到高排序
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}


void lookFor(int a[], int a_length, int n)
{
	int l = 0;
	int r = a_length - 1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (a[mid] < n)
		{
			l = mid + 1;
		}
		else if (a[mid] > n)
		{
			r = mid - 1;
		}
		else
		{
			printf("该数索引为%d\n", mid);
			break;
		}
	}
	if (l > r)
	{
		printf("未找到该数\n");
	}
}

void clear()
{
	int c;
	while ((c = getchar()) != '\n');
}