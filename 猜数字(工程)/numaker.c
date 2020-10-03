//numaker.c
#include<stdio.h>
#include<assert.h>
#include"numaker.h"
//功能:生成随机数
//参数:无
//返回值:随机数
int numaker(void) {
	int num;
	num = (rand() % (MAX_NUMBER - MIN_NUMBER + 1)) + MIN_NUMBER;
	assert(num >= MIN_NUMBER && num <= MAX_NUMBER);
	return num;
}