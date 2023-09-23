#include <stdio.h>
#include <stdlib.h>

int main(){
	int T, n;
	int i, cs;
	scanf("%d", &T);
	
	for (cs = 1; cs <= T; cs++){
		scanf("%d", &n);
		long int F[n], E[n], gagal = 0;
		for (i=0; i<n; i++){
			scanf("%ld", &F[i]);
		}
		for(i=0; i<n; i++){
			scanf("%ld", &E[i]);
		}
		printf("Case #%d: ", cs);
		for(i=0; i <n; i++){
			if(E[i] > F[i]){
				gagal++;
			}
		}
		printf("%ld\n", gagal);
	}
}
