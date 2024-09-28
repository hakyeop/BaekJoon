#include <stdio.h>
int main()
{
    int a,b, count=1000, t1, t2, cnt;
    scanf("%d%d",&a,&b);
    char arr[a][b+1];
    for(int i=0; i<a; i++){
        scanf("%s", arr[i]);
    }

    for(int i=0; i<a-7; i++){
        for(int j=0; j<b-7; j++){
            cnt=0;
            t1=0;
            t2=0;
            for(int x=i; x<i+8; x++){
                for(int y=j; y<j+8; y++){
                    if((x+y)%2==0){
                        if(arr[x][y] != 'B')
                            t1++;
                    }
                    else
                        if(arr[x][y] != 'W')
                            t1++;
                }
            }
            for(int x=i; x<i+8; x++){
                for(int y=j; y<j+8; y++){
                    if((x+y)%2==0){
                        if(arr[x][y] != 'W')
                            t2++;
                    }
                    else
                        if(arr[x][y] != 'B')
                            t2++;
                }
            }
            if(t1>t2)
                cnt=t2;
            else
                cnt=t1;

            if(cnt < count){
                count=cnt;
            }
        }
    }
    printf("%d\n", count);
}
