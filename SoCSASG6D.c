#include <stdio.h>
#include <stdlib.h>

int main(){
	int T, n;
	int i, j, k, l;
	scanf("%d", &T);
	int z = 1;
	
	while(T--){
		scanf("%d", &n);
		long int F[n];
		
		for(j = 0; j < n; j++){
			scanf("%ld", &F[j]);
		}
		for(k = 0; k<n; k++){
			for (l = k+1; l < n; l++){
				if (F[k] > 	F[l]){
					int a = F[k];
					F[k] = F[l];
					F[l] = a;
				}
			}
		}
		long int b = 1;
		long int c = F[0];
		long int d = 1;
		
		for(i = 1;i < n;i ++){
			if(F[i] == F[i - 1]){
				d++;
			}else{
				if(d > b){
					b = d;
					c = F[i-1];
				}
				d = 1;
			}
		}
		if(d > b){
			b = d;
			c = F[n - 1];
		}
		printf("Case #%d: %ld\n", z, b);
		printf("%ld\n", c);
		z++;
	}
	return 0;
}
