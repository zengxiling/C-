#define _CRT_SECURE_NO_WARNINGS 1
//����1/1-1/2+1/3-1/4+1/5����+1/99-1/100��ֵ����ӡ�����
#include<stdio.h>
int main(){
	int i;
	//int  sum = 0;
	float  sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++){
		//sum+= 1 / i;//��Ϊi�����͵ģ����Ҫ�õ�С���Ļ���
		//������1�����0,��ʱ��sumӦ���Ǹ�����
		sum += 1.0/ i*flag;//*flag�Ǹı����
		flag = -flag;
	}
	//printf("sum=%d", sum);��ӡ��ʱ��Ӧ����%f
	printf("sum=%f", sum);
	return 0;
}//Ҳ�����÷�����ͣ������ĺͼ�ȥż���ĺ�