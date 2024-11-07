#include <stdio.h>
int main()
{
    int n,k;
    int arr[1001][1001];
    scanf("%d%d",&n,&k);
    for(int i=0; i<=n; i++){
        arr[i][0]=1;
        arr[i][i]=1;
    }
    for(int i=2; i<=n; i++){
        for(int j=1; j<i; j++){
            arr[i][j]=(arr[i-1][j-1]+arr[i-1][j])%10007;
        }
    }
    printf("%d\n", arr[n][k]);
}
