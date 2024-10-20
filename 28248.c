#include <stdio.h>
int main()
{
    int P,Q, Sum;
    scanf("%d%d",&P,&Q);
    Sum=P*50-(Q*10);
    if(P>Q)Sum+=500;
    printf("%d\n",Sum);
}
