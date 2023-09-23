#include <stdio.h>

int main(){
	int N, T;
	int i, j, k;
	scanf("%d", &T);
	
	for(k = 1; k <= T; k++){
		scanf("%d", &N);
		printf("Case #%d:\n", k);
		for(i = 1; i <= N; i++){
			for(j = 1; j <=  N; j++){
				if(i + j <= N){
					printf(" ");
				}else if((i+j)%2 == 0){
					printf("*");
				}else{
					printf("#");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
