#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
	int x=strlen((const char*)a);
	int y=strlen((const char*)b);
	if(x<y)
		return -1;
	else if(x>y)
		return 1;
	else
	{
		return strcmp((char*)a,(char*)b);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	char str[n][55];
	
	for(int i=0; i<n; i++)
		scanf("%s", str[i]);
	
	qsort(str, n, sizeof(str[0]), compare);
	
	for(int i=0; i<n; i++)
		if(strcmp(str[i], str[i+1]) != 0)
			printf("%s\n", str[i]);
}

//qsort 처음 써보는데 상당히 어렵네요
