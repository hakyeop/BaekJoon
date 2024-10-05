#include <stdio.h>
int main()
{
    int t,n,m,max,front, ans;
    int arr[100];
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d%d", &n, &m);
        for(int j=0; j<n; j++){
            scanf("%d", &arr[j]);
        }
        ans=1;
        front=0;
        while(1){
            max=0;
            for(int j=0; j<n; j++){
                if(max < arr[j])
                    max=arr[j]; //배열에서 가장 큰 값을 찾는다.
            }
            while(arr[front] != max){ //arr[front]의 값이 max의 값과 같아질때까지 반복
                front = (front + 1) % n; //front+1을 하면서, n의 범위를 넘어가지 않고 순환 배열이 되도록 n의 나머지로 계속 나눠줌
            }
            if(front == m) //arr[front]가 가장 큰 값, front == m이라면 arr[m]값이 현재 가장 큰 수, 반복문 탈출
                break;
            arr[front] = 0; //front != m 이니 arr[front]의 값을 0으로 제거
            ans++;  //ans의 값 증가
        }
        printf("%d\n", ans);
    }
}

// 파쿠리친 코드지만 분석 열심히 해서 했습니다.
