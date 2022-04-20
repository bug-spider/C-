//函数指针加法计算器
#include<stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int (*p)(int, int) = Add;//Add函数的地址
	printf("%d", (*p)(10, 20));

	return 0;
}
