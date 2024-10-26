#include <stdio.h>
int main(){
    int N, max=0;
    int arr[10]={};
    scanf("%d", &N);
    while(N>0){
        arr[N%10]++;
        N/=10;
    }
    arr[6]+=arr[9];
    if(arr[6]%2==1)
        arr[6]++;
    arr[6]/=2;
    for(int i=0; i<9; i++){
        if(arr[i] > max)
            max=arr[i];
    }
    printf("%d\n", max);
}
