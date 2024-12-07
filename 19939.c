#include <stdio.h>
int main()
{
    int n,k, sum=0;
    scanf("%d%d",&n,&k);
    for(int i=1; i<=k; i++){
        sum+=i;
    }
    if(sum > n){
        printf("-1\n");
    }
    else{
        n-=sum;
        n%=k;
        if(n==0)
            printf("%d\n", k-1);
        else{
            printf("%d\n", k);
        }
    }
}
