#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void* b){
    if(*(int*)a > *(int*)b)
        return 1;
    else
        return -1;
}

int main()
{
    int n,t=0;
    int arr[1000], arr2[1000]={};
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    for(int i=0; i<n; i++){
        for(int ii=0; ii<=i; ii++){
            arr2[i]+=arr[ii];
        }
        t+=arr2[i];
    }
    printf("%d\n", t);
}
