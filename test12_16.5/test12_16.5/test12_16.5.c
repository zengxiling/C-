#define _CRT_SECURE_NO_WARNINGS 1
//һ���˵�
#include<stdio.h>
void hello(){
	printf("��ã�������ǳ����ɰ���С����Ŷ\n");
}
int main(){
	int a=1;
	
	while (1)
	{
		printf("-------------����ѡ��-----------\n");
		printf("1:���ز˵� \n");
		printf("2:ִ�в��� \n");
		printf("3:�˳�����\n");
		printf("--------------------------------\n");
		printf("�����ּ�ѡ��Ҫִ�еĲ���: ");
		scanf("%d", &a);
		printf("\n");
		//����3����ѭ�����˳�����
		if (a == 3)
			break;
		switch (a)
		{
		case 1:break;//ֱ������switchѭ��
		case 2:hello(); break;
		default:printf("��ã���������ֲ���ȷ��������1~3\n");
			//���������������siwtch��䣬������һ��ѭ��
			break;
		}
	}
		
	return 0;
}