#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Book{
	char name[20];//c语言程序设计
	int  price; //55
};//创建一个结构体类型
int main()
{
	//利用结构体类型创造出一个该类型的结构体变量出来
	struct Book b1 = { "c语言程序设计", 55 };//创建这个类型变量出来并给它赋值
	struct Book* pb;//指针变量pb的类型是strucr Book*，有个*表示pb是个指针。
	pb = &b1;//用pb这个变量取出变量b1的地址
	//此时应该如何打印书名和价格呢
	//首先是找到这个变量，通过在pb中存储的地址找到变量b1,即*b1
	//找到这个变量以后即可打印
	printf("书名是：%s\n", pb->name);
	printf("价格是：%d\n", (*pb).price);
	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	b1.price = 2;
	printf("修改后的价格：%d\n", b1.price);
	return 0;
}