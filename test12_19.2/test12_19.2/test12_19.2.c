#define _CRT_SECURE_NO_WARNINGS 1
//�ַ�������
#include<stdio.h>
int main(){
	char arr1[] = "xiao";
	char arr2[20] = "##########";
	strcpy(arr2, arr1);
	printf("%s", arr2);//��arr1��\0Ҳ���������ˣ���ӡ��ʱ����Ȼarr2������#���ǣ�����\0�Ͳ���ӡ��
	return 0;
}