#include <stdio.h>
int main()
{
	int arr[1000][1000], x=1, y=1, cnt=1,i=1;
	long long int input, n;
	scanf("%lld", &input);
	n=input;
	while(n>0){
		cnt++;
		n-=i;
		i++;
	}
	//printf("%d\n", cnt);
	n=input;
	for(int k=1; k<cnt-1; k++){
		n-=k;
	}
	//printf("%lld\n", n);
	if(cnt%2!=0)
		printf("%lld/%lld\n", n, cnt-n);
	else
		printf("%lld/%lld\n", cnt-n, n);
}
