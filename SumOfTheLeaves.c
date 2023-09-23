#include <stdio.h>

void cek(int pos, int sum, int data[], int ukur){
	int x = data[pos];
	if(pos*2+1 < ukur){
		cek(pos*2+1, sum + x, data, ukur);
		if(pos*2+2 < ukur)
			cek(pos*2+2, sum + x, data, ukur);
		}else{
			printf("%d\n", sum + x);
	}
}

int main(){
	int T;
	scanf("%d", &T);
	int ukuran;
	
	int i;
	for(i = 1; i <= T; i++){
		scanf("%d", &ukuran);
		int data[ukuran];
		
		int j;
		for(j = 0; j < ukuran; j++){
			scanf("%d", &data[j]);
		}
		printf("Case #%d:\n", i);
		cek(0, 0, data, ukuran);
	}
	return 0;
}
