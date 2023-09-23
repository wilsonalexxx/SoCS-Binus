#include <stdio.h>
#include <stdlib.h>

int main(){
	int T, x;
	int i, j;
	scanf("%d", &T);
	
	for(j = 1; j <= T; j++){
		scanf("%d", &x);
		printf("Case #%d:\n", j);
		for(i = 1; i <= x; i++){
			if(i % 15 == 0){
				printf("%d Lili\n", i);
			}else if(i % 3 == 0 || i % 5 == 0){
				printf("%d Jojo\n", i);
			}else{
				printf("%d Lili\n", i);
			}
		}
	}
	return 0;
}
