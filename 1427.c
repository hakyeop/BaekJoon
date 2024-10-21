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
    char str[20];
    scanf("%s", str);
    qsort(str, strlen(str), sizeof(str[0]), compare);
    printf("%s\n", str);
}
