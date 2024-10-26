#include <stdio.h>
int main(){
    long long int n, cnt=0;
    scanf("%lld", &n);
    for(long long int i=0; i<n-1; i++)
        for(long long int ii=i+1; ii<n; ii++)
            cnt++;
    printf("%lld\n2\n",cnt);
}
