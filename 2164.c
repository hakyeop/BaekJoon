#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n+1];
    for(int i=1; i<=n; i++)
        arr[i]=i;
    while(n>1){
        if(n%2==0){
            for(int i=1; i<=n/2; i++){
                arr[i]=arr[i*2];
            }
            n=n/2;
        }
        else{
            arr[1]=arr[n];
            for(int i=2; i<=n/2+1; i++){
                arr[i]=arr[(i-1)*2];
            }
            n=n/2+1;
        }
    }
    printf("%d\n", arr[1]);
}
