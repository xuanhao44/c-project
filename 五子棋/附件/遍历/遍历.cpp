#include<cstdio>
using namespace std;
int map[30][30];
bool pd(int x,int y,int t){
	int step=1;
	int b=x,c=y;
	//◊Û”“
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
	
	//…œœ¬
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
	
	//◊Û–±
	if(map[b-1][c-1]==t&&map[b+1][c+1]==t){
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
	
	//”“–±
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
	//printf("%d",step);
	printf("%d",pd(2,1,2));
	
	return 0;
} 
