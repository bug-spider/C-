//函数递归：求字符串长度，不允许创建临时变量
#include<stdio.h>

int my_strlen(char* arr)
{
	if (*arr != '\0')
		return 1 + my_strlen(arr + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "bit";
	printf("%d", my_strlen(arr));
	return 0;
}
