#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//��ӡ1000��2000֮�������
//�ж�����ķ������ܱ�4���������ܱ�100����
//�ܱ�400����
int main(){
	int year;
	int count = 0;
	for (year = 1000; year <= 2000; year++){
		if (year % 4 == 0 && year % 100 != 0){
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("��������һ����%d������", count);
	return 0;
}