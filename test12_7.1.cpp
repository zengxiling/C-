#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
int main(){
	char arr1[] = "welcome to my china";
	char arr2[] = "###################";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0])-2;//减2是因为从0开始，
	//int right = strlen(arr1)-1;和上一行一个效果
	//和字符串后面系统会自动加0
	while (left <= right)//小于等于的时候才有字符需要拿下来
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//每打印一次休息一秒，单位是ms,表示休息1000毫秒，
		//即1s，使用这个函数的话，要交头文件#include<windows.h>
		system("cls");//有个双引号别忘了
		//system()函数，执行系统命令，要加头文件#include<stdlib.h>
		//cls表示清空屏幕
		//休息一秒之后，将屏幕清空再打印
		left++;
		right--;
	}
	//因为屏幕被清空了，所以进行最后一次打印
	printf("%s\n", arr1);
	return 0;
}