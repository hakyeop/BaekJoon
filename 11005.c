#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int j=0;
	int b;
	long int st;
	char str[30];
	int rstr[30]={};
	
	scanf("%s%d", str, &b);
	st = atoi(str);
	while(st>0){
		rstr[j]=st%b;
		st=st/b;
		j++;
		//printf("%d ", rstr[i]);
	}
	for(int i=j-1; i>=0; i--){
		if(rstr[i]>=10){
			printf("%c", 55+rstr[i]);
		}
		else{
			printf("%d", rstr[i]);
		}
	}
}
