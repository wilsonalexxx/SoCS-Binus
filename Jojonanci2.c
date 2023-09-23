#include <stdio.h>
#include <stdlib.h>

int main(){
	int T;
	scanf("%d", &T);
	long long int X[1010];
	
	int i;
	for(i = 1; i <= T; i++){
		int N;
		long long int Y = 0;
		scanf("%d %lld %lld", &N, &X[0], &X[1]);
		
		if(N == 0){
			Y = X[0];
		}else if(N == 1){
			Y = X[1];
		}else{
			for(i = 2; i <= N; i++){
				X[i] = X[i-1] - X[i-2];
				Y = X[i];	
			}
		}
		printf("Case #%d: %lld\n", i, Y);
	}
	return 0;
}
