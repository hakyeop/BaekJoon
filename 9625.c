#include <stdio.h>
int main()
{
    long long int arr[46]={};
    long long int brr[46]={};
    arr[0]=1;
    brr[0]=0;
    arr[1]=0;
    brr[1]=1;
    for(int i=2; i<=45; i++){
        arr[i] = arr[i-1] + arr[i-2];
        brr[i] = brr[i-1] + brr[i-2];
    }
    int n;
    scanf("%d", &n);
    printf("%d %d\n", arr[n], brr[n]);
}
