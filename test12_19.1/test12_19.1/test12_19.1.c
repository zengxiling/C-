#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char input[20] = {0};
	system("shutdown -s -t 60");
	again:
	printf("���ĵ���һ����֮�󼴽��ػ���������������ȡ���ػ���\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0){//��strcmpҪ��ͷ�ļ�string.h
		system("shutdown -a");//��system��Ҫ��ͷ�ļ�stdlib.h
	}
	else
		goto again;
	return 0;
}
/*
����goto���
char input[20] = {0};
system("shutdown -s -t 60");
while(1��{
printf("���ĵ���һ����֮�󼴽��ػ���������������ȡ���ػ���\n");
scanf("%s", input);
if (strcmp(input, "������") == 0){//��strcmpҪ��ͷ�ļ�string.h
system("shutdown -a");//��system��Ҫ��ͷ�ļ�stdlib.h
break;

}
return 0;}
*/