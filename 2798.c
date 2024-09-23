#include <stdio.h>
int main(){
	int n;
	long int m, max=0, sum;
	scanf("%d%ld", &n, &m);
	int arr[n];
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			for(int k=j+1; k<n; k++){
				sum=arr[i]+arr[j]+arr[k];
				if(max < sum && sum <= m){
					max=sum;
				}
			}
		}
	}
	printf("%ld\n", max);
}
