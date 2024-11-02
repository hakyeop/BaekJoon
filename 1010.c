#include <stdio.h>
int main(){
    int n, i1, i2;
    long long int f;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        f=1;
        scanf("%d%d", &i1, &i2);
        for(int j=0; j<i1; j++){
            f*=i2-j;
            f/=1+j;
        }
        printf("%lld\n", f);
    }
}
