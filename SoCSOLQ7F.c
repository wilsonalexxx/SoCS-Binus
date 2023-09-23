#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	long int N;
	scanf("%ld", &N);
	long int F[N];
	int i;
	long int sum_genap = 0, sum_ganjil = 0;
	long int min = 100001;
	
	for(i = 0; i < N; i++){
		scanf("%ld", &F[i]);
		
			if (F[i] % 2 == 0){
				sum_genap += F[i];
			}else{
				sum_ganjil += F[i];
				if(F[i] < min){
					min = F[i];
				}
			}
			if (i == N-1 && sum_ganjil %2 != 0){
				sum_ganjil -= min;
			}
		}
		printf("%ld\n", sum_genap + sum_ganjil);

	return 0;
}
