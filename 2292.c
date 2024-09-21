#include <stdio.h>
int main()
{
	long long int n;
	int cnt=1, i=1;
	scanf("%lld", &n);
	while(n>1){
		n-=6*i;
		i++;
		cnt++;
	}
	printf("%d\n", cnt);
}
