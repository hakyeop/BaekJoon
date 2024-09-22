#include <stdio.h>
int main()
{
	int n, cnt=0;
	while(1){
		cnt=0;
		scanf("%d", &n);
		if(n==-1)
			break;
		for(int i=1; i<n; i++){
			if(n%i==0)
				cnt+=i;
		}
		if(cnt != n)
			printf("%d is NOT perfect.\n", n);
		else{
			printf("%d = 1", n);
			for(int i=2; i<n; i++){
				if(n%i==0)
					printf(" + %d", i);
			}
			printf("\n");
		}
	}
}
