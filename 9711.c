#include <stdio.h>
int main()
{
    long long int arr[10001]={};
    arr[1]=1;
    arr[2]=1;
    int n, p;
    long long int q;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d%lld",&p,&q);
        for(int i=3; i<=p; i++){
            arr[i]=(arr[i-1]+arr[i-2])%q;
        }
        if(q==1)
            printf("Case #%d: 0\n", i);
        else
            printf("Case #%d: %lld\n", i, arr[p]);
    }
}
