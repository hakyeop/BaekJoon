#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
    if(*(int*)a > *(int*)b)
        return 1;
    else
        return -1;
}

int main(){
    int arr[5], avg=0;
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
        avg+=arr[i];
    }
    qsort(arr, 5, sizeof(int), compare);
    printf("%d\n%d\n", avg/5, arr[2]);
}
