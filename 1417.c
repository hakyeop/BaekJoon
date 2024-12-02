#include <stdio.h>
int main()
{
    int n, big, cnt=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    while(1){
        if(n==1)
            break;
        big=n-1;
        for(int i=n-2; i>=0; i--){
            if(arr[i] > arr[big]){
                big=i;
            }
        }
        if(big == 0)
            break;
        arr[big]--;
        arr[0]++;
        cnt++;
    }
    printf("%d\n", cnt);
}
