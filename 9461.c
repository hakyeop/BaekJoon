#include <stdio.h>
int main()
{
    int n,p;
    long long int arr[101];
    arr[1]=1;
    arr[2]=1;
    arr[3]=1;
    arr[4]=2;
    arr[5]=2;
    scanf("%d", &n);
    for(int i=6; i<=100; i++){
        arr[i]=arr[i-5]+arr[i-1];
    }
    for(int i=1; i<=n; i++){
        scanf("%d", &p);
        printf("%lld\n", arr[p]);
    }
}
