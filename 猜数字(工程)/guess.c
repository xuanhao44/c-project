//guess.c
#include<stdio.h>
#include"IsRight.h"
#include"IsValidNum.h"
//����:�ж�����
//����:��������ɵ���
//����ֵ:��
void guess(int num) {
	int guess;//�û�����
	int count = 0;//�²����
	int right = 0;//�Դ�
	int ret;//scanf()����ֵ
	do {
		printf("Try %d:", count + 1);
		ret = scanf("%d", &guess);//�ж�����Ϸ�
		while (ret !=1|| !IsValidNum(guess)) {
			printf("Input error!\n");
			while (getchar() != '\n');//���������
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