#include <stdio.h>
int main()
{
    long long int cnt=0;
    int n,m,b, big=0, small=256, level=0, block=0, time=99999999;
    scanf("%d%d%d",&n, &m, &b);
    int arr[n*m];
    for(int i=0; i<n*m; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > big)
            big=arr[i];
        if(arr[i] < small)
            small=arr[i];
    }

    for(int i=small; i<=big; i++){
        block=b;
        cnt=0;
        for(int j=0; j<n*m; j++){
            if(arr[j] > i){
                cnt+=((arr[j]-i)*2);
                block+=(arr[j]-i);
            }
            else{
                block-=(i-arr[j]);
                cnt+=(i-arr[j]);
            }
        }
        
        if(block<0){
            break;
        }
        if(cnt < time){
            time=cnt;
            level=i;
        }
        else if(cnt == time){
            if(i > level){
                time=cnt;
                level=i;
            }
        }
        //printf(" i=%d cnt=%d, level=%d, time=%d\n",i,cnt,level,time);
    }

    printf("%d %d\n", time, level);
}
