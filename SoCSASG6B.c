#include <stdio.h>
#include <stdlib.h>

int main(){
	int T, n;
	int i, j, k;
	scanf("%d", &T);
	
	for(k = 1; k <= T; k++){
		scanf("%d", &n);
		long int F[n][n], a;
		
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				scanf("%ld", &F[i][j]);
			}
		}
		printf("Case #%d: ", k);
		for(i = 0; i < n; i++){
			a = 0;
			for(j = 0; j < n; j++){
				a = a + F[j][i];
			}
			if(i == n-1){
				printf("%ld\n", a);
			}else{
				printf("%ld ", a);
			}
		}
	}
	return 0;
}
