#define _CRT_SECURE_NO_WARNINGS 1
//��д������һ��1��100������������һ���ж��ٸ�����9
#include<stdio.h>
int main(){
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++){
		if (i % 10 == 9)//���������9��֤����λ��9
		{
			count++;
		}
		if (i / 10 == 9)//�����Ϊ9��֤��ʮλ��9����else if ����Ϊ99���������������
		{
			count++;
		}
	}
	printf("9�ĸ�����count=%d", count);
	return 0;
}