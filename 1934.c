#include <stdio.h>
int main(){
    int n,a,b,t=1;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        for(int j=1; j <= a && j <= b ; j++){
            if(a%j==0 && b%j==0)
                t=j;
        }
        printf("%d\n", (a*b)/t);
    }
}
