#define _CRT_SECURE_NO_WARNINGS 1
//计算1/1-1/2+1/3-1/4+1/5……+1/99-1/100的值，打印出结果
#include<stdio.h>
int main(){
	int i;
	//int  sum = 0;
	float  sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++){
		//sum+= 1 / i;//因为i是整型的，如果要得到小数的话，
		//可以在1后面加0,此时的sum应该是浮点型
		sum += 1.0/ i*flag;//*flag是改变符号
		flag = -flag;
	}
	//printf("sum=%d", sum);打印的时候，应该用%f
	printf("sum=%f", sum);
	return 0;
}//也可以用分组求和，奇数的和减去偶数的和