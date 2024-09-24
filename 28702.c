#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long int num[3]={}, n=0;
	char str[3][10];
	for(int i=0; i<3; i++)
		scanf("%s", str[i]);
	for(int i=0; i<3; i++){
		num[i] = atoi(str[i]);
		if(num[i] > 0){
			n=num[i]+(3-i);
		}
	}
	if(n%3==0)
		printf("Fizz");
	if(n%5==0)
		printf("Buzz");
	if(n%3!=0 && n%5!=0)
		printf("%lld\n", n);
	printf("\n");
}
