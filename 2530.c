#include <stdio.h>
int main(){
    int h,m,s,timer;
    scanf("%d %d %d %d", &h, &m, &s, &timer);
    s+=timer;
    while(s>=60){
        m++;
        s=s-60;
    }
    while(m>=60){
        h++;
        m=m-60;
    }
    h=h%24;
    printf("%d %d %d\n", h,m,s);
}
