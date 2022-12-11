#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>// 最大公约数
//给定两个数，求这两个数的最大公约数
//a模b的数是r,如果r不等于0，那么将b的数辅助给a,,然后将r赋值给b。
//再让a和b进行取模，如果模等于0的时候，那么b就是最大公约数。//欧几里得算法
int main(){
	int a;
	int b;
	int r;
	printf("请输入两个数：\n");
	scanf("%d %d", &a, &b);
	r = a%b;
	while(r != 0){
		a = b;
		b = r;
		r = a%b;
	}
	printf("他们的最大公约数是%d:",b);
	
	
}
