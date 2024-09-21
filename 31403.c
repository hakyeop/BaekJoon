#include <stdio.h>
#include <math.h>
int main()
{
	int str[3],n,k=0;
	for(int i=0; i<3; i++)
		scanf("%d", &str[i]);
	printf("%d\n", str[0] + str[1] - str[2]);
	n=str[1];
	while(n>0){
		n=n/10;
		k++;
	}
	printf("%.0lf\n", str[0]*pow(10, k) + str[1] - str[2]);
}
