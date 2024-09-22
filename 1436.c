#include <stdio.h>
#include <math.h>
int main(){
	int cnt=0, a, n;
	long long int r;
	scanf("%d", &n);
	for(long long int i=665; cnt<n; i++){
		a=i;
		while(a>0){
			if(a%10==6 && (a/10)%10==6 && (a/100)%10==6){
				cnt++;
				r=i;
				break;
			}
			a=a/10;
		}
	}
	printf("%lld\n", r);
}
