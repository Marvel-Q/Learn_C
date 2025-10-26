//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int Count_Digit(const int N, const int D);
//
//int main()
//{
//    int N, D;
//
//    scanf("%d %d", &N, &D);
//    printf("%d\n", Count_Digit(N, D));
//    return 0;
//}
//
//int Count_Digit(const int N, const int D)
//{
//    int a[10] = {0};
//    int n = N;
//    if (N < 0)
//    {
//        n = -N;
//    }
//    if (N == 0)
//    {  
//        if (D == 0)
//        {
//            return 1;
//        }
//        return 0;
//    }
//    while (n != 0)
//    {
//        int i = n % 10;
//        a[i]++;
//        n /= 10;
//    }
//    return a[D];
//}