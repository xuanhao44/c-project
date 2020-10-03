//IsValidNum.c
#include"IsValidNum.h"
//功能:判断输入是否合法
//参数:num是输入
//返回值:合法返回非0值;否则,返回0;
int IsValidNum(int num) {
	if (num >= MIN_NUMBER && num <= MAX_NUMBER) {
		return 1;
	}
	else {
		return 0;
	}
}