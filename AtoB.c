#include <stdio.h>

int AtoB(int a, int b){
	if(a == 1 || a == b){
		return a;
	}else{
		if(a % 2 == 0){
			return(AtoB(a/2, b));
		}if(a % 2 != 0){
			return(AtoB(a*3+1, b));
		}
	}
}

int main(){
	int T;
	scanf("%d", &T);
	
	int i;
	for(i = 1; i <= T; i++){
		int A, B;
		scanf("%d %d", &A, &B);
		
		printf("Case #%d: ", i);
		
		if(AtoB(A, B) == B){
			printf("YES\n");
		}else if(AtoB(A, B) != B){
			printf("NO\n");
		}
	}
	return 0;
}
