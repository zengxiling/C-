#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	char ar = '0';
	char ch[20] = { 0 };
	printf("请输入密码:\n");
	scanf("%s",ch);//输入字符串要用%s
	//getchar();//将缓冲区的\n接收掉，这样缓冲区才是空的
	while (ar = getchar() != '\n'){}
	printf("请确认密码Y或N：");
	int ret=0;
	ret = getchar();
	if (ret =='Y'){
		printf("确认成功");
	}
	else   
		printf("放弃确认");

	return 0;
}

