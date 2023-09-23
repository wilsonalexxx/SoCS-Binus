#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int cs = 1;
	
	while(T--){
		int N, X;
		scanf("%d %d", &N, &X);
		int F[N];
		
		int i, j;
		for(i = 0;i < N; i++){
			scanf("%d", &F[i]);
		}
		
		int temp;
		int count = 0;
		for(i = 0; i < (N-1); i++){
			for(j = 0; j < (N-1-i); j++){
				if(F[j] > F[j + 1]){
					temp = F[j];
					F[j] = F[j+1];
					F[j + 1] = temp;
					count = count + X;
				}
			}
		}
		printf("Case #%d: %d\n", cs, count);
		cs++;
	}
	return 0;
}
