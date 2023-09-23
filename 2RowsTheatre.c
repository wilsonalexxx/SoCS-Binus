#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int cs = 1;
	int i, j;
	
	while(T--){
		int N;
		scanf("%d", &N);
		long long int F[N];
		
		for(i = 0; i < N; i++){
			scanf("%lld", &F[i]);
		}
		
		int x, y;
		long long int temp;
		for(x = 0;x < N-1; x++){
			for(y = 0; y < (N-1-x); y++){
				if(F[y] > F[y+1]){
					temp = F[y];
					F[y] = F[y+1];
					F[y + 1] = temp;
				}
			}
		}
		
		int med;
		med = N / 2;// 6/2 = 3
		
		long long int count = 0;//1 2 3 | 6 7 9
		count = F[1] - F[0];    //0 1 2 | 3 4 5
		for(i = 0; i < med-1; i++){
			if(F[i+2] >= F[med-1]){
				if(count > F[med - 1] - F[i + 1]){
					count = count;
					break;
				}else if(F[med - 1] - F[i+1] > count){
					count = (F[med-1] - F[i+1]);
					break;
				}else{
					break;
				}
				}else if(count > F[i + 2] - F[i + 1]){
					count = count;
			}else if ( F[i + 2] - F[i + 1] > count){
				count = F[i + 2] - F[i + 1];
			}
		}
//		printf("count = %d\n", count);

		
		long long int beda = 0;
		beda = F[med+1] - F[med];// 1 2 3 6 7 9
//		printf("beda = %d\n", beda);
		for(j = med; j < N-1; j++){
			if(F[j+2] >= F[N-1]){
				if(beda > F[j + 2] - F[j + 1]){
					beda = beda;
					break;
				}else if(F[N-1] - F[j+1] > beda){
					beda = (F[N-1] - F[j+1]);
					break;
				}else{
					break;
				}
				}else if(beda > F[j + 2] - F[j + 1]){
					beda = beda;
			}else if (F[j + 2] - F[j + 1] > beda){
				beda = F[j + 2] - F[j + 1];
			}
		}
//		printf("beda = %d\n", beda);
		if(med == 1){
				count = 0;
			}
		if(med == 1){
				beda = 0;
			}
		if(count >= beda){
			printf("Case #%d: %lld\n", cs, count);
		}else if(beda >= count){
			printf("Case #%d: %lld\n", cs, beda);
		}
		cs++;
	}
	
	return 0;
}
