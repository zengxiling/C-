#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>// ���Լ��
//���������������������������Լ��
//aģb������r,���r������0����ô��b����������a,,Ȼ��r��ֵ��b��
//����a��b����ȡģ�����ģ����0��ʱ����ôb�������Լ����//ŷ������㷨
int main(){
	int a;
	int b;
	int r;
	printf("��������������\n");
	scanf("%d %d", &a, &b);
	r = a%b;
	while(r != 0){
		a = b;
		b = r;
		r = a%b;
	}
	printf("���ǵ����Լ����%d:",b);
	
	
}
