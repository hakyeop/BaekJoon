#include <stdio.h>
int main()
{
    int t,big;
    long long int ans;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int n;
        ans=0;
        scanf("%d", &n);
        int arr[n];
        big=0;
        for(int j=0; j<n; j++){
            scanf("%d", &arr[j]);
        }
        big=arr[n-1];
        for(int j=n-2; j>=0; j--){
            if(arr[j] < big){
                ans+=(big-arr[j]);
            }
            else{
                big=arr[j];
            }
        }
        printf("%lld\n", ans);
    }
}
