#include <stdio.h>
int main(){
    int a1,a0,c,n0,flag=1;
    scanf("%d%d%d%d",&a1,&a0,&c,&n0);
    for(int n=n0; n<=100; n++){
        if(a1*n+a0 > c*n)
            flag=0;
    }
    if(flag==1)
        printf("1\n");
    else
        printf("0\n");
}
