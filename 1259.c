#include <stdio.h>
#include <string.h>
int main()
{
	char str[10], rstr[10];
	long int n;
	while(1){
		scanf("%s", str);
		if(str[0]=='0')
			return 0;
		n=strlen(str)-1;
		for(int i=0; i<=n; i++){
			rstr[i]=str[n-i];
			rstr[i+1]='\0';
		}
		if(strcmp(str, rstr) == 0)
			printf("yes\n");
		else
			printf("no\n");
	}
}
