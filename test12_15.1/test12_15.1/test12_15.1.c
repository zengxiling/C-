#define _CRT_SECURE_NO_WARNINGS 1
//编写程序数一下1到100的所有整数中一共有多少个数字9
#include<stdio.h>
int main(){
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++){
		if (i % 10 == 9)//如果余数是9，证明各位是9
		{
			count++;
		}
		if (i / 10 == 9)//如果商为9，证明十位是9不用else if 是因为99这两种情况都符合
		{
			count++;
		}
	}
	printf("9的个数有count=%d", count);
	return 0;
}