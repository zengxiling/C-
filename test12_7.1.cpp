#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
int main(){
	char arr1[] = "welcome to my china";
	char arr2[] = "###################";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0])-2;//��2����Ϊ��0��ʼ��
	//int right = strlen(arr1)-1;����һ��һ��Ч��
	//���ַ�������ϵͳ���Զ���0
	while (left <= right)//С�ڵ��ڵ�ʱ������ַ���Ҫ������
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//ÿ��ӡһ����Ϣһ�룬��λ��ms,��ʾ��Ϣ1000���룬
		//��1s��ʹ����������Ļ���Ҫ��ͷ�ļ�#include<windows.h>
		system("cls");//�и�˫���ű�����
		//system()������ִ��ϵͳ���Ҫ��ͷ�ļ�#include<stdlib.h>
		//cls��ʾ�����Ļ
		//��Ϣһ��֮�󣬽���Ļ����ٴ�ӡ
		left++;
		right--;
	}
	//��Ϊ��Ļ������ˣ����Խ������һ�δ�ӡ
	printf("%s\n", arr1);
	return 0;
}