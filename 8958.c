#include <stdio.h>
#include <string.h>
int main()
{
	int i, add=0, n=1;
	char input[90];
	scanf("%d", &i);
	for(int j=0; j<i; j++){
		add=0;
		n=1;
		scanf("%s", input);
		for(int k=0; k<strlen(input); k++){
			if(input[k]=='O'){
				add+=n;
				n++;
			}
			else{
				n=1;
			}
		}
		printf("%d\n", add);
	}
}
