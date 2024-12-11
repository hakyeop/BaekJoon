#include <stdio.h>
int main()
{
    int n, h, cnt=1;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    h=arr[n-1];
    for(int i=n-2; i>=0; i--){
        if(arr[i] > h){
            cnt++;
            h=arr[i];
        }
    }
    printf("%d\n", cnt);
}
