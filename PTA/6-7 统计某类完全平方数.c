//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int IsTheNumber(const int N);
//
//int main()
//{
//    int n1, n2, i, cnt;
//
//    scanf("%d %d", &n1, &n2);
//    cnt = 0;
//    for (i = n1; i <= n2; i++) {
//        if (IsTheNumber(i))
//            cnt++;
//    }
//    printf("cnt = %d\n", cnt);
//
//    return 0;
//}
//
//int IsTheNumber(const int N)
//{
//    int a = sqrt(N);
//    int arr[10];
//    if (N<=10 || a * a != N)
//    {
//        return 0;
//    }
//    //int n = N;
//    //int i = 0;
//    //while (n!=0)
//    //{
//    //    arr[i] = n % 10;
//    //    n = n / 10;
//    //    i++;
//    //}
//    //int c = 0;
//    //for (int a = 0; a < i; a++)
//    //{
//    //    for (int b = 0; b < i && b != a; b++)
//    //        return 1;
//    //    {
//    //        c += arr[a] == arr[b];
//    //    }
//    //}
//    //if (c>0)
//    //{
//    //    return 1;
//    //}
//    int n = N;
//    int freq[10] = { 0 }; // 初始化频率数组，记录0-9每个数字出现的次数
//    while (n != 0) {
//        int digit = n % 10;
//        freq[digit]++;
//        if (freq[digit] >= 2) {
//            return 1; // 有数字出现至少两次
//        }
//        n /= 10;
//    }
//    return 0;
//}