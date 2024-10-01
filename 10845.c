#include <stdio.h>
#include <string.h>
int main()
{
    int n, size=0, input;
    int arr[10001];
    for(int i=0; i<10001; i++)
        arr[i]=-1;
    char str[10];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", str);
        if(strcmp(str, "push")==0){
            scanf("%d", &input);
            arr[size]=input;
            size++;
        }
        else if(strcmp(str, "pop")==0){
            if(size!=0){
                printf("%d\n", arr[0]);
                for(int i=0; i<size-1; i++){
                    arr[i]=arr[i+1];
                }
                size--;
            }
            else{
                printf("-1\n");
            }
        }
        else if(strcmp(str, "size")==0){
            printf("%d\n", size);
        }
        else if(strcmp(str, "empty")==0){
            if(size > 0)
                printf("0\n");
            else
                printf("1\n");
        }
        else if(strcmp(str, "front")==0){
            if(size>0){
                printf("%d\n", arr[0]);
            }
            else{
                printf("-1\n");
            }
        }
        else if(strcmp(str, "back")==0){
            if(size>0){
                printf("%d\n", arr[size-1]);
            }
            else
                printf("-1\n");
        }
    }
}
