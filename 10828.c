#include <stdio.h>
#include <string.h>

int main(){
    int arr[10000];
    int n, input,cnt, size=0;
    char str[20];
    for(int i=0; i<10000; i++){
        arr[i]=-1;
    }
    scanf("%d", &n);
    while(n>0){
        input=0, cnt=0;
        scanf("%s", str);
        if(strcmp(str, "pop")==0){
            if(size==0){
                printf("-1\n");
            }
            else{
                printf("%d\n", arr[size-1]);
                arr[size-1]=-1;
                size--;
            }
        }
        else if(strcmp(str, "size")==0){
            if(size!=0){
                printf("%d\n", size);
            }
            else{
                printf("0\n");
            }
        }
        else if(strcmp(str, "empty")==0){
            if(size==0)
                printf("1\n");
            else
                printf("0\n");
        }
        else if(strcmp(str, "top")==0){
            if(size==0){
                printf("-1\n");
            }
            else{
                printf("%d\n", arr[size-1]);
            }
        }
        else{
            scanf("%d", &input);
            arr[size]=input;
            size++;
        }
        n--;
    }
}
