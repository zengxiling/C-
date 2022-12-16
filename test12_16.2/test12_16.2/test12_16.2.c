#define _CRT_SECURE_NO_WARNINGS 1
//求10个整数中最大的值
#include<stdio.h>
int main(){
	char arr[] = { 1, 2, 3, 4, 9, 6, 7, 8, 9, 10 };
	int i;
	//int max = 0;//如果这一组数字全是负数的话，那么结果就是0，是不对的
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++){//i可以直接从1开始
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}
