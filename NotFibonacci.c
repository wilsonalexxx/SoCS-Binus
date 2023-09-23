#include <stdio.h>

int main(){
	int F[1001];
	int K, count;
	scanf("%d %d", &F[0], &F[1]); getchar();
	scanf("%d", &K);
	
	int i;
	for(i = 2; i <= K; i++){
		F[i] = F[i-1] + F[i-2];
		count = F[i];
	}
	printf("%d\n", count);
}
