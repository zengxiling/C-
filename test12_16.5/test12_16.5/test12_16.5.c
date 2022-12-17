#define _CRT_SECURE_NO_WARNINGS 1
//一个菜单
#include<stdio.h>
void hello(){
	printf("你好，你今天是超级可爱的小朋友哦\n");
}
int main(){
	int a=1;
	
	while (1)
	{
		printf("-------------操作选项-----------\n");
		printf("1:返回菜单 \n");
		printf("2:执行操作 \n");
		printf("3:退出程序\n");
		printf("--------------------------------\n");
		printf("按数字键选择要执行的操作: ");
		scanf("%d", &a);
		printf("\n");
		//输入3跳出循环，退出程序
		if (a == 3)
			break;
		switch (a)
		{
		case 1:break;//直接跳出switch循环
		case 2:hello(); break;
		default:printf("你好，输入的数字不正确，请输入1~3\n");
			//数字输入错误，跳出siwtch语句，进入下一次循环
			break;
		}
	}
		
	return 0;
}