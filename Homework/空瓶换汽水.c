#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int TotalMount(int mount, int exchange);

int main()
{
	int money = 20;//���е�Ǯ
	int price = 1;//��ˮ�ļ۸�
	int mount = money / price;//����ˮ������
	int exchange = 2;//��ƿ����ˮ�����ƿ��
	int total_mount = mount + TotalMount(mount, exchange);
	printf("%d", total_mount);
	return 0;
}

int TotalMount(int mount, int exchange)
{
	int mount_temp = mount / exchange;// ��ǰ�ܻ�������ˮ
	int left = mount % exchange;// �����ʣ��Ŀ�ƿ
	if (mount_temp == 0)
	{
		return 0;// �޷��ٻ�����ˮ���ݹ����
	}
	// �ݹ飺����ˮ����Ŀ�ƿ + ֮ǰʣ��Ŀ�ƿ
	return mount_temp + (TotalMount(mount_temp+left, exchange));
}