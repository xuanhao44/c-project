//main.c
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"guessmain.h"//猜数 头文件
int main(void) {
	int num;
	char reply;
	srand(time(0));
	do {
		num = numaker();//随机数函数
		guess(num);//判断数字函数
		printf("Do you want to continue?\n");
		scanf_s(" %c", &reply);
	} while (reply=='y');
	return 0;
}