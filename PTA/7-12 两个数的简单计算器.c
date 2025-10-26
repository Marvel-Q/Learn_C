//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int Switch(int x, int y, char z, int* ok);
//
//int main()
//{
//	int x, y;
//	char z;
//	int ok = 1;
//	scanf("%d %c %d", &x, &z, &y);
//	int answer = Switch(x, y, z, &ok);
//	if (ok)
//	{
//		printf("%d", answer);
//	}
//	else
//	{
//		printf("ERROR");
//	}
//	return 0;
//}
//
//int Switch(int x, int y, char z, int*ok)
//{
//	switch (z)
//	{
//	case '+':
//		return x + y;
//		break;
//	case'-':
//		return x - y;
//		break;
//	case'*':
//		return x * y;
//		break;
//	case'/':
//		return x / y;
//		break;
//	case'%':
//		return x % y;
//		break;
//	default:
//		*ok = 0;
//		break;
//	}
//}