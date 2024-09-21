#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	double a=2;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		a+=pow(2, i);
	}
	printf("%.0lf\n", pow(a, 2));
}
