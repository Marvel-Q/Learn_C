#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int TotalMount(int mount, int exchange);

int main()
{
	int money = 20;//已有的钱
	int price = 1;//汽水的价格
	int mount = money / price;//买到汽水的数量
	int exchange = 2;//空瓶换汽水所需的瓶数
	int total_mount = mount + TotalMount(mount, exchange);
	printf("%d", total_mount);
	return 0;
}

int TotalMount(int mount, int exchange)
{
	int mount_temp = mount / exchange;// 当前能换的新汽水
	int left = mount % exchange;// 换完后剩余的空瓶
	if (mount_temp == 0)
	{
		return 0;// 无法再换新汽水，递归结束
	}
	// 递归：新汽水喝完的空瓶 + 之前剩余的空瓶
	return mount_temp + (TotalMount(mount_temp+left, exchange));
}