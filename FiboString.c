#include <stdio.h>


char fibo(char x, char y, int z){
	if(z == 0){
		printf("%c", x);
	}else if(z == 1){
		printf("%c", y);
	}else{
		fibo(x, y, z-1);
		fibo(x, y, z-2);
	}
}

int main(){
	int T, i;
	scanf("%d", &T);
	
	for(i = 1; i <= T; i++){
		int n;
		char a, b;
		scanf("%d %c %c", &n, &a, &b);
		
		printf("Case #%d: ", i);
		fibo(a, b, n);
		printf("\n");
	}
}
