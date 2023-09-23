#include <stdio.h>

int main(){
	int T, A, B, i;
	scanf("%d", &T);
	
	for(i = 1; i <= T; i++){
		scanf("%d %d", &A, &B);
		
		if(A > B){
			printf("Case #%d: Go-Jo\n", i);
		}
		if(A < B){
			printf("Case #%d: Bi-Pay\n", i);
		}
	}
	return 0;
}
