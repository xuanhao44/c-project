//IsRight.c
#include<stdio.h>
#include"IsRight.h"
//����:�ж���������ִ�С�Ƚ�
//����:numΪ����,guessΪ����
//����ֵ:�¶�Ϊ1,����Ϊ0
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