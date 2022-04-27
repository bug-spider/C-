#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int check_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	//写一段代码告诉我们当前机器的字节序是什么
	//返回1，小端
	//返回0，大端
	int ret = check_sys();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}
