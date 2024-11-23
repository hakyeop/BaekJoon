#include <stdio.h>
#include <string.h>
int main()
{
    char s[1005],t[1005],temp;
    scanf("%s%s",s,t);
    int slen=strlen(s);
    int tlen=strlen(t);
    while(1){
        if(slen > tlen){
            printf("0\n");
            break;
        }
        if(strcmp(s,t)==0){
            printf("1\n");
            break;
        }
        if(t[tlen-1]=='B'){
            t[tlen-1]='\0';
            tlen--;
            for(int i=0; i<tlen/2; i++){
                temp=t[i];
                t[i]=t[tlen-1-i];
                t[tlen-1-i]=temp;
            }
        }
        else if(t[tlen-1]=='A'){
            t[tlen-1]='\0';
            tlen--;
        }
        else{
            if(strcmp(s,t)==0){
                printf("1\n");
                break;
            }
            else{
                printf("0\n");
                break;
            }
        }
    }
}
