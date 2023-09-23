#include <stdio.h>
#include <stdlib.h>

int main(){
	
	long int A, B;
	long int c, d;

	scanf("%ld %ld", &A, &B);
	d = 0;
	
	for(c = A;c <= B;c++){
		d = d + c;
	}printf("%ld\n", d);
	return 0;
}
