#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int rank[50]={};
	int arr[50][2];
	for(int i=0; i<n; i++){
		for(int j=0; j<2; j++){
			scanf("%d", &arr[i][j]);
		}
		rank[i]++;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i!=j){
				if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
					rank[i]++;
			}
		}
	}
	for(int i=0; i<n; i++)
		printf("%d ", rank[i]);
}
