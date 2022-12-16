#define _CRT_SECURE_NO_WARNINGS 1
//编写代码在一个整型有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出找不到
#include<stdio.h>
int main(){
	int arr[] = {1,2,3,4,5,6,7,8};
	int left=0;
	int right;
	int x;
	printf("请输入一个您想查找的数：");
	scanf("%d", &x);
	int sz = sizeof(arr) / sizeof(arr[0]);
	right = sz - 1;
	int mid;
	while (right >= left){
		mid = (right + left) / 2;
		if (x > arr[mid])
		{
			left = mid + 1;
		}
		else if (x < arr[mid]){
			right = mid - 1;
		}
		else
		{
			printf("找到了，这个数的下标是%d\n", mid);
			break;
		}
	}
	if (right < left){ printf("抱歉，没有找到该数\n"); }
	return 0;
}