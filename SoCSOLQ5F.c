#include <stdio.h>
#include <stdlib.h>

int main(){
	int T, n, m = 1;
	int i;
	scanf("%d", &T);
	
	while(T--){
		scanf("%d", &n);
		long long int F[n];
		long long int max = -1000000;
		for(i = 0; i < n; i++){
			scanf("%lld", &F[i]);
			if(F[i] > max){
				max = F[i];
			}
		}
		long long int count = 0;
		for(i = 0; i < n; i++){
			if(F[i] == max){
				count++;
			}
		}
		long long int max2 = -1000000;
		for(i = 0; i < n; i++){
			if(F[i] > max2 && F[i] != max){
				max2 = F[i];
			}
		}
		if(count > 1){
			printf("Case #%d: %lld\n", m, max + max);
		}else{
			printf("Case #%d: %lld\n", m, max + max2);
		}
		m++;
	}
	return 0;
}
