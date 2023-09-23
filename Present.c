#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int cs = 1;
	
	while(T--){
		int n;
		scanf("%d", &n);
		int F[n];
		
		int i, j;
		for(i = 0; i < n; i++){
			scanf("%d", &F[i]);
		}
		
		int temp;
		for(i = 0; i < (n - 1); i++){
			for(j = 0 ; j < (n-1-i); j++){
				if(F[j] > F[j + 1]){
					temp = F[j];
					F[j] = F[j+1];
					F[j + 1] = temp;
				}
			}
		}
		
		int count = 0;
		int max = F[i];

		for(i = 0; i < n; i++){
			if(F[i] == max){
				count++;
			}else{
				count = 0;
			}
		}
		printf("Case #%d: %d\n", cs, count);
		cs++;
	}
	return 0;
}
