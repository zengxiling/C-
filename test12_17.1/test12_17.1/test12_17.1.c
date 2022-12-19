#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<time.h>//time函数
//1.电脑会生成一个随机数
//2.猜数字
//猜大了告诉你猜大了，猜小了告诉你猜小了
#include<stdio.h>
int game(){
	int guess;
	int ret;//将产生的随机数给ret存起来
	//拿时间戳来设置随机数的起点
	//time用来获取系统时间Gets the system time.
	//time_t time( time_t *timer );time函数返回一个time_t类型的
	//time_t转到定义为typedef __time64_t time_t; 意思是将__time64_t重命名

	//本质上time函数返回的是一个long型
	//srand(1);//void srand( unsigned int seed );用的头文件也是stdlib.h文件。
	
	//srand((unsigned int) time(NULL));放在主函数生成器生成一个就好，即起点只要一个
	//srand()里面要的是unsigned int ,所以我就将time强制转换成unsigned int,time里面需要的是一个指针，给一个null空指针即可
	//如果数字是固定的srand(1)那么给出的结果也是固定的,所以要给一个变的数字，时间总是在变的， 
	//时间戳可以转化出一个时间：当前计算机的时间-计算机的起始时间（1970.1.1.0时0分0秒）=（xxxx）秒，这个秒数就是时间戳，有了时间戳，就可以计算出当前的时间
	//ret = rand();//在调用rand函数之前要先调用srand()，如果不用srand,那么每次产生的结果和前一次都一样
	//srand:Sets a random starting point.设置一个随机的起点
	
	//ret = rand();///随机数在这个0~32767期间,如果%100，就会产生0~99之间的余数，
	ret = rand() % 100 + 1;

	//printf("随机数是%d\n", ret);
	while (1){
		printf("请输入你猜的数字：");
		scanf("%d", &guess);
		if (ret > guess){
			printf("猜小了");

		}
		else if (ret < guess)
		{
			printf("猜大了");
		}
		else
		{
			printf("恭喜你，猜对了哦\n");
			break;
		}
			
	}
	
}//不能将rand函数放到while循环里，不然就是边猜边变
int main(){
	int input;
	srand((unsigned int)time(NULL));
	//rand();
	//RAND_MAX;//随机数在这个0~32767期间
	do{
		
		printf("*************************************\n");
		printf("*********  1:play 0:exit ************\n");
		printf("*************************************\n");
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出程序");
		default:
			printf("输入有误，请重新输入\n");
			break;
		}

	} while (input);
	
	return 0;
}


