#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void* b){
    if(*(int*)a < *(int*)b)
        return 1;
    else
        return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    double res;
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), compare);
    res=arr[0];
    for(int i=1; i<n; i++){
        res+=((double)arr[i]/2);
    }
    printf("%.5lf\n", res);
}
