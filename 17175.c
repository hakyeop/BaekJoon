#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[51];
    arr[0]=1;
    arr[1]=1;
    for(int i=2; i<=50; i++){
        arr[i]=(arr[i-1]+arr[i-2]+1)%1000000007;
    }
    printf("%d\n", arr[n]);
}
