#define _CRT_SECURE_NO_WARNINGS 1
定义一个最大值函数
#include<stdio.h>
int get_max(int x, int y){
	if (x > y)
		return x;
	else
		return y;
}
int main(){
	int a = 20;
	int b = 12;
	int max=get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}
