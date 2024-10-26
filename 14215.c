#include <stdio.h>
int main()
{
    int a,b,c,max=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c){
        printf("%d\n", a+b+c);
        return 0;
    }
    if(a>=b && a>=c){
        while(max<b+c && max<=a)
            max++;
        printf("%d\n", max+b+c-1);
    }
    else if(b>=a && b>=c){
        while(max<a+c && max<=b)
            max++;
        printf("%d\n", max+a+c-1);
    }
    else{
        while(max<b+a && max<=c)
            max++;
        printf("%d\n", max+b+a-1);
    }
}
