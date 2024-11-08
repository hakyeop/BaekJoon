#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void *b){
    if(*(int*)a > *(int*)b)
        return 1;
    else
        return -1;
}

int main(){
    int n,m,count=0;
    scanf("%d %d", &n, &m);
    int arr[n+m];
    for(int i=0; i<n+m; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, n+m, sizeof(int), compare);
    for(int i=1; i<n+m; i++){
        if(arr[i] == arr[i-1])
            count+=2;
    }
    printf("%d\n", n+m-count);
}
