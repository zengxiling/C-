#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����������в���x
int main(){
	int x = 9;
	int i = 0;
	int v[] = { 1,2,3,4,5,6,7,8};
	int sz = sizeof(v) / sizeof(v[0]);
	//printf("%d\n", sz);
	//for (int i = 0; i < sz; i++)�������int����ôi�ͱ���˾ֲ�������
	//��ʱ�ڵڶ���if�оͲ����ӡ�Ҳ�����Ԫ��
	for ( i = 0; i < sz; i++)
	{
		if (x == v[i]){
			 printf("�ҵ��ˣ����Ԫ�ص��±��ǣ�%d", i);
			break; }
		}
	if (i == sz)
		printf("û���ҵ���Ԫ��");
	return 0;
}
