#include <stdio.h>

int main(){
	int T, N, i, j;
	long int a, sum;
	scanf("%d", &T);
	
	for(i = 1; i <= T; i++){
		sum = 0;
		scanf("%d", &N);
		
	for(j = 0;j < N; j++){
		scanf("%ld", &a);
		sum = sum + a;
		}
		printf("Case #%d: %ld\n", i, sum);
 	}
	return 0;
}
