#define _CRT_SECURE_NO_WARNINGS 1
//��ӡ����
//дһ�����룬��ӡ100~200֮�������
#include<stdio.h>
int main()
{
	int i;
	int j;
	int count=0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <i; j++){
			if (i%j == 0)
				break;
		}
		if (j==i )//
			{ 
			printf("%d ", i);
			count++;
			}
	}
	printf("\n��������һ����%d������\n",count);
	return 0;
}