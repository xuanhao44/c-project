//IsValidNum.c
#include"IsValidNum.h"
//����:�ж������Ƿ�Ϸ�
//����:num������
//����ֵ:�Ϸ����ط�0ֵ;����,����0;
int IsValidNum(int num) {
	if (num >= MIN_NUMBER && num <= MAX_NUMBER) {
		return 1;
	}
	else {
		return 0;
	}
}