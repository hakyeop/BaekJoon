#include <stdio.h>
int main()
{
	int arr[15][15]={};
	int t,k,n;
	scanf("%d", &t);
	
	for(int i=0; i<15; i++){
		arr[i][1]=1;
		arr[0][i]=i;
	}
	
	for(int i=1; i<15; i++){
		for(int j=1; j<15; j++){
			arr[i][j]=arr[i][j-1]+arr[i-1][j];
		}
	}
	
	for(int i=0; i<t; i++){
		scanf("%d%d", &k, &n);
		printf("%d\n", arr[k][n]);
	}
}
