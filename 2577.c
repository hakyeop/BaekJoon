#include <stdio.h>
int main()
{
	int a,b,c, n=0;
	int num[10]={};
	scanf("%d%d%d", &a,&b,&c);
	n=a*b*c;
	while(n>0){
		num[(n%10)]++;
		n=n/10;
	}
	for(int i=0; i<10; i++)
		printf("%d\n", num[i]);
}
