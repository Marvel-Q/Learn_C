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
////Greatest Common Divisor ���Լ��
//int GCD(int x, int y)
//{
//	if (y > x)//��֤x>=y
//	{
//		int z = 0;//�����Сֵx
//		z = x;    
//		x = y;
//		y = z;
//
//	}
//	int z = 1;//��������ֵ
//	while (z != 0)//շת����������Լ��
//	{
//		z = x % y;
//		x = y;
//		y = z;
//	}
//	return x;//�������Լ��
//}