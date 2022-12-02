#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int ch=0;
	while ((ch = getchar() )!= EOF)
	{
		if (ch<'1' || ch>'9')//·ÇÊý×Ö×Ö·û
			continue;
		putchar(ch);
	}

	return 0;
}