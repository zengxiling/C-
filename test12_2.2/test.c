#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int day;
	printf("请输入1~7\n");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("今天星期一\n");
		break;
	case 2:
		printf("今天星期二\n");
		break;
	case 3:
		printf("今天星期三\n");
		break;
	case 4:
		printf("今天星期四\n");
		break;
	case 5:
		printf("今天星期五\n");
		break;
	case 6:
		printf("今天星期六\n");
		break;
	case 7:
		printf("今天星期天\n");
		break;
	
		/*if (1==day)
		printf("星期1");
		else if (2==day)
		printf("星期2");
		else if (3 == day)
		printf("星期3");
		else if (4 == day)
		printf("星期4");*/
	}
			return 0;
}