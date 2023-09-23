#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int F[N];
	
	for(int i = 0; i < N; i++){
		scanf("%d", &F[i]);
	}
	
	
	int sum = 0;
	for(int i = 0; i < N; i++){
		sum += F[i];
	}
	
//	printf("%d", sum);
	
//	int med;
//	if((N % 2) == 0){
//		med = N / 2;
//	}else{
//		med = N / 2 + 1;
//	}
	
//	if(sum >= med){
//		printf("not easy\n");
//	}else{
//		printf("easy\n");
//	}
	
	if(sum > 0){
		printf("not easy\n");
	}else{
		printf("easy\n");
	}
	
	return 0;
}
