//#include<stdio.h>
//
//int F(int n);
//int f(int n);//µ›πÈ£®º∆À„¡ø±¨’®£©
//
//int main()
//{
//	int arr[46];
//	for (int i = 0; i < 46; i++)
//	{
//		arr[i] = F(i + 1);
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//
//int F(int n)
//{
//	int a = 1, b = 1, c;
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	for (int i = 3; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//int f(int n)
//{
//	if (n <= 2)	
//	{
//		return 1;
//	}
//	return f(n - 1) + f(n - 2);
//}