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
	printf("����ʯͷ��2.0\n\n1717�� ����� ��Ʒ\n");
	printf("=====================================\n");
	printf("�Ƿ�ʼ?   1Ϊ��ʼ,0Ϊ����\n����:");
	scanf("%d",&t);
	if(t==1) {
		printf("�������������:");
		scanf("%s",s);
		Sleep(600);
		printf("�õ�!\n");
		printf("�������ֵ�����:");
		scanf("%s",p);
		printf("OK!\n");
		Sleep(600);
		Sleep(1000);
		printf("\n=====================================\n");
		printf("<%s>��<%s>��������ս!!!",p,s);
	}
	printf("\n=====================================\n");
	Sleep(800);
	while(t>=1) {
		printf("\n��ѡ��:\n1.����  2.ʯͷ  3.��\n��������:");
		scanf("%d",&sc);
		printf("%sʹ����",s);
		if(sc==1) printf("����!\n\n%s����������......",p);
		if(sc==2) printf("ʯͷ!\n\n%s��̧ͷ����......",p);
		if(sc==3) printf("��!\n\n%s����ͷ��Ь......",p);

		Sleep(1000);
		printf("\n%sת����!",p);
		Sleep(1000);
		int q=l3()+1;
		printf("\n%sʹ����",p);
		if(q==1) printf("����!");
		if(q==2) printf("ʯͷ!");
		if(q==3) printf("��!");
		Sleep(1000);
		if(sc==q) {
			printf("\n\nһ��ƽ��!");
			ping++;
		}
		if(sc==1) {
			if(q==2) {
				printf("\n\n%s����!",s);
				lose++;
			}
			if(q==3) {
				printf("\n\n%sӮ��!",s);
				win++;
			}
		}

		if(sc==2) {
			if(q==3) {
				printf("\n\n%s����!",s);
				lose++;
			}
			if(q==1) {
				printf("\n\n%sӮ��!",s);
				win++;
			}
		}

		if(sc==3) {
			if(q==1) {
				printf("\n\n%s����!",s);
				lose++;
			}
			if(q==2) {
				printf("\n\n%sӮ��!",s);
				win++;
			}
		}
		printf("\n====================\n");
		for(long long i=5;i<=10000000;i+=5){
			if(t==i) {
			printf("���Ѿ�����%d����!\n",t);
			break;
			}
		}
		if(t>=1) {
			Sleep(1200);
			printf("\n%s,��Ҫ����һ����?\n1Ϊ����,0Ϊ����\n����:",s);
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
		printf("\n���ʤ��Ϊ:");
		Sleep(1000);
		printf("%.2lf%%",v);
		}
		Sleep(500);
		if(v>=90) printf("\n������ŷ��!\n");
		else if(v<=10) printf("\n�����,���ѣ�\n");
		else if(v>10&&v<90) printf("\n�ٽ�����!\n");
		if(win==lose&&win==ping&&win!=0) printf("\n���ɹ�����֤�˸���ѧ. 1:1:1 !");
		printf("\n��л����֧��! �ټ�!\n�ش���л ������ ͬѧ!");
		Sleep(500);
	}
	return 0;
}
