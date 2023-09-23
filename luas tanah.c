#include <stdio.h>

int main(){
	int N;
	int i = 0;
	printf("N = ");
	scanf("%d", &N);
	
	while(i < N){
		if(N > 7){
			i++;
			printf("%d ", i);
			N--;
		}
//		if (i == 7){
//			i = 0;
//			printf("%d ", i);
//		}
		else{
			i++;
			printf("%d ", i);
		}
	}
}
