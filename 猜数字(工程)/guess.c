//guess.c
#include<stdio.h>
#include"IsRight.h"
#include"IsValidNum.h"
//功能:判断数字
//参数:计算机生成的数
//返回值:无
void guess(int num) {
	int guess;//用户输入
	int count = 0;//猜测次数
	int right = 0;//对错
	int ret;//scanf()返回值
	do {
		printf("Try %d:", count + 1);
		ret = scanf("%d", &guess);//判断输入合法
		while (ret !=1|| !IsValidNum(guess)) {
			printf("Input error!\n");
			while (getchar() != '\n');//清除缓存区
			printf("Try %d:", count + 1);
			ret = scanf("%d", &guess);
		}
		count++;
		right = IsRight(num, guess);
	} while (!right && count < MAX_TIMES);
	if (right) {
		printf("YOU WIN!\n");
	}
	else {
		printf("YOU FAILED!\n");
	}
}