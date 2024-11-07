#include <stdio.h>
int main(){
    long long int arr[31][31]={};
    for(int i=1; i<=30; i++){
        arr[i][1]=1;
        arr[i][i]=1;
        for(int j=2; j<i; j++){
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    int k,n;
    scanf("%d%d", &k,&n);
    printf("%lld\n", arr[k][n]);
}
