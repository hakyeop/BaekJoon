#include <stdio.h>
int main()
{
    int n;
    long long int arr[91];
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<91; i++)
        arr[i]=arr[i-2]+arr[i-1];
    scanf("%d", &n);
    printf("%lld\n", arr[n]);
}