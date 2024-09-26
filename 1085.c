#include <stdio.h>
int main()
{
	int x, y, w, h;
	scanf("%d%d%d%d", &x, &y, &w, &h);
	int px, py, mx, my;
	px = w - x;
	py = h - y;
	if (px <= x && px <= y && px <= py)
		printf("%d\n", px);
	else if (py <= x && py <= y && py <= px)
		printf("%d\n", py);
	else if (x <= px && x <= py && x <= y)
		printf("%d\n", x);
	else
		printf("%d\n", y);
}
