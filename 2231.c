#include <stdio.h>
int main()
{
	long int n, k=0, a;
	scanf("%ld", &n);
	for(long int i=1; i<n; i++){
		k=0;
		a=i;
		k+=i;
		while(a>0){
			k+=a%10;
			a=a/10;
		}
		if(k == n){
			printf("%ld\n", i);
			return 0;
		}
	}
	printf("0\n");
}
