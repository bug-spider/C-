//斐波那契数列，求第n个斐波那契数
#include<stdio.h>
//int fid(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fid(n - 1) + fid(n - 2);
//
//}
int fid(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
	
 
 
}
 
 
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d", fid(n));
	return 0;
}
