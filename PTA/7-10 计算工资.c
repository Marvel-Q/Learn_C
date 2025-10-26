//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//double Salary(int year, int hour);
//
//int main()
//{
//	int year, workhour;
//	scanf("%d %d", &year, &workhour);
//	double salary = Salary(year, workhour);
//	printf("%.2f", salary);
//	return 0;
//}
//
//
//double Salary(int year, int hour)
//{
//	int wage;
//	if (year<5)
//	{
//		wage = 30;
//	}
//	else
//	{
//		wage = 50;
//	}
//	double salary;
//	if (hour<=40)
//	{
//		salary = wage * hour;
//	}
//	else
//	{
//		salary = wage * 40 + 1.5 * wage * (hour - 40);
//	}
//	return salary;
//}