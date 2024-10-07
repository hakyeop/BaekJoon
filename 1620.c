#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int number;
	char name[21];
}pokemon;

int compare(const void*x, const void*y)
{
    pokemon *a = (pokemon*)x;
    pokemon *b = (pokemon*)y;

    if(strcmp(a->name, b->name) > 0)
        return 1;
    else
        return -1;
}

int main()
{
	int n,m, start, mid, end;
    char str[22];
	scanf("%d%d", &n, &m);
	pokemon* poke;
    pokemon* puki;
	poke = (pokemon*)malloc(n * sizeof(pokemon));
    puki = (pokemon*)malloc(n * sizeof(pokemon));
    
	for (int i = 0; i < n; i++){
		scanf("%s", poke[i].name);
        strcpy(puki[i].name, poke[i].name);
        puki[i].name;
        poke[i].number = i+1;
    }

    qsort(poke, n, sizeof(poke[0]), compare);

	for (int i = 0; i < m; i++){
        scanf("%s", str);
        if(atoi(str) > 0){
            printf("%s\n", puki[atoi(str)-1].name);
        }
        else{
            start=0;
            end=n-1;
            mid=(start+end+1)/2;
            while(start <= end){
                if(strcmp(poke[mid].name, str) == 0){
                    printf("%d\n", poke[mid].number);
                    break;
                }
                else if(strcmp(poke[mid].name, str) > 0){
                    end=mid-1;
                    mid=(start+end)/2;
                }
                else{
                    start=mid+1;
                    mid=(start+end)/2;
                }
            }
        }
    }
}
