#include <stdio.h>
int com(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int n, max=-10001;
    int arr[100000],dp[100000];

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    dp[0]=arr[0];
    max=dp[0];
    for(int i=1; i<n; i++){
        dp[i]=com(dp[i-1]+arr[i], arr[i]);
        if(max < dp[i])
            max=dp[i];
    }

    printf("%d\n", max);
}
