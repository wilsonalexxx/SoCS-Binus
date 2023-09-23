#include <stdio.h>
#include <string.h>

int x[1000001];
int main(){
	int T;
	int i;
	scanf("%d", &T);
	int cs = 1;
	
	while(T--){
		int n;
		scanf("%d", &n);
		
		int F; 
		memset(x, 0, sizeof(x));
		int hitung = 0;
		
		for(i = 0; i < n; i++){
			scanf("%d", &F);
			if(x[F] != 1){
				x[F] = 1;
				hitung++;
			}
		}
		
		printf("Case #%d: %d\n", cs, hitung);
		cs++;
	}
}
