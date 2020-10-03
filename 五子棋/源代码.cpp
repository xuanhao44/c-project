#include<cstdio>
#include<windows.h>
#include<stdlib.h>
using namespace std;
int x,y;//点的坐标 
int map[17][17];//棋盘 
char b[20],w[20];//姓名 
int ok=1;//控制器,1为黑启动器,2为白启动器,3为总控制器 
int c;
void qp(){
	printf("00 ");
	for(int i=1;i<=15;i++)
	printf(" %02d ",i);
	printf("\n");
	for(int i=1;i<=15;i++){
		printf("%02d ",i);
		for(int j=1;j<=15;j++){
			if(map[j][i]==1) printf("(○)");
			else if(map[j][i]==2) printf("(●)");
			else printf("(  )");
			if(j==15) printf("\n");
		}
	}
}
bool pd(int x,int y,int t){
	int step=1;
	int b=x,c=y;
	//左右
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
	
	//上下
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
	
	//左斜
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
	
	//右斜
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
	//用户界面
	printf("=====================================\n");
	printf("五子棋1.1\n");
	Sleep(500);
	printf("1708班 刘玄昊 出品\n");
	printf("=====================================\n"); 
	Sleep(1500); 
	printf("五子棋是世界智力运动会竞技项目之一，是一种两人对弈的纯策略型棋类游戏,\n"); 
	Sleep(500);
	printf("双方分别使用黑白两色的棋子，下在棋盘括号处，先形成5子连线者获胜。\n");
	Sleep(500);  
	printf("=====================================\n");
	//输入姓名
	printf("请依次输入黑方和白方的名称: ");
	scanf("%s%s",b,w);
	for(int i=1;i<=37;i++){
	printf("=");
	Sleep(10);
	if(i==37) printf("\n");
	}
	printf("马上开始对战\n");
	for(int i=1;i<=37;i++){
	printf("=");
	Sleep(10);
	if(i==37) printf("\n");
	}
	while(ok!=3){
	while(ok==1){
	//黑下棋(输入点的坐标)
	printf("=====================================\n");
	printf("请%s(黑方)下棋,请输入坐标(一定为数字): ",b); 
	scanf("%d%d",&x,&y);
	printf("=====================================\n");
	while(map[x][y]!=0||x<1||x>15||y<1||y>15){
		printf("请输入合法的坐标: ");
		scanf("%d%d",&x,&y); 
		printf("=====================================\n");
	}
	map[x][y]=1; 
	//展示棋盘
	qp();
	//判断黑 
	if(pd(x,y,1)==1) {
		printf("=====================================\n");
		printf("%s(黑方)胜利!\n",b);
		printf("=====================================\n");
		ok=1;//不管白方胜利还是黑方胜利都回到黑
		memset(map,0,sizeof(map)); 
		printf("输入任意数字继续对战,输入任意字母结束游戏:"); 
		if(scanf("%d",&c)==1){
		ok=1;	
		system("cls");
		}
		else ok=3;
		//统计 
	}
	else ok=2;
	}
	while(ok==2){
	//白下棋
	printf("=====================================\n");
	printf("请%s(白方)下棋,请输入坐标(一定为数字): ",w); 
	scanf("%d%d",&x,&y);
	printf("=====================================\n");
	while(map[x][y]!=0||x<1||x>15||y<1||y>15){
		printf("请输入合法的坐标: ");
		scanf("%d%d",&x,&y); 
		printf("=====================================\n");
	}
	map[x][y]=2;
	//展示棋盘
	qp();
	//判断白 
	if(pd(x,y,2)==1) {
		printf("=====================================\n");
		printf("%s(白方)胜利!\n",w);
		printf("=====================================\n");
		memset(map,0,sizeof(map));
		printf("输入任意数字继续对战,输入任意字母结束游戏:"); 
		if(scanf("%d",&c)==1){
		ok=1;	
		system("cls");
		}
		else ok=3;
		//统计 
	}
	else ok=1;
	}
	} 
	printf("=====================================\n");
	printf("\n感谢您的支持! 再见!\n");
	return 0;
} 
