#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1000005];
    scanf("%s", str);
    int z=0,o=0, f;
    if(str[0]=='0'){
        f=0;
        z++;
    }
    else{
        f=1;
        o++;
    }
    for(int i=0; i<strlen(str); i++){
        if(f==1 && str[i]=='0'){
            z++;
        }
        else if(f==0 && str[i]=='1'){
            o++;
        }
        if(str[i]=='0')
            f=0;
        else
            f=1;
    }
    if(z>o)
        printf("%d", o);
    else
        printf("%d", z);
}
