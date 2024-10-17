#include <stdio.h>
int main()
{
    int b;
    scanf("%d", &b);
    b=b*5;
    printf("%d\n", b-400);
    if(b-400 > 100)
        printf("-1\n");
    else if(b-400 < 100)
        printf("1\n");
    else
        printf("0\n");
}
