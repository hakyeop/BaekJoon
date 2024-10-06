#include <stdio.h>

int main()
{
    int n, cnt=0, max=0, maxi=0, count=0, a=0, b=0;
    scanf("%d", &n);
    int arr[100005];
    int input[100005];
    char result[100005*2];
    b=n;

    for(int i=0; i<n; i++){
        scanf("%d", &input[i]);
        if(max<input[i]){
            max=input[i];
            maxi=i;
        }
    }
    for(int i=0; i<=n; i++){
        arr[i]=i;
    }
    while(n>0){
        if(arr[cnt] == input[count]){ //pop
            
            arr[cnt]=0;
            for(int i=cnt; i<n; i++){
                arr[i]=arr[i+1];
            }
            cnt--;
            
            n--;
            /*for(int i=1; i<=n; i++){
                printf("%d ", arr[i]);
            }*/
            result[a]='-';
            a++;
            count++;
            
        }
        else if(arr[cnt] < input[count]){ //push의 조건은 조금 파쿠리 쳤다
            result[a]='+';
            cnt++;
            a++;
        }
        else{
            printf("NO\n");
            return 0;
        }
    }
    for(int i=0; i<b*2; i++){
        printf("%c\n", result[i]);
    }
}
