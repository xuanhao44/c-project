#include<cstdio>
#include<windows.h>
#include<stdlib.h>
using namespace std;
int x,y;//������� 
int map[17][17];//���� 
char b[20],w[20];//���� 
int ok=1;//������,1Ϊ��������,2Ϊ��������,3Ϊ�ܿ����� 
int c;
void qp(){
	printf("00 ");
	for(int i=1;i<=15;i++)
	printf(" %02d ",i);
	printf("\n");
	for(int i=1;i<=15;i++){
		printf("%02d ",i);
		for(int j=1;j<=15;j++){
			if(map[j][i]==1) printf("(��)");
			else if(map[j][i]==2) printf("(��)");
			else printf("(  )");
			if(j==15) printf("\n");
		}
	}
}
bool pd(int x,int y,int t){
	int step=1;
	int b=x,c=y;
	//����
	if(map[b-1][c]==t||map[b+1][c]==t){
		while(b>=1&&map[b-1][c]==t){
			b--;
			step++;
		}
		b=x;
		while(b<=15&&map[b+1][c]==t){
			b++;
			step++;
		}
		b=x;
		if(step>=5) return 1;
	else step=1;
	} 
	
	//����
	if(map[b][c-1]==t||map[b][c+1]==t){
		while(c>=1&&map[b][c-1]==t){
			c--;
			step++;
		}
		c=y;
		while(c<=15&&map[b][c+1]==t){
			c++;
			step++; 
		}
		c=y;
		if(step>=5) return 1;
	else step=1;
	} 
	
	//��б
	if(map[b-1][c-1]==t||map[b+1][c+1]==t){
		while(b>=1&&c>=1&&map[b-1][c-1]==t){
			b--; c--;
			step++;
		}
		b=x; c=y;
		while(b<=15&&c<=15&&map[b+1][c+1]==t){
			b++; c++;
			step++;
		}
		b=x; c=y;
		if(step>=5) return 1;
	else step=1;
	} 
	
	//��б
	if(map[b+1][c-1]==t||map[b-1][c+1]==t){
		while(b<=15&&c>=1&&map[b+1][c-1]==t){
			b++; c--;
			step++;
		}
		b=x; c=y;
		while(b>=1&&c<=15&&map[b-1][c+1]==t){
			b--; c++;
			step++;
		}
		b=x; c=y;
		if(step>=5) return 1;
	else step=1;
	} 
	
	if(step==1) return 0;
}
int main(){
	//�û�����
	printf("=====================================\n");
	printf("������1.1\n");
	Sleep(500);
	printf("1708�� ����� ��Ʒ\n");
	printf("=====================================\n"); 
	Sleep(1500); 
	printf("�����������������˶��Ὰ����Ŀ֮һ����һ�����˶��ĵĴ�������������Ϸ,\n"); 
	Sleep(500);
	printf("˫���ֱ�ʹ�úڰ���ɫ�����ӣ������������Ŵ������γ�5�������߻�ʤ��\n");
	Sleep(500);  
	printf("=====================================\n");
	//��������
	printf("����������ڷ��Ͱ׷�������: ");
	scanf("%s%s",b,w);
	for(int i=1;i<=37;i++){
	printf("=");
	Sleep(10);
	if(i==37) printf("\n");
	}
	printf("���Ͽ�ʼ��ս\n");
	for(int i=1;i<=37;i++){
	printf("=");
	Sleep(10);
	if(i==37) printf("\n");
	}
	while(ok!=3){
	while(ok==1){
	//������(����������)
	printf("=====================================\n");
	printf("��%s(�ڷ�)����,����������(һ��Ϊ����): ",b); 
	scanf("%d%d",&x,&y);
	printf("=====================================\n");
	while(map[x][y]!=0||x<1||x>15||y<1||y>15){
		printf("������Ϸ�������: ");
		scanf("%d%d",&x,&y); 
		printf("=====================================\n");
	}
	map[x][y]=1; 
	//չʾ����
	qp();
	//�жϺ� 
	if(pd(x,y,1)==1) {
		printf("=====================================\n");
		printf("%s(�ڷ�)ʤ��!\n",b);
		printf("=====================================\n");
		ok=1;//���ܰ׷�ʤ�����Ǻڷ�ʤ�����ص���
		memset(map,0,sizeof(map)); 
		printf("�����������ּ�����ս,����������ĸ������Ϸ:"); 
		if(scanf("%d",&c)==1){
		ok=1;	
		system("cls");
		}
		else ok=3;
		//ͳ�� 
	}
	else ok=2;
	}
	while(ok==2){
	//������
	printf("=====================================\n");
	printf("��%s(�׷�)����,����������(һ��Ϊ����): ",w); 
	scanf("%d%d",&x,&y);
	printf("=====================================\n");
	while(map[x][y]!=0||x<1||x>15||y<1||y>15){
		printf("������Ϸ�������: ");
		scanf("%d%d",&x,&y); 
		printf("=====================================\n");
	}
	map[x][y]=2;
	//չʾ����
	qp();
	//�жϰ� 
	if(pd(x,y,2)==1) {
		printf("=====================================\n");
		printf("%s(�׷�)ʤ��!\n",w);
		printf("=====================================\n");
		memset(map,0,sizeof(map));
		printf("�����������ּ�����ս,����������ĸ������Ϸ:"); 
		if(scanf("%d",&c)==1){
		ok=1;	
		system("cls");
		}
		else ok=3;
		//ͳ�� 
	}
	else ok=1;
	}
	} 
	printf("=====================================\n");
	printf("\n��л����֧��! �ټ�!\n");
	return 0;
} 
