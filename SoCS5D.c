#include <stdio.h>

int main(){
	int N, T, i, j ,k;
	scanf("%d", &T);
	
	for(k = 1; k <= T; k++){
		scanf("%d", &N);
		if(N % 2 == 1){
			for(i = 1; i <= N; i++){
				for(j = 1; j <= N; j++){
					if(i == 1 || i == N || i == j || j == 1 || j == N || j == N - i + 1){
						printf("*");
					}else {
						printf(" ");
					}
				}
				printf("\n");
			}
		}
		printf("\n");
	}
}
