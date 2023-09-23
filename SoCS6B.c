#include <stdio.h>

int main(){
	int T, n;
	int i, j, k;
	long int F[n];
	scanf("%d", &T);
	for(j = 1; j <= T; j++){
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			scanf("%ld", &F[i]);
		}
		printf("Case #%d: ", j);
		for(k = n -1; k >= 0; k--){
			if(k == 0){
				printf("%ld\n", F[k]);
			}else{
				printf("%ld ", F[k]);
			}
		}
	}
	return 0;
}
