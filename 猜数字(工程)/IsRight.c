//IsRight.c
#include<stdio.h>
#include"IsRight.h"
//功能:判断输入和数字大小比较
//参数:num为数字,guess为输入
//返回值:猜对为1,否则为0
int IsRight(int num, const int guess) {
	if (guess < num) {
		printf("WRONG! TOO SMALL!\n");
		return 0;
	}
	else if (guess > num) {
		printf("WRONG! TOO BIG!\n");
		return 0;
	}
	else return 1;
}