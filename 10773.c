#include <stdio.h>
int main()
{
    int n, input, cnt=0, sum=0;
    scanf("%d", &n);
    int stack[n+1];
    for(int i=0; i<n; i++){
        scanf("%d", &input);
        if(input != 0){
            stack[cnt] = input;
            cnt++;
        }
        else{
            stack[cnt-1] = 0;
            cnt--;
        }
    }
    if(cnt == 0)
        printf("0\n");
    else{
        for(int i=0; i<cnt; i++){
            sum+=stack[i];
        }
        printf("%d\n", sum);
    }
}
