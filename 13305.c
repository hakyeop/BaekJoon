#include <stdio.h>
#include <stdlib.h>

typedef struct{
    long long int road,city,gas; //road : 길, city : 도시당 기름가격, gas : 현위치부터 맨뒤까지 얼마나 거리가 남았는지 저장
}greed;

int compare(const void* a, const void* b){
    greed g1 = *(greed*)a;
    greed g2 = *(greed*)b;
    if( g1.city > g2.city)
        return 1;
    else
        return -1;
} //기름가격이 가장 싼 도시 순서로 정렬

int main()
{
    int n;
    long long int result=0, move=0;
    scanf("%d", &n);
    greed arr[n];
    for(int i=0; i<n-1; i++){
        scanf("%lld", &arr[i].road);
    }
    for(int i=0; i<n; i++){
        scanf("%lld", &arr[i].city);
    }
    arr[n-1].road=0; //마지막 도시의 도로 길이는 0
    arr[n-1].gas=0; //마지막 도시부터, 끝까지 남은 길이는 0
    for(int i=n-2; i>=0; i--){
        arr[i].gas=arr[i+1].gas+arr[i].road;
    }
    qsort(arr, n, sizeof(greed), compare);
    for(int i=0; i<n; i++){
        if(arr[i].gas-move > 0){
            result+=(arr[i].gas-move)*arr[i].city;
            move=arr[i].gas;
        }
    }
    printf("%lld\n", result);
}
