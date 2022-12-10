#define _CRT_SECURE_NO_WARNINGS 1
//写代码将三个数从大到小输出
#include<stdio.h>
int main(){
	printf("请输入三个数");
	int a,b,c,max,min,mid;
	scanf("%d%d%d",&a,&b,&c);
	if (a >b)
	{
		max = a; min = b;
	}
	else
	  {
		max = b;
		min = a;
	    }
	if (max >c)
	{
		if (min > c)
		{
			mid = min; min = c;
		 }
	}
	if (max < c)
	{
		mid = max; 
		max = c;
	}
	if (a == b == c){
		max = a;
		mid= b;
		min = c;
	}
	if (a == b)
	{
		if (b > c)
		{
			max = a;
			mid = b;
			min = c;
		}
		else
		{
			max = c;
			mid = b;
			min = a;
		}
	}
	if (b == c)
	{
		if (b > a)
		{
			max = c;
			mid = b;
			min = a;
		}
		else
		{
			max = a;
			mid = b;
			min = c;
		}
	}
	if (a == c)
	{
		if (b > a)
		{
			max = b;
			mid = a;
			min = c;
		}
		else
		{
			max = a;
			mid = c;
			min = b;
		}
	}
	printf("%d,%d,%d", max, mid, min);
	return 0;
}