#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int randAnswer();
void guess(int answer);
void clear();
void Exit();
void introduction();



int main()
{
	introduction();
	int answer = randAnswer();//获取1-100的随机数作为答案
	guess(answer);//猜数主体
	Exit();//回车退出
	return 0;
}

int randAnswer()
{
	srand(time(NULL));
	return rand() % 100 + 1;
}

void guess(int answer)
{
	int n;//你的猜测
	while (1)
	{
		printf("请输入您所猜测的数字：");
		scanf("%d", &n);
		clear();
		if (n>answer)
		{
			printf("猜大了\n");
		}
		else if (n<answer)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜您猜对了\n");
			break;
		}
	}
}

void clear()
{
	int c;
	while ((c = getchar()) != '\n');
}

void Exit()
{
	printf("回车退出：");
	getchar();
}
void introduction()
{
	printf("该程序将随机生成1-100的整数，由你来猜测是哪个数\n");
}