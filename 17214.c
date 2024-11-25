#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char input[30];
    scanf("%s", input);
    int a=0,b=0,cnt=0, xflag=0,count=0;
    for(int i=0; i<strlen(input); i++){
        if(input[i] == 'x'){
            cnt=i+1;
            xflag=1;
            break;
        }
    }
    a=atoi(input);
    if(xflag==1){
        for(int i=cnt; i<strlen(input); i++){
            input[i-cnt]=input[i];
            count++;
        }
        for(int i=count; i<strlen(input); i++){
            input[i]='\0';
        }
        b=atoi(input);
    }
    
    
    if(xflag==1){
        if(a==2){
            printf("xx");
        }
        else if(a<-2 || a>2 ){
            printf("%dxx", a/2);
        }
        else if(a==-2)
            printf("-xx");
        else{
            printf("%dxx", a/2);
        }

        if(b==1){
            printf("+x+W\n");
        }
        else if(b==0){
            printf("+W\n");
        }
        else if(b==-1){
            printf("-x+W\n");
        }
        else if(b>1){
            printf("+%dx+W", b);
        }
        else{
            printf("%dx+W", b);
        }
    }
    else{
        if(a==1){
            printf("x+W\n");
        }
        else if(a<-1 || a>1){
            printf("%dx+W\n", a);
        }
        else if(a==-1)
            printf("-x+W\n");
        else{
            printf("W", a);
        }
    }
}
