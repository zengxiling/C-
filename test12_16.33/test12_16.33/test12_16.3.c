#define _CRT_SECURE_NO_WARNINGS 1
//9.�˷��ھ���//�Լ�д��
#include<stdio.h>
int main(){
	int i;
	int j;
	int sum = 1;
	for (i = 1; i <= 9; i++){ 
		for (j = 1; j <= i; j++){
			sum = i*j;
			printf("%d*%d=%-2d  ", i,j,sum);//-2d��ʾ��λ�����
			if (i == j)
				printf("\n");
		}
		//���û��if�Ļ����Լ���������ط�������һ��
		//printf("\n");
	}
	return 0;
}