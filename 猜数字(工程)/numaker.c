//numaker.c
#include<stdio.h>
#include<assert.h>
#include"numaker.h"
//����:���������
//����:��
//����ֵ:�����
int numaker(void) {
	int num;
	num = (rand() % (MAX_NUMBER - MIN_NUMBER + 1)) + MIN_NUMBER;
	assert(num >= MIN_NUMBER && num <= MAX_NUMBER);
	return num;
}