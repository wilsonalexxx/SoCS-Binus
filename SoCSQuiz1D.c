#include <stdio.h>
#include <stdlib.h>

int main(){
	int T, cs = 1;
	int i;
	scanf("%d", &T);
	
	while(T--){
		int n = 0;
		scanf("%d", &n);
		int F[n];
		for(i = 0; i < n; i++){
			scanf("%d", &F[i]);
		}
		int x = 0, y = 0;
		scanf("%d %d", &x, &y);
		x = F[x - 1];
		y = F[y - 1];
		if(x > y){
			printf("Case #%d : Bibi\n", cs);
		}else if(x == y){
			printf("Case #%d : Draw\n", cs);
		}else if (x < y){
			printf("Case #%d : Lili\n", cs);
		}
		cs++;
	}
}
