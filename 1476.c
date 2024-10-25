#include <stdio.h>

int main(){
    int e,s,m, cnt=1;
    int i=1,ii=1,iii=1;
    scanf("%d %d %d",&e,&s,&m);
    while(1){
        if(e==i && s==ii && m==iii){
            break;
        }
        cnt++;
        i++;
        ii++;
        iii++;
        if(i%15!=0)
            i%=15;
        if(ii%28!=0)
            ii%=28;
        if(iii%19!=0)
            iii%=19;
    }
    printf("%d\n", cnt);
}
