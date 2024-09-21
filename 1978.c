#include <stdio.h>
int main()
{
	int n, cnt=0, i, f;
	scanf("%d", &n);
	for(int j=0; j<n; j++){
		f=0;
		scanf("%d", &i);
		if(i != 1){
			for(int k=2; k<i; k++){
				if(i%k==0)
					f++;
			}
			if(f==0)
				cnt++;
		}
	}
	printf("%d\n", cnt);
}
