#include <stdio.h>
int main()
{
	int n,k,j;
	int a=1, b=1;
	scanf("%d%d", &n, &k);
	j=n-k;
	for(int i=1; i<=k; i++)
		b=b*i;
	for(int i=1; i<=j; i++)
		b=b*i;
	for(int i=1; i<=n; i++)
		a=a*i;
	printf("%d\n", a/b);
}
