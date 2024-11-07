#include <stdio.h>
int main()
{
    int n;
    long long int arr[3];
    scanf("%d", &n);
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<=n; i++){
        arr[i%3]=(arr[(i-1)%3]+arr[(i-2)%3])%1000000007;
    }
    printf("%lld\n", arr[n%3]);
}
