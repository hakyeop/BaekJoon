#include <stdio.h>
int main(){
    int a,b,c,d,gcd=1,t, e,f;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for(int j=1; j <= b && j <= d ; j++){
        if(b%j==0 && d%j==0)
            gcd=j;
    }
    t=b*d/gcd;
    gcd=1;
    e=(a*(t/b) + c*(t/d));
    f=t;
    for(int j=1; j <= e && j <= f ; j++){
        if(e%j==0 && f%j==0)
            gcd=j;
    }
    e/=gcd;
    f/=gcd;
    printf("%d %d\n", e, f);
}
