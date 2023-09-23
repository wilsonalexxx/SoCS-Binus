#include <stdio.h>
#include <stdlib.h>
// 2501976503 - Fabian Habil Ramdhan

int main(){
	int i, j;
    int x, y; scanf("%d %d", &x, &y);
    int z[x][y];
    for( i = 0; i < x; i++){
        for( j = 0; j < y; j++){
            scanf("%d", &z[i][j]);
        }
    }
    int t; scanf("%d", &t);
    while(t--){
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        z[a-1][b-1] = c;
    }
    for( i = 0; i < x; i++){
        for( j = 0; j < y; j++){
            if(j == y-1){
            printf("%d", z[i][j]);
            }
            else{
            printf("%d ", z[i][j]);
            }
        }
    printf("\n");
    }
}
