#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    if(*(int*)a > *(int*)b)
        return -1;
    else
        return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    for(int i=0; i<n-2; i++){
        if(arr[i] < arr[i+1] + arr[i+2]){
            printf("%d\n", arr[i]+arr[i+1]+arr[i+2]);
            return 0;
        }
    }
    printf("-1\n");
}
