#include <stdio.h>
int main(){
    int n, count=5;
    scanf("%d", &n);
    for(int i=1; i<n; i++){
        count+=4+(3*i);
        if(count >= 45678)
            count%=45678;
    }
    printf("%d\n", count);
}
