#include <stdio.h>
int main()
{
    int a,b,c,max;
    while(1){
        scanf("%d%d%d", &a, &b, &c);
        if(a==0 && b==0 && c==0)
            break;
        if(a==b && b==c)
            printf("Equilateral\n");
        else if(a>=b && a>=c){
            if(a>=b+c)
                printf("Invalid\n");
            else if((a==b && b!=c) || (a==c && b!=c) || (b==c && a!=c))
                printf("Isosceles\n");
            else
                printf("Scalene\n");
        }
        else if(b>=c && b>=a){
            if(b>=a+c)
                printf("Invalid\n");
            else if((a==b && b!=c) || (a==c && b!=c) || (b==c && a!=c))
                printf("Isosceles\n");
            else
                printf("Scalene\n");
        }
        else if(c>=b && c>=a){
            if(c>=a+b)
                printf("Invalid\n");
            else if((a==b && b!=c) || (a==c && b!=c) || (b==c && a!=c))
                printf("Isosceles\n");
            else
                printf("Scalene\n");
        }
    }
}
