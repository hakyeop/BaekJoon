#include <stdio.h>
int main()
{
    int n;
    long long int arr[117];
    scanf("%d", &n);
    arr[1]=1;
    arr[2]=1;
    arr[3]=1;
    for(int i=4; i<=n; i++){
        arr[i]=(arr[(i-1)]+arr[(i-3)]);
    }
    printf("%lld\n", arr[n]);
}
