#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数，可以交换两个整型变量的内容
/*#include<stdio.h>
void get_swap(int* x, int* y){
	int c = 0;
	c = *y;
	*y = *x;
	*x = c;
}
int main(){
	int a = 10;
	int b = 20;
	int* pa = &a;
	int* pb = &b;
	get_swap(pa, pb);
	printf("a=%d b=%d\n", a, b);

	return 0;
}*/
//或者
#include<stdio.h>
void get_swap(int* pa, int* pb){
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main(){
	int a = 10;
	int b = 20;
	get_swap(&a, &b);
	printf("a=%d b=%d",a,b);
	return 0;
}


/*#include<stdio.h>
int main(){
int a = 10;
int* pa = &a;
*pa = 20;
printf("%d", a);
return 0;
}*/