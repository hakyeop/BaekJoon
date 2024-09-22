#include <stdio.h>
int main()
{
	int m,n,min,add=0,cnt;
	scanf("%d%d", &n, &m);
	min=m;
	for(int i=n; i<=m; i++){
		cnt=0;
		for(int j=2; j<i; j++){
			if(i%j==0)
				cnt++;
		}
		if(cnt == 0 && i>1){
			add+=i;
			if(min > i)
				min=i;
		}
	}
	if(add>0)
		printf("%d\n%d\n", add, min);
	else
		printf("-1\n");
}
