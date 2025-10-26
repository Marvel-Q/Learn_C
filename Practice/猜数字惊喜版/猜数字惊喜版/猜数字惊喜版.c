#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

int randAnswer();
void guess(int answer);
void clear();
void Exit();
void introduction();
void shutdown();



int main()
{
	introduction();//介绍功能
	shutdown();//60s关机
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
		if (n == 0)
		{
			char a[10];
			printf("请复制（Ctrl+C）“我是奶龙”并粘贴（Ctrl+V）在冒号后取消关机指令：");
			scanf("%s", &a);
			clear();
			if (!strcmp(a,"我是奶龙"))
			{
				printf("尊敬的奶龙阁下，您的关机指令已取消^-^\n");
				system("shutdown -a");
				break;
			}
		}
		if (n > answer)
		{
			printf("猜大了\n");
		}
		else if (n < answer)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜您猜对了，关机已取消\n");
			system("shutdown -a");
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
	printf("附带惊喜惩罚：60s后关机，猜对后取消关机，请努力猜对吧！\n");
	printf("您也可以通过输入“0”来直接取消关机指令^-^\n");
}

void shutdown()
{
    int ret = system("shutdown -s -t 60");
    if (ret != 0)
    {
        printf("设置关机失败！请以管理员身份运行程序。\n");
        // 可以尝试其他方法？或者继续游戏？
    }
    else
    {
        printf("已设置60秒后关机！请尽快猜对数字或输入0取消关机。\n");
    }
}