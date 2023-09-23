#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c, d, w, x, y, z, r, s, t, u;
	float E, F, G;
	
	scanf("%d %d %d %d\n", &a, &b, &c, &d);
	scanf("%d %d %d %d\n", &w, &x, &y, &z);
	scanf("%d %d %d %d", &r, &s, &t, &u);
	
	E = a/1.00*2.00 + b/2.00*4.00 + c/3.00*6.00 + d/4.00*4.00;
	F = w/1.00*2.00 + x/2.00*4.00 + y/3.00*6.00 + z/4.00*4.00;
	G = r/1.00*2.00 + s/2.00*4.00 + t/3.00*6.00 + u/4.00*4.00;
	
	printf("%.2f\n", E);
	printf("%.2f\n", F);
	printf("%.2f\n", G);

	return 0;
}
