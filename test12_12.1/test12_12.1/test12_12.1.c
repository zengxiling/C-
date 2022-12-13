#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//打印1000到2000之间的闰年
//判断闰年的方法：能被4整除，不能被100整除
//能被400整除
int main(){
	int year;
	int count = 0;
	for (year = 1000; year <= 2000; year++){
		if (year % 4 == 0 && year % 100 != 0){
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("在这区间一共有%d个闰年", count);
	return 0;
}