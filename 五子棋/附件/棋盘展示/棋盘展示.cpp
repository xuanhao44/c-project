#include<cstdio>
using namespace std;
int map[30][30]; 
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
int main(){
	qp();
	return 0;
} 
