#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int T, n;
	int i, j, k;
	scanf("%d", &T);
	
	for(k = 1; k <= T; k++){
		scanf("%d", &n);
		long int F[n][n];
		long int sum = 0;
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				scanf("%ld", &F[i][j]);
			}
		}
		printf("Case #%d: ", k);
		for(i = 0; i < n; i++){
			sum = 0;
		for (j = 0; j < n; j++){
			sum = sum + F[j][i];
		}if(i == n-1){
			printf("%ld\n", sum);
		}else{
			printf("%ld ", sum);
		}
		}
	}
	return 0;
}
