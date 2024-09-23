#include <stdio.h>
#include <string.h>
int main(){
	int l;
	char str[60];
	long long int sum=0, r=1, m=1234567891;
	scanf("%d%s", &l, str);
	for(int i=0; i<l; i++){
		sum = (sum + (str[i] - 96) * r) % m;
		r=(r*31)%m;
	}
	printf("%lld\n", sum);
}
