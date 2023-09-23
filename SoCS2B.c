#include <stdio.h>

int main(){
	int A, B, C, D, E, F, G;
	scanf("%d %d", &A, &B);
	
	C = A + B;
	D = A - B;
	E = A * B;
	F = A / B;
	G = A % B;
	
	printf("%d\n", C);
	printf("%d\n", D);
	printf("%d\n", E);
	printf("%d\n", F);
	printf("%d\n", G);
	
	return 0;
}
