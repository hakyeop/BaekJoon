#include <stdio.h>
int main()
{
	int a,b, min;
	scanf("%d%d", &a,&b);
	for(int i=1; i<=a && i<=b; i++){
		if(a%i==0 && b%i==0){
			min=i;
		}
	}
	printf("%d\n%d\n", min, (a*b)/min);
}
