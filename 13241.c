#include <stdio.h>
int main(){
    long long int n,a,b,t=1;
    scanf("%lld %lld", &a, &b);
    for(int j=1; j <= a && j <= b ; j++){
        if(a%j==0 && b%j==0)
            t=j;
    }
    printf("%lld\n", (a*b)/t);
}
