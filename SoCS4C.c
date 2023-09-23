#include <stdio.h>

int main(){
	int T, N, N2, N3;
	int i, j, k;
	scanf("%d", &T);
	
	for(i = 1; i <= T; i++){
		scanf("%d", &N);
		int F[N][N];
		
		for(j = 1; j <= N; j++){
			scanf("%d ", &F[j][j]);
			N = N + F[j][j];
		}
		printf("Case #%d: %d", i, F[j]);
	}
}
