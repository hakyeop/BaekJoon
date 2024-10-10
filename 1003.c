#include <stdio.h>

int main()
{
    int n, input;
    long long int arr[42][2];
    arr[0][0]=1;
    arr[0][1]=0;
    arr[1][0]=0;
    arr[0][1]=1;

    for(int i=2; i<42; i++){
        for(int ii=0; ii<2; ii++){
            arr[i][ii]=arr[i-1][ii]+arr[i-2][ii];
        }
    }
    scanf("%d", &n);
    for(int i=0; i<n; i++){ 
        scanf("%d", &input);
        printf("%lld %lld\n", arr[input][0], arr[input][2]);
    }
}
