#include <stdio.h>

int main(){
	
	int a;
	double b, c, e, f;
	scanf("%d %lf", &a, &b);
	
	c = (b/100*a) + a;
	e = (b/100*c) + c;
	f = (b/100*e) + e;
	
	printf("%.2lf\n", f);
	
	return 0;
}
