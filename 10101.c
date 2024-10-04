#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c && (a+b+c)==180)
        printf("Equilateral\n");
    else if(a==b && a!=c && (a+b+c)==180)
        printf("Isosceles\n");
    else if(b==c && b!=a && (a+b+c)==180)
        printf("Isosceles\n");
    else if(c==a && c!=b && (a+b+c)==180)
        printf("Isosceles\n");
    else if(a!=b && a!=c && (a+b+c)==180)
        printf("Scalene\n");
    else
        printf("Error\n");
}