#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[3];
    arr[0]=1;
    arr[1]=1;
    for(int i=2; i<=n; i++){
        arr[i%3]=(arr[(i-1)%3]+arr[(i-2)%3])%15746;
    }
    printf("%d\n",arr[n%3]);
}
