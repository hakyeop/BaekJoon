#include <stdio.h>
#include <string.h>
int main()
{
    char str[260];
    int verb, cnt;
    while(str[0] != '#'){
        verb=0;
        gets(str);
        cnt=strlen(str);
        if(str[0] == '#')
            return 0;
        for(int i=0; i<cnt; i++){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                verb++;
        }
        printf("%d\n", verb);
    }
}
