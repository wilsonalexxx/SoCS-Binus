#include <stdio.h>
#include <math.h>

int main (){
	int T;
	int i, j;
	scanf("%d", &T);
	
	for(i = 1; i <= T; i++){
		long long int N;
		scanf("%lld", &N);
		long long int fac = 0;
		
		for(j = 1; j <= sqrt(N); j++){
			if(N % j == 0) fac +=2;
			if(j * j == N) fac--;
		}
		printf("Case #%d: %lld\n", i, fac);
	}
	return 0;
}
