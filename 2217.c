#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
    if(*(int*)a > *(int*)b)
        return -1;
    else
        return 1;
}

int main()
{
    int n, max=0;
    scanf("%d", &n);
    int rope[n], gd[n];
    for(int i=0; i<n; i++)
        scanf("%d", &rope[i]);
    qsort(rope, n, sizeof(int), compare);
    max=rope[0];
    gd[0]=rope[0];
    for(int i=1; i<n; i++){
        gd[i]=rope[i]*(i+1);
        if(max < gd[i])
            max=gd[i];
    }
    printf("%d\n", max);
}
