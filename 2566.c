#include <stdio.h>
int main()
{
	int arr[9][9];
	int x=0, y=0;
	
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			scanf("%d", &arr[i][j]);
			if(arr[x][y] < arr[i][j]){
				x=i;
				y=j;
			}
		}
	}
	printf("%d\n", arr[x][y]);
	printf("%d %d\n", x+1,y+1);
}
