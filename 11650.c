#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x, y;
}location;

int compare(const void* x, const void* y)
{
    location *a = (location*)x;
    location *b = (location*)y;
    if(a->x < b->x){
        return -1;
    }
    else if(a->x > b->x){
        return 1;
    }
    else{
        if(a->y > b->y)
            return 1;
        else
            return -1;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    location* loc;
    loc = (location*)malloc(n*sizeof(location));

    for(int i=0; i<n; i++)
        scanf("%d%d", &loc[i].x, &loc[i].y);
    
    qsort(loc, n, sizeof(loc[0]), compare);

    for(int i=0; i<n; i++)
        printf("%d %d\n", loc[i].x, loc[i].y);
}
