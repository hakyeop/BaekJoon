#include <stdio.h>
int main(){
	int x,y;
	scanf("%d%d", &x, &y);
	int a[100][100];
	int b[100][100];
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			scanf("%d", &a[i][j]);
			///printf("\n%d\n", a[x][y]);
		}
	}
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			scanf("%d", &b[i][j]);
			//printf("\n%d\n", b[x][y]);
		}
	}
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
