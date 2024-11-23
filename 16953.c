#include <stdio.h>
int main()
{
    int a,b,cnt=1;
    scanf("%d%d", &a, &b);
    while(1){
        if(a==b){
            break;
        }
        else if(a>b){
            cnt=-1;
            break;
        }
        if(b%2==0){
            b/=2;
            cnt++;
        }
        else if(b%10==1){
            b/=10;
            cnt++;
        }
        else{
            cnt=-1;
            break;
        }
    }
    printf("%d\n", cnt);
}
