#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return strcmp((char *)a, (char *)b);
}

int main()
{
    int n,m,cnt, count=0, start, end, mid;
    scanf("%d%d", &n, &m);
    char uh[n][22]; //듣도 못한
    char us[m][22]; //보도 못한
    if(n>m)
        cnt=n;
    else
        cnt=m;
    char uhs[cnt][20];
    for(int i=0; i<n; i++){
        scanf("%s", uh[i]);
    }
    qsort(uh, n, sizeof(uh[0]), compare);
    for(int i=0; i<m; i++){
        scanf("%s", us[i]);
        start=0;
        end=n-1;
        mid=(start+end+1)/2;
        if(n==1){
            if(strcmp(uh[0], us[i]) == 0){
                strcpy(uhs[count], uh[0]);
                count++;
            }
        }
        else{
            while(start <= end){
                if(strcmp(uh[mid], us[i]) == 0){
                    strcpy(uhs[count], uh[mid]);
                    count++;
                    break;
                }
                else if(strcmp(uh[mid], us[i]) > 0){
                    end=mid-1;
                    mid=(end+start)/2;
                }
                else{
                    start=mid+1;
                    mid=(end+start)/2;
                }
            }
        }
    } 
    qsort(uhs, count, sizeof(uhs[0]), compare);
    printf("%d\n", count);
    for(int i=0; i<count; i++)
        printf("%s\n", uhs[i]);
}
