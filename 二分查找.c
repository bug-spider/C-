#include<stdio.h>
int binary_search(int arr[],int i,int sz)//arr是一个指针
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right)/2;//中间元素下标
		if (arr[mid] < i)
			left = mid+1 ;
		else if (arr[mid] > i)
			right = mid-1;
		else
			return mid;
	}
	return -1;

}


int main()
{
	//二分查找
	//在一个有序数组中找到具体的某个数
	//找到了返回下标，找不到返回-1
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 10;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int m=binary_search(arr,k,sz );
	if (m == -1)
		printf("找不到指定数字");
	else
		printf("找到了，下标是%d", m);

	return 0;
}
