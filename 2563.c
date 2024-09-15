#include <stdio.h>
int main()
{
	int arr[100][100]={};
	int a, area=0,x,y;
	scanf("%d", &a);
	for(int b=0; b<a; b++){
		scanf("%d%d", &x,&y);
		for(int i=0; i<10; i++){
			for(int j=0; j<10; j++){
				arr[x+i][y+j]++;
			}
		}
	}
	
	for(int i=0; i<100; i++){
		for(int j=0; j<100; j++){
			if(arr[i][j] != 0)
				area++;
		}
	}
	printf("%d\n", area);
}
