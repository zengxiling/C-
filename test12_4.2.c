#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//�����������в���x,�ö��ֲ��ң����۰�����㷨
int main()
{
	int x = 7;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int left = 0;

	while (left <= right)
	{
		int mid;
		mid = (right + left) / 2;//�����mid���������棬�������ֻ�й��
		if (arr[mid] > x){
			right = mid - 1;

		}
		else if (arr[mid] < x){
			left = mid + 1;
		}
		else
		{
			printf("�ҵ���xԪ�أ������±�Ϊ��%d", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ�����Ԫ��");
	return 0;
}