#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//在有序数组中查找x
int main(){
	int x = 9;
	int i = 0;
	int v[] = { 1,2,3,4,5,6,7,8};
	int sz = sizeof(v) / sizeof(v[0]);
	//printf("%d\n", sz);
	//for (int i = 0; i < sz; i++)如果加了int，那么i就变成了局部变量，
	//此时在第二个if中就不会打印找不到该元素
	for ( i = 0; i < sz; i++)
	{
		if (x == v[i]){
			 printf("找到了，这个元素的下标是：%d", i);
			break; }
		}
	if (i == sz)
		printf("没有找到该元素");
	return 0;
}
