#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	char ar = '0';
	char ch[20] = { 0 };
	printf("����������:\n");
	scanf("%s",ch);//�����ַ���Ҫ��%s
	//getchar();//����������\n���յ����������������ǿյ�
	while (ar = getchar() != '\n'){}
	printf("��ȷ������Y��N��");
	int ret=0;
	ret = getchar();
	if (ret =='Y'){
		printf("ȷ�ϳɹ�");
	}
	else   
		printf("����ȷ��");

	return 0;
}

