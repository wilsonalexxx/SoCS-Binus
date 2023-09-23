#include <stdio.h>

int main(){
	
	int a, b, e, x, y, z , f, m, n;
	char c, d;
	
	scanf("%d %c %d %c", &a, &c, &b, &d);
	scanf("%d %c %d %c", &x, &c, &y, &d);
	scanf("%d %c %d %c", &z, &c, &f, &d);
	
	e = a + b;
	n = x + y;
	m = z + f;
	
	printf("%d\n", e);
	printf("%d\n", n);
	printf("%d\n", m);
	
	return 0;
}
