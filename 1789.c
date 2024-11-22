#include <stdio.h>
int main()
{
    long long int s,n=0,cnt=0;
    scanf("%lld", &s);
    for(long long int i=1;;i++){
        if(n > s){
            printf("%lld", cnt-1);
            break;
        }
        n+=i;
        cnt++;
    }
}
