#include <stdio.h>

int map[10][10];
char H1, B1, H2, B2;
int langkahx[8] = {1, -1, 2, -2, 1, -1, 2, -2};
int langkahy[8] = {2, 2, 1, 1, -2, -2, -1, -1};

void kuda(int x, int y, int count){
	map[x][y] = count;
	int z;
	for(z = 0; z < 8; z++){
		int kx, ky;
		kx = x + langkahx[z];
		ky = y + langkahy[z];
		if(kx < 0 || kx > 7 || ky < 0 || ky > 7){
			
		}else{ //pasti di dalam papan
			if(map[kx][ky] > map[x][y] + 1){
				kuda(kx, ky, count+1);
			}
		}
	}
}

int main(){
	int T, i;
	
	scanf("%d", &T);getchar();
	
	for(i = 0; i < T; i++){
		scanf("%c%c %c%c", &H1, &B1, &H2, &B2);getchar();
		H1 -= 'A';
		H2 -= 'A';
		B1 -= '1';
		B2 -= '1';
		
		int j, k;
		for(j = 0;j < 10; j++){
			for(k = 0; k < 10;k++){
				map[j][k] = 1000000;
			}
		}
		map[H1][B1] = 0;
		kuda(H1, B1, 0);
		
		printf("Case #%d: %d\n", i+1, map[H2][B2]);
	}
}
