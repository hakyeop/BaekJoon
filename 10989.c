#include <stdio.h>
int main()
{
	int temp,n, arr[10001]={}, num;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &num);
		arr[num]++;
	}
	
	for(int i=0; i<10001; i++)
		while(arr[i]>0){
			printf("%d\n", i);
			arr[i]--;
		}
}
