#include <stdio.h>

int main(){
	int a, b, i;
	scanf("%d %d", &a, &b);
	
	for(i = a; i < a+b; i++){
		printf("%d\n", i);
	}
	return 0;
}
