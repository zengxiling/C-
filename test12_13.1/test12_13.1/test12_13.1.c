#define _CRT_SECURE_NO_WARNINGS 1
//打印素数
//写一个代码，打印100~200之间的素数
#include<stdio.h>
int main()
{
	int i;
	int j;
	int count=0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <i; j++){
			if (i%j == 0)
				break;
		}
		if (j==i )//
			{ 
			printf("%d ", i);
			count++;
			}
	}
	printf("\n在这区间一共有%d个素数\n",count);
	return 0;
}