#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//����n�Ľ׳�
int main(){
	int n;
	printf("������Ҫ����׳˵���n:");
	scanf("%d", &n);
	int sum = 1;
	int i = 1;
	for (i = 1; i <= n; i++)
	{
		sum = sum*i;
	}
	printf("sum=%d\n", sum);
	return 0;
}