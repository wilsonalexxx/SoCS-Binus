#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int T, cs;
	scanf("%d", &T);
	
	while(T--){
		long int x, y;
		scanf("%ld %ld", &x, &y);
		
		long int keep[700];
		int i = 0;
		int panjang;
		
		while(x != 0){
			keep[i] = x%2;
			x /=2;
			i++;
			panjang = i;
		}
		int j;
		for(j = panjang-1; j > 0; j--){
			keep[j];
		}
		printf("%ld\n", keep[y]);
	}
}
