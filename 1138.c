#include <stdio.h>
int main()
{
    int arr[10]={}, n, zcnt, input, loc;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &input);
        zcnt=0;
        loc=0;
        while(zcnt!=input){
            if(arr[loc]==0)
                zcnt++;
            loc++;
        }
        while(arr[loc]!=0)
            loc++;
        arr[loc]=i+1;
    }
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}
