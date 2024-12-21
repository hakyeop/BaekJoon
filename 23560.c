#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int dp[16];
    scanf("%d", &n);

    dp[0]=0;
    dp[1]=2;
    for(int i=2; i<16; i++){
        dp[i]=dp[i-1]*3;
    }
    printf("%d\n", dp[n]);
}
