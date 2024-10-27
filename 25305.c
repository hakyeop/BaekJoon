#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
    if(*(int*)a < *(int*)b)
        return 1;
    else
        return -1;
}

int main(){
    int n,k;
    scanf("%d%d", &n, &k);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    printf("%d\n", arr[k-1]);
}
