#include <stdio.h>
#include <stdlib.h>

int X[10001];

int main(){
	int T;
	scanf("%d", &T);
	
	int i, j;
	for(j = 1; j <= T; j++){
		int N;
		int Y;
		scanf("%d %d %d", &N, &X[0], &X[1]);
		
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
		printf("Case #%d: %d\n", i, Y);
	}
	return 0;
}
