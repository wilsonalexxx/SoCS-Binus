#include <stdio.h>

int main(){
    int N, K;
    int i, j;
    scanf("%d %d", &N, &K);
    
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            if (i % K == 0){
                printf("#");
            }else{
                printf(".");
            }
        }
        printf("\n");
    }
    printf("\n");
    
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            if(j % K == 0){
            printf("#");
            }else{
            printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}
