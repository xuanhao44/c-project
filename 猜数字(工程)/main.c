//main.c
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"guessmain.h"//���� ͷ�ļ�
int main(void) {
	int num;
	char reply;
	srand(time(0));
	do {
		num = numaker();//���������
		guess(num);//�ж����ֺ���
		printf("Do you want to continue?\n");
		scanf_s(" %c", &reply);
	} while (reply=='y');
	return 0;
}