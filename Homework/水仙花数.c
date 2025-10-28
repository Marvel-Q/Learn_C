//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int isNarcissisticNumber(int n);
//int Digit(int n);
//
//int main()
//{
//	//int n;
//	//scanf("%d", &n);
//	//printf("%d %s a narcissistic number", n, isNarcissisticNumber(n) ? "is" : "is NOT");
//	for (int i = 1; i < 100000000; i++)
//	{
//		if (isNarcissisticNumber(i))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//
//int isNarcissisticNumber(int n)
//{
//	int digit = Digit(n);
//	int sum = 0;
//	int num = n;
//	while(num!=0)
//	{
//		sum += (int)pow(num % 10, digit);
//		num /= 10;
//	}
//	if (sum==n)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int Digit(int n)
//{
//	int digit = 0;
//	if (n==0)
//	{
//		return 1;
//	}
//	while (n!=0)
//	{
//		n = n / 10;
//		digit++;
//	}
//	return digit;
//}