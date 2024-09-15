#include <stdio.h>
#include <string.h>
int main()
{
	char str[51], g[3];
	double h, all=0;
	double c=0;
	
	for(int i=0; i<20; i++){
		scanf("%s %lf %s", str, &h, g);
		if(g[0] != 'P'){
			c+=h;
		}
		if(strcmp(g, "A+") == 0)
			all+=4.5*h;
		else if(strcmp(g, "A0") == 0)
			all+=4*h;
		else if(strcmp(g, "B+") == 0)
			all+=3.5*h;
		else if(strcmp(g, "B0") == 0)
			all+=3*h;
		else if(strcmp(g, "C+") == 0)
			all+=2.5*h;
		else if(strcmp(g, "C0") == 0)
			all+=2*h;
		else if(strcmp(g, "D+") == 0)
			all+=1.5*h;
		else if(strcmp(g, "D0") == 0)
			all+=1*h;
		else if(g[0] == 'F')
			all+=0;
	}
	printf("%.6lf\n", all/c);
}
