#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j;
	int a, b;
	scanf("%d %d", &a, &b);
	int F[a][b];
	
	for(i = 0; i < a; i++){
		for(j = 0; j < b; j++){
			scanf("%d", &F[i][j]);
		}
	}
	int c;
	scanf("%d", &c);
	while(c--){
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		F[x-1][y-1] = z;
	}
	for(i = 0; i < a; i++){
		for(j = 0; j < b; j++){
			if (j == b-1){
				printf("%d", F[i][j]);
			}else{
				printf("%d ", F[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
