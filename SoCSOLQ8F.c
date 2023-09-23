#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int cs = 1;
	
	while(T--){
		int n;
		scanf("%d", &n);
		int F[n][n];
		int i,j;
		
		for(i = 0; i < n; i++){
			for(j = 0;j < n;j++){
				scanf("%d", &F[i][j]);
			}
		}
		
		printf("Case #%d: ",cs);
		for(i = 0; i < n;i++){
			int m = 0;
			for(j = 0; j < n; j++){
				m = m + F[j][i];
			}
			if(i == n-1){
				printf("%d\n", m);
			}else{
				printf("%d ", m);
			}
		}
		cs++;
	}
	return 0;
}
