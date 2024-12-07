#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n];
    scanf("%d", &arr[0]);
    for(int k=1; k<n; k++){
        scanf("%d", &arr[k]);
        arr[k]+=arr[k-1];
    }
    int i,j;
    long long int sum;
    for(int k=0; k<m; k++){
        scanf("%d%d", &i, &j);
        if(i!=1){
            printf("%d\n", arr[j-1]-arr[i-2]);
        }
        else{
            printf("%d\n", arr[j-1]);
        }
    }
}
