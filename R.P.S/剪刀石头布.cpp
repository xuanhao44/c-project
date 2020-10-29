#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
short l3() {
	return rand()%3;
}
int sc,win,lose,ping,t,e;
char s[300],p[300];
int main() {
	srand((char)(time(NULL)));
	printf("剪刀石头布2.0\n\n1717班 刘玄昊 出品\n");
	printf("=====================================\n");
	printf("是否开始?   1为开始,0为结束\n输入:");
	scanf("%d",&t);
	if(t==1) {
		printf("请键入您的姓名:");
		scanf("%s",s);
		Sleep(600);
		printf("好的!\n");
		printf("请键入对手的姓名:");
		scanf("%s",p);
		printf("OK!\n");
		Sleep(600);
		Sleep(1000);
		printf("\n=====================================\n");
		printf("<%s>向<%s>发起了挑战!!!",p,s);
	}
	printf("\n=====================================\n");
	Sleep(800);
	while(t>=1) {
		printf("\n请选择:\n1.剪刀  2.石头  3.布\n请输入编号:");
		scanf("%d",&sc);
		printf("%s使出了",s);
		if(sc==1) printf("剪刀!\n\n%s正背对着你......",p);
		if(sc==2) printf("石头!\n\n%s正抬头望天......",p);
		if(sc==3) printf("布!\n\n%s正低头看鞋......",p);

		Sleep(1000);
		printf("\n%s转身了!",p);
		Sleep(1000);
		int q=l3()+1;
		printf("\n%s使出了",p);
		if(q==1) printf("剪刀!");
		if(q==2) printf("石头!");
		if(q==3) printf("布!");
		Sleep(1000);
		if(sc==q) {
			printf("\n\n一个平局!");
			ping++;
		}
		if(sc==1) {
			if(q==2) {
				printf("\n\n%s输了!",s);
				lose++;
			}
			if(q==3) {
				printf("\n\n%s赢了!",s);
				win++;
			}
		}

		if(sc==2) {
			if(q==3) {
				printf("\n\n%s输了!",s);
				lose++;
			}
			if(q==1) {
				printf("\n\n%s赢了!",s);
				win++;
			}
		}

		if(sc==3) {
			if(q==1) {
				printf("\n\n%s输了!",s);
				lose++;
			}
			if(q==2) {
				printf("\n\n%s赢了!",s);
				win++;
			}
		}
		printf("\n====================\n");
		for(long long i=5;i<=10000000;i+=5){
			if(t==i) {
			printf("您已经玩了%d局了!\n",t);
			break;
			}
		}
		if(t>=1) {
			Sleep(1200);
			printf("\n%s,还要再来一局吗?\n1为继续,0为结束\n输入:",s);
			int k;
			scanf("%d",&k);
			if(k==1) {
				t++;
				system("cls");
			} else {
				e=t;
				t=0;
			}
		}
	}
	if(t==0) {
		double v=double(win)/e*100;
		if(win!=0||lose!=0||ping!=0) {
		printf("\n=================================\n");
		printf("\n你的胜率为:");
		Sleep(1000);
		printf("%.2lf%%",v);
		}
		Sleep(500);
		if(v>=90) printf("\n您真是欧皇!\n");
		else if(v<=10) printf("\n别灰心,朋友！\n");
		else if(v>10&&v<90) printf("\n再接再厉!\n");
		if(win==lose&&win==ping&&win!=0) printf("\n您成功的验证了概率学. 1:1:1 !");
		printf("\n感谢您的支持! 再见!\n特此鸣谢 胡子翼 同学!");
		Sleep(500);
	}
	return 0;
}
