#include <stdio.h>
int main(){
    int Apoint=100,Bpoint=100,dice1,dice2,n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d%d",&dice1,&dice2);
        if(dice1 < dice2)
            Apoint-=dice2;
        else if(dice1 > dice2)
            Bpoint-=dice1;
    }
    printf("%d\n%d\n",Apoint, Bpoint);
}
