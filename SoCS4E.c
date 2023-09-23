#include <stdio.h>

int main(){
	float jojo, lili, bibi, N, a;
	int P, i;
	float ratarata;
	
	scanf("%d", &P);
	scanf("%f %f %f", &jojo, &lili, &bibi);
	                                 
	for(i = 1;i <= P; i++){
		scanf("%f", &a);
		N = N + a;
	}
	
	ratarata = (jojo + lili + bibi + N)/(3 + P);
	
	if(jojo >= ratarata){
		printf("Jojo lolos\n");
	}else{
		printf("Jojo tidak lolos\n");
	}if(lili >= ratarata){
		printf("Lili lolos\n");
	}else{
		printf("Lili tidak lolos\n");
	}if(bibi >= ratarata){
		printf("Bibi lolos\n");
	}else{
		printf("Bibi tidak lolos\n");
	}
	return 0;
}
