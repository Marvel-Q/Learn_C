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
	int answer = randAnswer();//��ȡ1-100���������Ϊ��
	guess(answer);//��������
	Exit();//�س��˳�
	return 0;
}

int randAnswer()
{
	srand(time(NULL));
	return rand() % 100 + 1;
}

void guess(int answer)
{
	int n;//��Ĳ²�
	while (1)
	{
		printf("�����������²�����֣�");
		scanf("%d", &n);
		clear();
		if (n>answer)
		{
			printf("�´���\n");
		}
		else if (n<answer)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ���¶���\n");
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
	printf("�س��˳���");
	getchar();
}
void introduction()
{
	printf("�ó����������1-100���������������²����ĸ���\n");
}