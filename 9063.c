#include <stdio.h>
int main()
{
    int n, x,y,xmax=-10000,ymax=-10000,xmin=10000,ymin=10000;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        if(x > xmax)
            xmax=x;
        if(y > ymax)
            ymax=y;
        if(x < xmin)
            xmin=x;
        if(y < ymin)
            ymin=y;
    }
    printf("%d\n", (xmax-xmin) * (ymax-ymin));
}
