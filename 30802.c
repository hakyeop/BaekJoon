#include <stdio.h>
int main()
{
	int n, size[6], t, p;
	int cnt=0;
	scanf("%d", &n);
	for(int i=0; i<6; i++)
		scanf("%d", &size[i]);
	scanf("%d%d", &t, &p);
	for(int i=0; i<6; i++){
		cnt+=size[i]/t;
		if(size[i]%t != 0)
			cnt++;
	}
	printf("%d\n%d %d\n", cnt, n/p, n%p);
}
