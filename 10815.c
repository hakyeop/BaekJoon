#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
    if(*(int*)a > *(int*)b)
        return 1;
    else
        return -1;
}

int main()
{
    int n,m, input,start,end,mid,f;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), compare);
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        f=0;
        start=0;
        end=n-1;
        mid=(n+1)/2;
        scanf("%d",&input);
        while(start<=end){
            if(arr[mid]==input){
                f=1;
                break;
            }
            else if(input > arr[mid]){
                start=mid+1;
                mid=(start+end)/2;
            }
            else{
                end=mid-1;
                mid=(start+end)/2;
            }
        }
        if(f==1)
            printf("1 ");
        else
            printf("0 ");
    }
}
