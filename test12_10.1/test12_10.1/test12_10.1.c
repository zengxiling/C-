#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//��Ϊ�õ���strcmy����
int main(){
	char password[20] = "0";
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("���������롷��");
		scanf("%s", password);//��Ϊ�����飬
			//���Բ��ü�ȡ��ַ����
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�");
			break;
		}
		else
			printf("�����������\n");
	}
	if (i == 3){
		printf("���������������󣬳������");
	}
	
	return 0;
}