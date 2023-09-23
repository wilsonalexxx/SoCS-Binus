#include <stdio.h>

int main(){
	
	int a, b, c , d, x, y, z;
	
	scanf("%d", &a);
	scanf("%d %d", &b, &c);
	scanf("%d %d", &d, &x);
	scanf("%d %d", &y, &z);
	
	printf("%d\n", (b/c)<<c);
	printf("%d\n", (d/x)<<x);
	printf("%d\n", (y/z)<<z);
}
