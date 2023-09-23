#include <stdio.h>
#include <stdlib.h>

int main(){
	int T;
	int i, j, k;
	scanf("%d", &T);
	int F[T];
	int E[T];
	
	for(i = 0; i < T; i++){
		scanf("%d", &F[i]);
	}
	for(j = 0; j < T; j++){
		scanf("%d", &E[F[j]]);
	}
	for(k = 0; k < T; k++){
		if(k == T-1){
			printf("%d\n", E[k]);
		}else{
			printf("%d ", E[k]);
		}
	}
	return 0;
}
