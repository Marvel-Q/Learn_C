#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 250000

void Print_Factorial(const int N);
void clear();

int main()
{
    int N;
    printf("该程序用于计算大数字阶乘（输入小数会按照整数部分计算）\n");
    printf("请输入一个不大于5万的正整数：");
    if (scanf("%d", &N) != 1)
    {
        printf("输入错误！！！\n");
    }
    else
    {
        Print_Factorial(N);
        for (int i = 0; i < 5; i++)
        {
            printf("\n");
        }
        clear();
        printf("输入回车退出:");
        getchar();
    } 
    return 0;
}


void Print_Factorial(const int N) 
{
    if (N < 0)
    {
        printf("请输入正整数！！！");
    }
    else if (N == 0||N == 1)
    {
        printf("%d\n", 1);
    }
    else if (N >50000)
    {
        printf("数字过大！！！");
    }
    else
    {
        printf("如果输入数字过大，计算会需要一段时间，请耐心等待!\n");
        short a[MAX] = {0};//存储大数字
        a[0] = 1;//数组存储开始为1
        int figure = 1;//当前位数

        for (int i = 2; i <= N; i++)
        {
            int carry = 0;//进位
            for (int j = 0; j < figure; j++)
            {
                int c = a[j] * i + carry;
                a[j] = c % 10;//当前位
                carry = c / 10;//进位
            }
            while (carry != 0)
            {
                a[figure] = carry % 10;
                carry /= 10;
                figure++;
            }
        }
        for (int i = figure-1; i >=0; i--)
        {
            printf("%d", a[i]);
        }
    }
}

void clear() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}