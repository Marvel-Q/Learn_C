#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 250000

void Print_Factorial(const int N);
void clear();

int main()
{
    int N;
    printf("�ó������ڼ�������ֽ׳ˣ�����С���ᰴ���������ּ��㣩\n");
    printf("������һ��������5�����������");
    if (scanf("%d", &N) != 1)
    {
        printf("������󣡣���\n");
    }
    else
    {
        Print_Factorial(N);
        for (int i = 0; i < 5; i++)
        {
            printf("\n");
        }
        clear();
        printf("����س��˳�:");
        getchar();
    } 
    return 0;
}


void Print_Factorial(const int N) 
{
    if (N < 0)
    {
        printf("������������������");
    }
    else if (N == 0||N == 1)
    {
        printf("%d\n", 1);
    }
    else if (N >50000)
    {
        printf("���ֹ��󣡣���");
    }
    else
    {
        printf("����������ֹ��󣬼������Ҫһ��ʱ�䣬�����ĵȴ�!\n");
        short a[MAX] = {0};//�洢������
        a[0] = 1;//����洢��ʼΪ1
        int figure = 1;//��ǰλ��

        for (int i = 2; i <= N; i++)
        {
            int carry = 0;//��λ
            for (int j = 0; j < figure; j++)
            {
                int c = a[j] * i + carry;
                a[j] = c % 10;//��ǰλ
                carry = c / 10;//��λ
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