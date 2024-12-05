#include <stdio.h>
int main()
{
    int n;
    int dp[1516];
    scanf("%d", &n);
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(int i=3; i<=n; i++){
        dp[i]=((dp[i-2]*2)%1000000007+dp[i-1])%1000000007;
    }
    printf("%d\n", dp[n]);
}
