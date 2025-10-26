//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void Print_Factorial(const int N);
//
//int main()
//{
//    int N;
//
//    scanf("%d", &N);
//    Print_Factorial(N);
//    return 0;
//}
//
//
//void Print_Factorial(const int N) 
//{
//    if (N < 0)
//    {
//        printf("Invalid input");
//    }
//    else if (N == 0||N == 1)
//    {
//        printf("%d\n", 1);
//    }
//    else
//    {
//        int a[3000] = {0};//存储大数字
//        a[0] = 1;//数组存储开始为1
//        int figure = 1;//当前位数
//
//        for (int i = 2; i <= N; i++)
//        {
//            int carry = 0;//进位
//            for (int j = 0; j < figure; j++)
//            {
//                int c = a[j] * i + carry;
//                a[j] = c % 10;//当前位
//                carry = c / 10;//进位
//            }
//            while (carry != 0)
//            {
//                a[figure] = carry % 10;
//                carry /= 10;
//                figure++;
//            }
//        }
//        for (int i = figure-1; i >=0; i--)
//        {
//            printf("%d", a[i]);
//        }
//    }
//}

