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
	introduction();//���ܹ���
	shutdown();//60s�ػ�
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
		if (n == 0)
		{
			char a[10];
			printf("�븴�ƣ�Ctrl+C����������������ճ����Ctrl+V����ð�ź�ȡ���ػ�ָ�");
			scanf("%s", &a);
			clear();
			if (!strcmp(a,"��������"))
			{
				printf("�𾴵��������£����Ĺػ�ָ����ȡ��^-^\n");
				system("shutdown -a");
				break;
			}
		}
		if (n > answer)
		{
			printf("�´���\n");
		}
		else if (n < answer)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ���¶��ˣ��ػ���ȡ��\n");
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
	printf("�س��˳���");
	getchar();
}


void introduction()
{
	printf("�ó����������1-100���������������²����ĸ���\n");
	printf("������ϲ�ͷ���60s��ػ����¶Ժ�ȡ���ػ�����Ŭ���¶԰ɣ�\n");
	printf("��Ҳ����ͨ�����롰0����ֱ��ȡ���ػ�ָ��^-^\n");
}

void shutdown()
{
    int ret = system("shutdown -s -t 60");
    if (ret != 0)
    {
        printf("���ùػ�ʧ�ܣ����Թ���Ա������г���\n");
        // ���Գ����������������߼�����Ϸ��
    }
    else
    {
        printf("������60���ػ����뾡��¶����ֻ�����0ȡ���ػ���\n");
    }
}