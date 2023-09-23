#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>

int hasil;

void pacmon(char** matrix, int x, int y, int baris, int kolom, int** hitung){
	
	if(x < 0 || y < 0 || x >= baris || y >= kolom || matrix[x][y] == '#' || hitung[x][y] == 1){
		return;
	}
	if(matrix[x][y] == '*'){
		hasil++;
	}
	
	hitung[x][y] = 1;
	
	int A[] = {0, 0, 1, -1};
	int B[] = {1, -1, 0, 0};
	
	int z;
	for(z = 0; z < 4; z++){
		pacmon(matrix, x+A[z], y+B[z], baris, kolom, hitung);
	}
}

int main(){
	int T;
	scanf(" %d", &T);
	
	int x;
	for(x = 1;x <= T; x++){
		int baris, kolom;
		scanf(" %d %d", &baris, &kolom);
		char** matrix;
		int** hitung;
		matrix = (char**)malloc(baris*sizeof *matrix);
		hitung = (int**)malloc(baris*sizeof *hitung);
		
		int i;
		for(i = 0; i < baris; i++){
			matrix[i] = (char*)malloc(kolom*sizeof *matrix[i]);
			hitung[i] = (int*)malloc(kolom*sizeof *hitung[i]);
		}
		int mulaiX = -1;
		int mulaiY = -1;
		
		int j, k;
		for(j = 0; j < baris; j++){
			for(k = 0; k < kolom; k++){
				hitung[j][k] = 0;
				scanf(" %c", &matrix[j][k]);
				if(matrix[j][k] == 'P'){
					mulaiX = j;
					mulaiY = k;
				}
			}
		}
		hasil = 0;
		pacmon(matrix, mulaiX, mulaiY, baris, kolom, hitung);
		printf("Case #%d: %d\n", x, hasil);
	}
	return 0;
}
