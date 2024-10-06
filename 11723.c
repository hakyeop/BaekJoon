#include <stdio.h>
#include <string.h>
int main()
{
    int S[20], input, n;
    char str[10];
    scanf("%d", &n);
    while(n>0){
        scanf("%s", str);
        if(strcmp(str, "add") == 0){
            scanf("%d", &input);
            S[input-1]=1;
        }
        else if(strcmp(str, "remove") == 0){
            scanf("%d", &input);
            S[input-1]=0;
        }
        else if(strcmp(str, "check") == 0){
            scanf("%d", &input);
            if(S[input-1] == 1)
                printf("1\n");
            else
                printf("0\n");
        }
        else if(strcmp(str, "toggle") == 0){
            scanf("%d", &input);
            if(S[input-1] == 1)
                S[input-1] = 0;
            else
                S[input-1] = 1;
        }
        else if(strcmp(str, "all") == 0){
            for(int i=0; i<20; i++)
                S[i]=1;
        }
        else if(strcmp(str, "empty") == 0){
            for(int i=0; i<20; i++)
                S[i]=0;
        }
        n--;
    }
}
