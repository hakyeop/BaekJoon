#include <stdio.h>
#include <math.h>

int main(){
    int n, input, max=-4001, min=4001, mid, maxcnt=0, maxin, count=0, a;
    int arr[8001]={};
    double savg=0;
    scanf("%d", &n);
    mid=n/2+1;
    for(int i=0; i<n; i++){
        scanf("%d", &input);
        arr[input+4000]++;
        if(max < input)
            max=input;
        if(min > input)
            min=input;
        savg+=input;
    }
    if((savg/n) > -1 && (savg/n)< 0)
        printf("0\n");
    else{
        printf("%.0lf\n", savg/n);
    }
    if(n==1){
        for(int i=0; i<8001; i++){
            if(arr[i] > 0)
                printf("%d\n", i-4000);
        }
    }
    else{
        for(int i=0; i<8001; i++){
            if(arr[i]>0){
                mid-=arr[i];
                if(mid <= 0){
                    printf("%d\n", i-4000);
                    break;
                }
            }
        }
    }
    for(int i=0; i<8001; i++){
        if(maxcnt < arr[i] && arr[i] > 0){
            maxcnt=arr[i];
            a=i;
        }
    }
    for(int i=0; i<8001; i++){
        if(maxcnt == arr[i] && arr[i] > 0){
            count++;
            maxin=i;
            if(count == 2){
                maxcnt=arr[i];
                maxin=i;
                break;
            }
        }
    }
    if(n>1)
        printf("%d\n", maxin-4000);
    else
        printf("%d\n", a-4000);
    printf("%d\n", max-min);
}
