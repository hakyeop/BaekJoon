#include <stdio.h>
int main(){
    long long int arr[81];
    arr[1]=1;
    arr[2]=1;
    for(int i=3; i<=80; i++)
        arr[i]=arr[i-1]+arr[i-2];
    int n;
    scanf("%d", &n);
    if(n>1)
        printf("%lld\n", arr[n]*2+(arr[n]+arr[n-1])*2);
    else
        printf("4\n");
}
