#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void *b)
{
    if (*(int*)a >*(int*)b)
        return 1;
    else
        return -1;
}

int binsearch(int arr[], int input, int start, int end){
    int mid;
    while (start <= end)
	{
		int mid = (start + end) / 2;
		if (input > arr[mid])
			start = mid + 1;
		else if (input < arr[mid])
			end = mid - 1;
		else
			return 1;
	}
    return 0;
}

int main()
{
    int n,m, input, cnt;
    scanf("%d", &n);
    int arr[100005];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), compare);
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        scanf("%d", &input);
        printf("%d\n", binsearch(arr, input, 0, n-1));
    }
}

/* 계속 틀리길래 왜 틀리나 했는데, compare 함수에서 처음엔 (*(int*)a - *(int*)b)의 값을 리턴하게 했는데, 이러면 오버플로우가 나서 안된다는걸 20분동안 삽질하다 알았다.
다음부턴 좀 더 생각하고 풀어야겠다.*/
