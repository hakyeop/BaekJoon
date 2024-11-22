#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    if(*(int*)a>*(int*)b)
        return 1;
    else
        return -1;
}

int main()
{
    int n, max, ans=0, temp, cnt=0;
    int arr[50];
    int brr[50];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(int i=0; i<n; i++){
        scanf("%d", &brr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    for(int i=0; i<n; i++){
        temp=0;
        for(int j=0; j<n; j++){
            if(brr[temp] < brr[j]){
                temp=j;
            }
        }
        ans+=arr[i]*brr[temp];
        brr[temp]=-1;
    }
    printf("%d\n", ans);
}
