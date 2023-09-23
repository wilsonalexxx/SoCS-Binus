#include <stdio.h>
#include <stdlib.h>

int main(){
    int T, a, b;
    int i, j, k;
	scanf("%d", &T);
    int F[T];
    for(i = 0; i < T; i++){
        scanf("%d", &F[i]);
    }
    int N;
	scanf("%d", &N);
    for(j = 0; j < N; j++){
        scanf("%d %d", &b, &a);
        F[b-1] = a;
        printf("Case #%d: ", j+1);
        for(k = 0; k < T; k++){
            if(k == T-1){
            printf("%d\n", F[k]);
            }
            else{
                printf("%d ", F[k]);
            }
        }
    }
}
