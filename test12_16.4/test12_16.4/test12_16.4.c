#define _CRT_SECURE_NO_WARNINGS 1
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ���������Ҳ���
#include<stdio.h>
int main(){
	int arr[] = {1,2,3,4,5,6,7,8};
	int left=0;
	int right;
	int x;
	printf("������һ��������ҵ�����");
	scanf("%d", &x);
	int sz = sizeof(arr) / sizeof(arr[0]);
	right = sz - 1;
	int mid;
	while (right >= left){
		mid = (right + left) / 2;
		if (x > arr[mid])
		{
			left = mid + 1;
		}
		else if (x < arr[mid]){
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ���������±���%d\n", mid);
			break;
		}
	}
	if (right < left){ printf("��Ǹ��û���ҵ�����\n"); }
	return 0;
}