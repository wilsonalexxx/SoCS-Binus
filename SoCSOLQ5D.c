#include <stdio.h>
#include <stdlib.h>

int main(){
	int T, N;
	int i, j, k;
	scanf("%d", &T);
	
	for(i = 1; i <= T; i++){
		scanf("%d", &N);
		long int sum = 0;
		long int sumsum = 0;
		long int F[N];
		for(j = 0; j < N; j++){
			scanf("%ld", &F[j]);
			sum = sum + F[j];
		}
		for(k = 0; k < N; k++){
			if(sum < F[k]){
				sumsum++;
			}
		}
		printf("Case #%d: %ld\n", i, sum);
		printf("%ld\n", sumsum);	
	}
	return 0;
}
