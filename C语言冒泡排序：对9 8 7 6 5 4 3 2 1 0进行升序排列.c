//冒泡排序：对9 8 7 6 5 4 3 2 1 0进行升序排列
#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)//冒泡排序的趟数
	{
		int flag = 1;//假设这一趟要排序的数组已经有序
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序并不完全有序
			}
			if (flag == 1)
				break;
		}
	}

}

int main()
{
	//冒泡排序
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//对arr进行排序，排成升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;
	bubble_sort(arr,sz);//数组传参是首元素地址
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
