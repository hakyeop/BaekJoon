#include <stdio.h>
int main()
{
	int k;
	int h,w,n;
	scanf("%d", &k);
	for(int i=0; i<k; i++){
		scanf("%d %d %d", &h, &w, &n);
        if(n%h==0)
			printf("%d%02d\n", h, n/h);
		else
			printf("%d%02d\n", n%h, n/h+1);
	}
}
