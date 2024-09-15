#include <stdio.h>
#include <string.h>
int main()
{
	char arr[5][20]={};
	int a=0;
	
	for(int i=0; i<5; i++){
		scanf("%s", arr[i]);
		if(a<strlen(arr[i]))
			a=strlen(arr[i]);
	}
	for(int i=0; i<a; i++){
		for(int j=0; j<5; j++){
			if(arr[j][i] != '\0')
				printf("%c", arr[j][i]);
		}
	}
}
