#include <stdio.h>
int main()
{
	int n, f=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(n==(i*3+j*5)){
				printf("%d\n", i+j);
				return 0;
			}
		}
	}
	printf("-1\n");
}
