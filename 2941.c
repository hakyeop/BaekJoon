#include <stdio.h>
#include <string.h>
int main()
{
	int a=0;
	char str[101];
	scanf("%s", str);
	for(int i=0; i<strlen(str); i++){
		a++;
		if (str[i]== '=') {
            if (str[i - 1] == 'c' || str[i - 1] == 's')
                a--;
            if (str[i - 1] == 'z'){
                a--;
                if (str[i - 2] == 'd')
                    a--;
            }
        }
		if(str[i]=='-')
			if(str[i-1] == 'c' || str[i-1] == 'd')
				a--;
		if(str[i] == 'j')
			if(str[i-1] == 'l' || str[i-1] == 'n')
				a--;
		//printf("%d %d\n", i, a);
	}
	printf("%d\n", a);
	return 0;
}
