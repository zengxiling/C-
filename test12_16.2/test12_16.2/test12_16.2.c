#define _CRT_SECURE_NO_WARNINGS 1
//��10������������ֵ
#include<stdio.h>
int main(){
	char arr[] = { 1, 2, 3, 4, 9, 6, 7, 8, 9, 10 };
	int i;
	//int max = 0;//�����һ������ȫ�Ǹ����Ļ�����ô�������0���ǲ��Ե�
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++){//i����ֱ�Ӵ�1��ʼ
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}
