#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    if(*(int*)a > *(int*)b)
        return 1;
    else
        return -1;
}

int main()
{
    int n, exc, sum=0, cnt, avg;
    scanf("%d", &n);
    int arr[n];
    if(n==0){
        printf("0\n");
        return 0;
    } //아니 의견이 하나도 없는 문제는 0을 표시하는걸 까먹고 몇번 삽질하다가 겨우 꺴네
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    exc=n*15/100;
    if(n*15 % 100 >= 50)
        exc++;
    cnt=n-exc*2;
    for(int i=exc; i<n-exc; i++){
        sum+=arr[i];
    }
    avg=sum/cnt;
    if((sum%cnt)*2 >= cnt)
        avg++;
    //printf("avg : %d, cnt : %d, sum : %d exc : %d\n", avg, cnt, sum, exc);
    printf("%d\n", avg);
}
