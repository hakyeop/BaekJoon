#include<stdio.h>
int main()
{
	int j;
	
	int ch[4] = {25, 10, 5, 1};
	int mon;
	scanf("%d", &j);
	int change[j][4];
	for(int k=0; k<j; k++){
		scanf("%d", &mon);
		for(int i=0; i<4; i++){
			change[k][i] = mon/ch[i];
			mon=mon%ch[i];
		}
	}
	for(int i=0; i<j; i++){
		for(int k=0; k<4; k++){
			printf("%d ", change[i][k]);
		}
		printf("\n");
	}
}
