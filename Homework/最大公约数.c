//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int GCD(int x, int y);
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	int c = GCD(a, b);
//	printf("%d", c);
//	return 0;
//}
//
////Greatest Common Divisor 最大公约数
//int GCD(int x, int y)
//{
//	if (y > x)//保证x>=y
//	{
//		int z = 0;//缓存较小值x
//		z = x;    
//		x = y;
//		y = z;
//
//	}
//	int z = 1;//缓存求余值
//	while (z != 0)//辗转相除法求最大公约数
//	{
//		z = x % y;
//		x = y;
//		y = z;
//	}
//	return x;//返回最大公约数
//}