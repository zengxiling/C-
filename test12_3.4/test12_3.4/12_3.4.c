#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//º∆À„1£°+2£°+3 £°
int main(){
	int ret=0;
	int sum = 1;
	int i = 1;
	for (int j = 1; j <= 10; j++)
	{
		for (i = 1,sum=1; i <= j; i++)
		{
			sum = sum*i;

		}
		ret = ret+ sum;
	}
	printf("ret=%d\n", ret);
	return 0;
}