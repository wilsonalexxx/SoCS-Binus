#include <stdio.h>
#include <string.h>

char X[201][201];

int main(){
	int R, C;
	scanf("%d %d", &R, &C);
	int i, j;
	for(i = 0;i < R; i++){
		for(j = 0; j < C; j++){
			scanf(" %c", &X[i][j]);
		}
	}
	
	int k;
	char temp;
	for(i = 0; i < R; i++){
		for(j = 0; j < C; j++){
			for(k = 0; k < C-1; k++){
				if(X[i][k] > X[i][k+1]){
					temp = X[i][k];
					X[i][k] = X[i][k+1];
					X[i][k+1] = temp;
				}
			}
		}
	}
	
	char tukar[201];
	for(i = 0; i < R-1; i++){
		for(j = 0; j < R-1-i; j++){
			if(strcmp(X[j], X[j+1]) < 0){
				strcpy(tukar, X[j]);
				strcpy(X[j], X[j+1]);
				strcpy(X[j+1], tukar);
			}
		}
	}
	
	for(i = 0; i < R; i++){
		for(j = 0; j < C; j++){
			printf("%c", X[i][j]);
		}
		printf("\n");
	}
}
