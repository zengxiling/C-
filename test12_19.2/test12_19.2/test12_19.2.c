#define _CRT_SECURE_NO_WARNINGS 1
//字符串拷贝
#include<stdio.h>
int main(){
	char arr1[] = "xiao";
	char arr2[20] = "##########";
	strcpy(arr2, arr1);
	printf("%s", arr2);//将arr1的\0也拷贝过来了，打印的时候虽然arr2里面有#但是，遇到\0就不打印了
	return 0;
}