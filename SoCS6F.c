#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int T, beda, panjang;
	int i, j;
	char huruf[500];
	char s[500];
	scanf("%d", &T); getchar();
	
	for(i = 1; i <= T; i++){
		scanf("%[^\n]s", huruf); getchar;
		
		panjang = strlen(huruf);
		beda = 0;
		
		for(j = 0; j < panjang; j++){
			if(huruf[j] != huruf[panjang-j-1]){
				beda = 1;
				break;
			}
		}if(beda){
			printf("Case #%d: Nah, it's not a palindrome\n", i);
		}else{
			printf("Case #%d: Yay, it's a palindrome\n", i);
		}
	}
	return 0;
}
