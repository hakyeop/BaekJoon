#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int pack[m], each[m], pmin=2000, emin=2000, ans=0;
    for(int i=0; i<m; i++){
        scanf("%d%d", &pack[i], &each[i]);
        if(pmin > pack[i])
            pmin=pack[i];
        if(emin > each[i])
            emin = each[i];
    }
    if(6*emin > pmin){
        ans=pmin*(n/6);
    }
    else{
        ans=(n/6)*emin*6;
    }
    if((n%6)*emin > pmin)
        ans+=pmin;
    else
        ans+=((n%6)*emin);
    printf("%d\n", ans);
}
