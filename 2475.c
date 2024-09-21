#include <stdio.h>
#include <math.h>
int main()
{
	int a[5];
	int n=0;
	for(int i=0; i<5; i++){
		scanf("%d", &a[i]);
		n+=pow(a[i], 2);
	}
	printf("%d\n", n%10);
}
