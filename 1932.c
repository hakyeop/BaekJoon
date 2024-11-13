#include <stdio.h>

int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int dp[501][501], n, big;
    int tri[501][501];

    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int ii=1; ii<=i; ii++){
            scanf("%d", &tri[i][ii]);
        }
    }
    dp[1][1]=tri[1][1];
    big=dp[1][1];
    for(int i=2; i<=n; i++){
        dp[i][1]=dp[i-1][1]+tri[i][1];
        for(int ii=2; ii<i; ii++){
            dp[i][ii]=max(dp[i-1][ii], dp[i-1][ii-1])+tri[i][ii];
            big=max(dp[i][ii], big);
        }
        dp[i][i]=dp[i-1][i-1]+tri[i][i];
        big=max(max(dp[i][1], dp[i][i]), big);
    }
    printf("%d\n", big);
}
