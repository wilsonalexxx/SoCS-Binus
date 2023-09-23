#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int cs = 1;
	
	while(T--){
		int N;
		scanf("%d", &N);
		int F[N];
		
		int i, j;
		for(i = 0; i < N; i++){
			scanf("%d", &F[i]);
		}
		
		int temp;
		for(i = 0;i < N-1; i++){
			for(j = 0; j < (N-1-i); j++){
				if(F[j] > F[j + 1]){
					temp = F[j];
					F[j] = F[j+1];
					F[j + 1] = temp;
				}
			}
		}
		
		int med;
		if(N % 2 == 0){
			med = N/2;
		}else if(N % 2 != 0){
			med = N/2+1;
		}
		
		int count = 0;
		int count1 = 0;
		for(i = 0;i < med-1; i++){
			if(med-1 <= 2){
				count = F[i+1] - F[i];
			}
				if(F[i+1]-F[i] >= F[i+2]-F[i+1]){
				count = F[i+1] - F[i];
				}else{
					count1 = F[i+1] - F[i];
				}
		}

		int beda = 0;
		int beda1 = 0;
		for(j = med; j < N-2; j++){
			if(med-1 <= 2){
				beda = F[j+1] - F[j];
			}
			
			if(F[j+1]-F[j] >= F[j+2]-F[j+1]){
				beda = F[j+1] - F[j];
			}else{
				beda1 = F[j+2]-F[j+1];
			}
		}
		
		int count2;
		if(count >= count1){
			count2 = count;
		}else{
			count2 = count1;
		}
		
		
		int beda2;
		if(beda >= beda1){
			beda2 = beda;
		}else{
			beda2 = beda1;
		}
		
		if(count2 >= beda2){
			printf("Case #%d: %d\n", cs, count2);
		}else if(beda2 > count2){
			printf("Case #%d: %d\n", cs, beda2);
		}
		cs++;
	}
	
	return 0;
}
