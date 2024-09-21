#include <stdio.h>
int main()
{
	int input[8], min=1, max=8, n=0;
	for(int i=0; i<8; i++){
		scanf("%d", &input[i]);
	}
	for(int i=0; i<8; i++){
		if(input[i] == min && n==0){
			min++;
		}
		else if(input[i] == max && n==0){
			max--;
		}
		else
			n++;
	}
	if(n==0 && min==9)
		printf("ascending\n");
	else if(n==0 && max==1)
		printf("descending\n");
	else
		printf("mixed\n");
}
