#include<stdio.h>
//指针求字符串长度
int main()
{
	char ch[] = "bit";
	int count = 0;
	/*int sz = sizeof(ch) / sizeof(ch[0]);
	printf("%d", sz-1);*/
	char* p = ch;
	while (1)
	{
		if (*(p) != '\0')
		{
			count++;
			p++;
		}
			
		else
			break;
	}
	printf("字符串长度为:%d", count);
	return 0;
}
