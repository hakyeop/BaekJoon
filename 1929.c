#include <stdio.h>
int main()
{
    int m,n, cnt;
    scanf("%d%d",&m, &n);


    for(int i=m; i<=n; i++){
        cnt=0;
        if(i==1)
            cnt++;
        else if(i<1000){
            for(int j=2; j<i; j++){
                if(i%j==0)
                    cnt++;
            }
        }
        else{
            for(int j=2; j<1000; j++){
                if(i%j==0)
                    cnt++;
            }
        }
        if(cnt==0)
            printf("%d\n", i);
        cnt=0;
    }
}
//걍 브루트 포스 사용
// 에라토스 테네스의 체 활용해서 1000000의 루트인 1000까지만 나누면 됨
