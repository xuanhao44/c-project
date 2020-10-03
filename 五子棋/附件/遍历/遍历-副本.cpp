#include<cstdio>
using namespace std;
int map[30][30];
int pd(int x,int y,int t){
	int step=1;
	int b=x,c=y;
	printf("%d\n",t);
	//左右
	if(map[b-1][c]==t||map[b+1][c]==t){
		while(b>=1&&map[b-1][c]==t){
			b--;
			step++;
		}
		printf("1 %d\n",step);
		b=x;
		while(b<=15&&map[b+1][c]==t){
			b++;
			step++;
		}
		printf("2 %d\n",step);
		b=x;
		if(step>=5) return 5;
	else step=1;
	} 
	
	//上下
	if(map[b][c-1]==t||map[b][c+1]==t){
		while(c>=1&&map[b][c-1]==t){
			c--;
			step++;
		}
		printf("3 %d\n",step);
		c=y;
		while(c<=15&&map[b][c+1]==t){
			c++;
			step++; 
		}
		printf("4 %d\n",step);
		c=y;
		if(step>=5) return 5;
	else step=1;
	} 
	
	//左斜
	if(map[b-1][c-1]==t&&map[b+1][c+1]==t){
		while(b>=1&&c>=1&&map[b-1][c-1]==t){
			b--; c--;
			step++;
			
		}
		printf("5 %d\n",step);
		b=x; c=y;
		while(b<=15&&c<=15&&map[b+1][c+1]==t){
			b++; c++;
			step++;
		}
		printf("6 %d\n",step);
		b=x; c=y;
		if(step>=5) return 5;
	else step=1;
	} 
	
	//右斜
	if(map[b+1][c-1]==t||map[b-1][c+1]==t){
		while(b<=15&&c>=1&&map[b+1][c-1]==t){
			b++; c--;
			step++;
		}
		printf("7 %d\n",step);
		b=x; c=y;
		while(b>=1&&c<=15&&map[b-1][c+1]==t){
			b--; c++;
			step++;
		}
		printf("8 %d\n",step);
		b=x; c=y;
		if(step>=5) return 5;
	else step=1;
	}
	if(step==1) return 0;//问题的根源 
}
int main(){
	for(int i=1;i<=15;i++)
	for(int j=1;j<=15;j++)
	scanf("%d",&map[j][i]);
	
	/*
	for(int i=1;i<=15;i++)
	for(int j=1;j<=15;j++){
	printf("%d",map[j][i]);
	if(j==15) printf("\n");
	}
	*/
	//printf("%d\n",step);
	//printf("%d",5);
	printf("%d",pd(2,1,2));
	
	return 0;
} 
