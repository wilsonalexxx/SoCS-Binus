#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int T = 3;
	int i;
	
	for(i = 0; i < T; i++){
		int n = 0;
		scanf("%d", &n);
		char F[n];
		scanf("%s", F);
		printf("%c%c\n", F[n-1], F[0]);
	}
	return 0;
}
