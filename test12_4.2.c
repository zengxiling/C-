#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//在有序数组中查找x,用二分查找，即折半查找算法
int main()
{
	int x = 7;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int left = 0;

	while (left <= right)
	{
		int mid;
		mid = (right + left) / 2;//如果将mid定义在外面，结果就是只有光标
		if (arr[mid] > x){
			right = mid - 1;

		}
		else if (arr[mid] < x){
			left = mid + 1;
		}
		else
		{
			printf("找到了x元素，它的下标为：%d", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到该元素");
	return 0;
}