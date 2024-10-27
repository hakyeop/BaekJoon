#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b){
    return(strcmp(a,b));
}

int main(){
    int n,m,start,mid,end,cnt=0;
    scanf("%d%d", &n, &m);
    char str[n][505];
    char input[505];
    for(int i=0; i<n; i++){
        scanf("%s", str[i]);
    }
    qsort(str, n, sizeof(str[0]), compare);
    for(int i=0; i<m; i++){
        scanf("%s", input);
        start=0;
        end=n-1;
        mid=(start+end+1)/2;
        while(start <= end){
            if(strcmp(input, str[mid])==0){
                cnt++;
                break;
            }
            else if(strcmp(input, str[mid]) > 0){
                start=mid+1;
                mid=(start+end)/2;
            }
            else{
                end=mid-1;
                mid=(start+end)/2;
            }
        }
    }
    printf("%d\n", cnt);
}
