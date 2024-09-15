#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int j=0;
	int b;
	long double a=0;
	char str[10];
	
	scanf("%s%d", str, &b);
	for(int i=strlen(str)-1; i>=0; i--){
		if(str[i] >= '0' && str[i] <= '9'){
			a+=(str[i]-'0')*pow(b, j);
		}
		else if(str[i] >= 'A' && str[i] <= 'Z'){
			a+=(str[i]-55)*pow(b, j);
		}
		j++;
		//printf("%d\n\n", i);
	}
	printf("%.0Lf\n", a);
}
