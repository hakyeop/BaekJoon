#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==0 || b==0){
        c=c*c;
        printf("%d\n", c-a-b);
    }
    else{
        printf("%.0f\n", sqrt(a+b));
    }
}
