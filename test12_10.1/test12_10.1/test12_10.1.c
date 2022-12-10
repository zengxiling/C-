#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//因为用到了strcmy函数
int main(){
	char password[20] = "0";
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码》：");
		scanf("%s", password);//因为是数组，
			//所以不用加取地址符号
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功");
			break;
		}
		else
			printf("密码输入错误\n");
	}
	if (i == 3){
		printf("三次密码均输入错误，程序结束");
	}
	
	return 0;
}