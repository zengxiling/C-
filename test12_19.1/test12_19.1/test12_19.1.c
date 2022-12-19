#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char input[20] = {0};
	system("shutdown -s -t 60");
	again:
	printf("您的电脑一分钟之后即将关机，请输入我是猪取消关机：\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0){//用strcmp要加头文件string.h
		system("shutdown -a");//用system是要加头文件stdlib.h
	}
	else
		goto again;
	return 0;
}
/*
不用goto语句
char input[20] = {0};
system("shutdown -s -t 60");
while(1）{
printf("您的电脑一分钟之后即将关机，请输入我是猪取消关机：\n");
scanf("%s", input);
if (strcmp(input, "我是猪") == 0){//用strcmp要加头文件string.h
system("shutdown -a");//用system是要加头文件stdlib.h
break;

}
return 0;}
*/