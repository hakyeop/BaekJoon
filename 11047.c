#include <stdio.h>

int main()
{
    int n,input,coin=0;
    int arr[10];
    scanf("%d %d", &n, &input);
    for(int i=n-1; i>=0; i--){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if((input/arr[i]) > 0){
            coin+=input/arr[i];
            input=input%arr[i];
        }
    }
    printf("%d\n", coin);
}
