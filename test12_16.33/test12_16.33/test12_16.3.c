#define _CRT_SECURE_NO_WARNINGS 1
//9.乘法口诀表//自己写的
#include<stdio.h>
int main(){
	int i;
	int j;
	int sum = 1;
	for (i = 1; i <= 9; i++){ 
		for (j = 1; j <= i; j++){
			sum = i*j;
			printf("%d*%d=%-2d  ", i,j,sum);//-2d表示两位左对齐
			if (i == j)
				printf("\n");
		}
		//如果没有if的话可以加上在这个地方加上这一行
		//printf("\n");
	}
	return 0;
}