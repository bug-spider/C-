#include<stdio.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1,arr2,arr3 };//指针数组
	int i = 0;
	for (i = 0; i <3; i++)//三行数组
	{
		int j = 0;
		for (j = 0; j <5; j++)//五个数组元素
		{
			printf("%d ", *(parr[i] + j));//地址+1
		}
		printf("\n");

	}
	return 0;
}
