#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Book{
	char name[20];//c���Գ������
	int  price; //55
};//����һ���ṹ������
int main()
{
	//���ýṹ�����ʹ����һ�������͵Ľṹ���������
	struct Book b1 = { "c���Գ������", 55 };//����������ͱ���������������ֵ
	struct Book* pb;//ָ�����pb��������strucr Book*���и�*��ʾpb�Ǹ�ָ�롣
	pb = &b1;//��pb�������ȡ������b1�ĵ�ַ
	//��ʱӦ����δ�ӡ�����ͼ۸���
	//�������ҵ����������ͨ����pb�д洢�ĵ�ַ�ҵ�����b1,��*b1
	//�ҵ���������Ժ󼴿ɴ�ӡ
	printf("�����ǣ�%s\n", pb->name);
	printf("�۸��ǣ�%d\n", (*pb).price);
	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 2;
	printf("�޸ĺ�ļ۸�%d\n", b1.price);
	return 0;
}