#include <stdio.h>

int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int dp[301]={}, stair[301]={}, n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &stair[i]);
    }

    dp[1]=0;
    dp[1]=stair[1];
    dp[2]=stair[1]+stair[2];
    for(int i=3; i<=n; i++){
        dp[i]=stair[i]+max(dp[i-2], stair[i-1]+dp[i-3]);
    }
    printf("%d\n", dp[n]);
}
