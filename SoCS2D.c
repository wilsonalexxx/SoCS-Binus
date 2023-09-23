#include <stdio.h>
#include <stdlib.h>

int main(){
	long int A, B, C, w, x, y, z, e, f, g, h, i, j, k, l;
	char char1, char2, char3, char4, char5;
	
	scanf("%c%ld%c%ld%c%c%c%ld%c%ld%c\n", &char1, &w, &char2, &x, &char3, &char4, &char1, &y, &char5, &z, &char3);
	scanf("%c%ld%c%ld%c%c%c%ld%c%ld%c\n", &char1, &e, &char2, &f, &char3, &char4, &char1, &g, &char5, &h, &char3);
	scanf("%c%ld%c%ld%c%c%c%ld%c%ld%c", &char1, &i, &char2, &j, &char3, &char4, &char1, &k, &char5, &l, &char3);
	
	A = (w+x)*(y-z);
	B = (e+f)*(g-h);
	C = (i+j)*(k-l);
	
	printf("%ld %ld %ld\n", A, B, C);
	
	return 0;
}
