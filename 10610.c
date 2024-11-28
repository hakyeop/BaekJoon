#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b){
    if(*(char*)a < *(char*)b)
        return 1;
    else
        return -1;
}

int main(){
    char str[1000000];
    long long int a=0;
    int temp;
    scanf("%s", str);
    for(int i=0; i<strlen(str); i++){
        a+=(str[i]-'0');
    }
    qsort(str, strlen(str), sizeof(char), compare);
    if(str[strlen(str)-1] == '0' && a%3==0)
        printf("%s", str);
    else
        printf("-1\n");
}
