#include <stdio.h>

struct barang{
	char ID[9];
	char makanan[16];
	long long int P;
};

int main(){
	int n;
	scanf("%d", &n);
	struct barang F[n];
	
	int i, j;
	for(i = 0; i < n; i++){
		scanf("%s", F[i].ID); getchar();
		scanf("%[^\n]", F[i].makanan);
		scanf("%lld", &F[i].P);
	}
	struct barang temp;
	for(i = 0; i < (n - 1); i++){
		for(j = 0 ; j < (n-1-i); j++){
			if(F[j].P > F[j + 1].P){
				temp = F[j];
				F[j] = F[j+1];
				F[j + 1] = temp;
			}
		}
	}
	
	int median;
	median = n/2;
	
	for(i = 0; i < n; i++){
		if(F[i].P >= F[median].P){
			printf("%s %s\n", F[i].ID, F[i].makanan);
		}
	}
}
