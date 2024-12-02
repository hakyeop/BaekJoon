#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    if(t%10 == 0)
        printf("%d %d %d\n", t/300, (t%300)/60, ((t%300)%60)/10);
    else
        printf("-1\n");
}
