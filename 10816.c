#include <stdio.h>

int main()
{
    int n,m,a;
    int arr[20000001]={};
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        a=a+10000000;
        arr[a]++;
    }
    scanf("%d", &m);
    int bar[m];
    for(int i=0; i<m; i++){
        scanf("%d", &a);
        a=a+10000000;
        bar[i]=arr[a];
    }
    for(int i=0; i<m; i++)
        printf("%d ", bar[i]);
}

//어차피 메모리가 커서 걍 2천만개의 배열을 만들었습니다.
