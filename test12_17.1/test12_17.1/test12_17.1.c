#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<time.h>//time����
//1.���Ի�����һ�������
//2.������
//�´��˸�����´��ˣ���С�˸������С��
#include<stdio.h>
int game(){
	int guess;
	int ret;//���������������ret������
	//��ʱ�������������������
	//time������ȡϵͳʱ��Gets the system time.
	//time_t time( time_t *timer );time��������һ��time_t���͵�
	//time_tת������Ϊtypedef __time64_t time_t; ��˼�ǽ�__time64_t������

	//������time�������ص���һ��long��
	//srand(1);//void srand( unsigned int seed );�õ�ͷ�ļ�Ҳ��stdlib.h�ļ���
	
	//srand((unsigned int) time(NULL));��������������������һ���ͺã������ֻҪһ��
	//srand()����Ҫ����unsigned int ,�����Ҿͽ�timeǿ��ת����unsigned int,time������Ҫ����һ��ָ�룬��һ��null��ָ�뼴��
	//��������ǹ̶���srand(1)��ô�����Ľ��Ҳ�ǹ̶���,����Ҫ��һ��������֣�ʱ�������ڱ�ģ� 
	//ʱ�������ת����һ��ʱ�䣺��ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.0ʱ0��0�룩=��xxxx���룬�����������ʱ���������ʱ������Ϳ��Լ������ǰ��ʱ��
	//ret = rand();//�ڵ���rand����֮ǰҪ�ȵ���srand()���������srand,��ôÿ�β����Ľ����ǰһ�ζ�һ��
	//srand:Sets a random starting point.����һ����������
	
	//ret = rand();///����������0~32767�ڼ�,���%100���ͻ����0~99֮���������
	ret = rand() % 100 + 1;

	//printf("�������%d\n", ret);
	while (1){
		printf("��������µ����֣�");
		scanf("%d", &guess);
		if (ret > guess){
			printf("��С��");

		}
		else if (ret < guess)
		{
			printf("�´���");
		}
		else
		{
			printf("��ϲ�㣬�¶���Ŷ\n");
			break;
		}
			
	}
	
}//���ܽ�rand�����ŵ�whileѭ�����Ȼ���Ǳ߲±߱�
int main(){
	int input;
	srand((unsigned int)time(NULL));
	//rand();
	//RAND_MAX;//����������0~32767�ڼ�
	do{
		
		printf("*************************************\n");
		printf("*********  1:play 0:exit ************\n");
		printf("*************************************\n");
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�����");
		default:
			printf("������������������\n");
			break;
		}

	} while (input);
	
	return 0;
}


