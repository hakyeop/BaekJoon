#include <stdio.h>
int main()
{
    int d,temp;
    int arr[10001]={};
    for(int i=1; i<=10000; i++){
        temp=i;
        d=i;
        while(d > 0){
            temp += d%10;
            d/=10;
        }
        if(temp < 10001){
            arr[temp]+=1;
        }
    }
    for(int i=1; i<=10000; i++){
        if(arr[i]<1)
            printf("%d\n", i);
    }
}
