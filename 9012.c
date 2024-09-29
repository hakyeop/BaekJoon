#include <stdio.h>
#include <string.h>

int main()
{
    int n, cnt;
    char str[52];
    scanf("%d", &n);
    while(n>0){
        scanf("%s", str);
        cnt=0;
        for(int i=0; i<strlen(str); i++){
            if(str[i] == '(')
                cnt++;
            else
                cnt--;
            if(cnt < 0){
                break;
                printf("NO\n");
            }
        }
        if(cnt==0)
            printf("YES\n");
        else
            printf("NO\n");
        n--;
    }
}
