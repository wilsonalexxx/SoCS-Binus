#include <stdio.h>

int main(){
	int K;
	scanf("%d", &K);
	
	for(int cs = 1; cs <= K; cs++){
		int N;
		scanf("%d", &N);
		int F[N];
		
		for(int i = 0; i < N; i++){
			scanf("%d", &F[i]);
		}
		
		int temp;
		for (int i=0; i<N-1; i++){
            for(int j=0; j<N-1-i; j++){
                if (F[j] > F[j+1]){
                    temp = F[j];
                    F[j] = F[j+1];
                    F[j+1] = temp;
                }
            }
        }
        
        int search;
        scanf("%d", &search);
        
        printf("CASE #%d: ", cs);
        
        for(int i = 0; i < N; i++){
        	if(search == F[i]){
        		if(F[i] == F[N-1]){
        			printf("%d %d\n", F[i-1], F[i]);
        			break;
				}else{
					printf("%d %d\n", F[i], F[i+1]);
					break;
				}
			}else if(i == N-1){
				printf("-1 -1\n");
			}
		}
	}
	return 0;
}
