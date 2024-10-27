#include <stdio.h>
#include <math.h>
int main()
{
    int t,cnt, f=1, g=0;
    long long int x,y,a;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%lld%lld", &x, &y);
        a=(int)sqrt(y-x);
        if(y-x==a*a)
            printf("%lld\n", a*2-1);
        else if(a*a < y-x && y-x <= a*a+a)
            printf("%lld\n", a*2);
        else if(a*a+a < y-x && y-x <= (a+1)*(a+1))
            printf("%lld\n", a*2+1);
    }
}
