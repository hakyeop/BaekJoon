#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
    if(*(int*)a < *(int*)b)
        return 1;
    else
        return -1;
}

int main(){
    int n,m, crane_cnt=0, box_done=0, crane_index;
    scanf("%d", &n);
    int crane[n];
    for(int i=0; i<n; i++){
        scanf("%d", &crane[i]);
    }
    scanf("%d", &m);
    int box[m];
    for(int i=0; i<m; i++){
        scanf("%d", &box[i]);
    }

    qsort(crane, n, sizeof(int), compare);
    qsort(box, m, sizeof(int), compare);

    if(crane[0] < box[0]){       
        printf("-1");
        return 0;
    }

    while(box_done<m){
        crane_index=0;
        if(box_done>m){
            printf("%d",crane_cnt);
            break;
        }
        for(int i=0; i<m; i++){
            if(crane_index >= n)
                break;
            if(box[i]!=0){
                if(crane[crane_index] >= box[i]){
                    box[i]=0;
                    crane_index++;
                    box_done++;
                }
            }
        }
        crane_cnt++;
    }
    printf("%d\n", crane_cnt);
}
